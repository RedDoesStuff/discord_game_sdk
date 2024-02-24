// Generated by Haxe 4.3.3
#ifndef INCLUDED_discord_ActivityManager
#define INCLUDED_discord_ActivityManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_6db1f306f8fa425f
#define INCLUDED_6db1f306f8fa425f
#include "C:/Users/Home/Documents/GitHub/discord_game_sdk/haxe/discord/_internal/ffi.h"
#endif
HX_DECLARE_CLASS1(discord,Activity)
HX_DECLARE_CLASS1(discord,ActivityManager)

namespace discord{


class HXCPP_CLASS_ATTRIBUTES ActivityManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ActivityManager_obj OBJ_;
		ActivityManager_obj();

	public:
		enum { _hx_ClassId = 0x04af7912 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="discord.ActivityManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"discord.ActivityManager"); }
		static ::hx::ObjectPtr< ActivityManager_obj > __new();
		static ::hx::ObjectPtr< ActivityManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ActivityManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ActivityManager",3e,7c,06,74); }

		 IDiscordActivityManager* internal_;
		int registerCommand(::String command);
		::Dynamic registerCommand_dyn();

		int registerSteam(unsigned int steamID);
		::Dynamic registerSteam_dyn();

		void updateActivity( ::discord::Activity activity, ::Dynamic callback);
		::Dynamic updateActivity_dyn();

};

} // end namespace discord

#endif /* INCLUDED_discord_ActivityManager */ 
