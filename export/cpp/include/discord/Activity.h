// Generated by Haxe 4.3.3
#ifndef INCLUDED_discord_Activity
#define INCLUDED_discord_Activity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_6db1f306f8fa425f
#define INCLUDED_6db1f306f8fa425f
#include "C:/Users/Home/Documents/GitHub/discord_game_sdk/haxe/discord/_internal/ffi.h"
#endif
HX_DECLARE_CLASS1(discord,Activity)
HX_DECLARE_CLASS1(discord,ActivityAssets)
HX_DECLARE_CLASS1(discord,ActivityParty)
HX_DECLARE_CLASS1(discord,ActivitySecrets)
HX_DECLARE_CLASS1(discord,ActivityTimestamps)

namespace discord{


class HXCPP_CLASS_ATTRIBUTES Activity_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Activity_obj OBJ_;
		Activity_obj();

	public:
		enum { _hx_ClassId = 0x57359a9b };

		void __construct( ::Dynamic type, ::Dynamic applicationID,::String name,::String state,::String details, ::discord::ActivityTimestamps timestamps, ::discord::ActivityAssets assets, ::discord::ActivityParty party, ::discord::ActivitySecrets secrets, ::Dynamic instance, ::Dynamic supportedPlatforms);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="discord.Activity")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"discord.Activity"); }
		static ::hx::ObjectPtr< Activity_obj > __new( ::Dynamic type, ::Dynamic applicationID,::String name,::String state,::String details, ::discord::ActivityTimestamps timestamps, ::discord::ActivityAssets assets, ::discord::ActivityParty party, ::discord::ActivitySecrets secrets, ::Dynamic instance, ::Dynamic supportedPlatforms);
		static ::hx::ObjectPtr< Activity_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type, ::Dynamic applicationID,::String name,::String state,::String details, ::discord::ActivityTimestamps timestamps, ::discord::ActivityAssets assets, ::discord::ActivityParty party, ::discord::ActivitySecrets secrets, ::Dynamic instance, ::Dynamic supportedPlatforms);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Activity_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Activity",ef,e9,63,bf); }

		 DiscordActivity internal_;
		int get_type();
		::Dynamic get_type_dyn();

		int set_type(int v);
		::Dynamic set_type_dyn();

		::cpp::Int64 get_applicationID();
		::Dynamic get_applicationID_dyn();

		::cpp::Int64 set_applicationID(::cpp::Int64 v);
		::Dynamic set_applicationID_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

		::String set_name(::String v);
		::Dynamic set_name_dyn();

		::String get_state();
		::Dynamic get_state_dyn();

		::String set_state(::String v);
		::Dynamic set_state_dyn();

		::String get_details();
		::Dynamic get_details_dyn();

		::String set_details(::String v);
		::Dynamic set_details_dyn();

		 ::discord::ActivityTimestamps _timestamps;
		 ::discord::ActivityTimestamps get_timestamps();
		::Dynamic get_timestamps_dyn();

		 ::discord::ActivityTimestamps set_timestamps( ::discord::ActivityTimestamps v);
		::Dynamic set_timestamps_dyn();

		 ::discord::ActivityAssets _assets;
		 ::discord::ActivityAssets get_assets();
		::Dynamic get_assets_dyn();

		 ::discord::ActivityAssets set_assets( ::discord::ActivityAssets v);
		::Dynamic set_assets_dyn();

		 ::discord::ActivityParty _party;
		 ::discord::ActivityParty get_party();
		::Dynamic get_party_dyn();

		 ::discord::ActivityParty set_party( ::discord::ActivityParty v);
		::Dynamic set_party_dyn();

		 ::discord::ActivitySecrets _secrets;
		 ::discord::ActivitySecrets get_secrets();
		::Dynamic get_secrets_dyn();

		 ::discord::ActivitySecrets set_secrets( ::discord::ActivitySecrets v);
		::Dynamic set_secrets_dyn();

		bool get_instance();
		::Dynamic get_instance_dyn();

		bool set_instance(bool v);
		::Dynamic set_instance_dyn();

		unsigned int get_supportedPlatforms();
		::Dynamic get_supportedPlatforms_dyn();

		unsigned int set_supportedPlatforms(unsigned int v);
		::Dynamic set_supportedPlatforms_dyn();

};

} // end namespace discord

#endif /* INCLUDED_discord_Activity */ 
