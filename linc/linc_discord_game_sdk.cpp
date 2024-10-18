#include <hxcpp.h>
#include <iostream>
#include <memory>
#include "linc_discord_game_sdk.h"
#include "discord.h"

namespace linc {

	namespace discord_game_sdk {
		discord::Core* core{};
		discord::User currentUser;
		discord::User someUser;

		int create(int64_t clientID, uint64_t flags) {
			int result = (int)discord::Core::Create(clientID, flags, &core);
			
			core->UserManager().OnCurrentUserUpdate.Connect([]() {
				std::cout << "user updated! \n";
				core->UserManager().GetCurrentUser(&currentUser);
			});
			
			return result;
		}



		void getUser(int64_t userID, Dynamic& callback)
		{
			core->UserManager().GetUser(userID, [callback = std::move(callback)](discord::Result result, discord::User const& user)
			{

				std::cout << "nabbed user " << user.GetUsername() << '\n';
				
				const_cast<Dynamic&>(callback)((int)result);
				someUser = user; 
			});
		}

		const char* getUsername(bool current)
		{
			discord::User user;	
			if (current) user = currentUser; else user = someUser;		
			return currentUser.GetUsername();
		}

		int64_t getID(bool current)
		{
			discord::User user;
			if (current) user = currentUser; else user = someUser;
			if (!current) std::cout << user.GetId();
			return user.GetId();
		}

		const char* getAvatar(bool current)
		{
			discord::User user;
			if (current) user = currentUser; else user = someUser;
			return user.GetAvatar();
		}


	

		int run_callbacks() {
			return (int)core->RunCallbacks();
		}

		int register_command(const char* command) {
			return (int)core->ActivityManager().RegisterCommand(command);
		}

		int register_steam(uint32_t steamID) {
			return (int)core->ActivityManager().RegisterSteam(steamID);
		}

		void update_activity(int type, int64_t applicationID,
		const char* name, const char* state, const char* details,
		int64_t startTimestamp, int64_t endTimestamp,
		const char* largeImage, const char* largeText, const char* smallImage, const char* smallText,
		const char* partyID, int32_t partySize, int32_t partyMax,
		const char* matchSecret, const char* joinSecret, const char* spectateSecret,
		bool instance,
		Dynamic& callback) {
			discord::Activity activity{};
			activity.SetType((discord::ActivityType)type);
			activity.SetApplicationId(applicationID);
			activity.SetName(name);
			activity.SetState(state);
			activity.SetDetails(details);
			activity.GetTimestamps().SetStart(startTimestamp);
			activity.GetTimestamps().SetEnd(endTimestamp);
			activity.GetAssets().SetLargeImage(largeImage);
			activity.GetAssets().SetLargeText(largeText);
			activity.GetAssets().SetSmallImage(smallImage);
			activity.GetAssets().SetSmallText(smallText);
			activity.GetParty().SetId(partyID);
			activity.GetParty().GetSize().SetCurrentSize(partySize);
			activity.GetParty().GetSize().SetMaxSize(partyMax);
			activity.GetSecrets().SetMatch(matchSecret);
			activity.GetSecrets().SetJoin(joinSecret);
			activity.GetSecrets().SetSpectate(spectateSecret);
			activity.SetInstance(instance);
			
			core->ActivityManager().UpdateActivity(activity, [callback = std::move(callback)](discord::Result result) {
				const_cast<Dynamic&>(callback)((int)result);
			});
		}

		void clear_activity(Dynamic& callback) {
			core->ActivityManager().ClearActivity([callback = std::move(callback)](discord::Result result) {
				const_cast<Dynamic&>(callback)((int)result);
			});
		}

		void send_request_reply(int64_t userID, int reply, Dynamic& callback) {
			core->ActivityManager().SendRequestReply(userID, (discord::ActivityJoinRequestReply)reply, [callback = std::move(callback)](discord::Result result) {
				const_cast<Dynamic&>(callback)((int)result);
			});
		}

		void send_invite(int64_t userID, int type, const char* content, Dynamic& callback) {
			core->ActivityManager().SendInvite(userID, (discord::ActivityActionType)type, content, [callback = std::move(callback)](discord::Result result) {
				const_cast<Dynamic&>(callback)((int)result);
			});
		}

		void accept_invite(int64_t userID, Dynamic& callback) {
			core->ActivityManager().AcceptInvite(userID, [callback = std::move(callback)](discord::Result result) {
				const_cast<Dynamic&>(callback)((int)result);
			});
		}

		void on_activity_join(Dynamic& callback) {
			core->ActivityManager().OnActivityJoin.Connect([callback = std::move(callback)](const char* secret) {
				const_cast<Dynamic&>(callback)(secret);
			});
		}

		void on_activity_spectate(Dynamic& callback) {
			core->ActivityManager().OnActivitySpectate.Connect([callback = std::move(callback)](const char* secret) {
				const_cast<Dynamic&>(callback)(secret);
			});
		}

		void on_activity_join_request(Dynamic& callback) {
			core->ActivityManager().OnActivityJoinRequest.Connect([callback = std::move(callback)](discord::User user) {
				const_cast<Dynamic&>(callback)(user.GetId(), user.GetUsername(), user.GetDiscriminator(), user.GetAvatar(), user.GetBot());
			});
		}

		void on_activity_invite(Dynamic& callback) {
			core->ActivityManager().OnActivityInvite.Connect([callback = std::move(callback)](discord::ActivityActionType type, discord::User user, discord::Activity activity) {
				// soon
			});
		}
	}
}