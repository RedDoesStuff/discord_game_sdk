// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_6db1f306f8fa425f
#define INCLUDED_6db1f306f8fa425f
#include "C:/Users/Home/Documents/GitHub/discord_game_sdk/haxe/discord/_internal/ffi.h"
#endif
#ifndef INCLUDED_discord_UserAchievement
#include <discord/UserAchievement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b25690ab00fef22e_1223_new,"discord.UserAchievement","new",0x79c4aaf4,"discord.UserAchievement.new","discord/Types.hx",1223,0xbb915808)
HX_LOCAL_STACK_FRAME(_hx_pos_b25690ab00fef22e_1228_get_userID,"discord.UserAchievement","get_userID",0xcd5f0a9b,"discord.UserAchievement.get_userID","discord/Types.hx",1228,0xbb915808)
HX_LOCAL_STACK_FRAME(_hx_pos_b25690ab00fef22e_1232_set_userID,"discord.UserAchievement","set_userID",0xd0dca90f,"discord.UserAchievement.set_userID","discord/Types.hx",1232,0xbb915808)
HX_LOCAL_STACK_FRAME(_hx_pos_b25690ab00fef22e_1238_get_achievementID,"discord.UserAchievement","get_achievementID",0xa323faf5,"discord.UserAchievement.get_achievementID","discord/Types.hx",1238,0xbb915808)
HX_LOCAL_STACK_FRAME(_hx_pos_b25690ab00fef22e_1242_set_achievementID,"discord.UserAchievement","set_achievementID",0xc691d301,"discord.UserAchievement.set_achievementID","discord/Types.hx",1242,0xbb915808)
HX_LOCAL_STACK_FRAME(_hx_pos_b25690ab00fef22e_1248_get_percentComplete,"discord.UserAchievement","get_percentComplete",0x1a194649,"discord.UserAchievement.get_percentComplete","discord/Types.hx",1248,0xbb915808)
HX_LOCAL_STACK_FRAME(_hx_pos_b25690ab00fef22e_1252_set_percentComplete,"discord.UserAchievement","set_percentComplete",0x56b63955,"discord.UserAchievement.set_percentComplete","discord/Types.hx",1252,0xbb915808)
HX_LOCAL_STACK_FRAME(_hx_pos_b25690ab00fef22e_1258_get_unlockedAt,"discord.UserAchievement","get_unlockedAt",0xbba84a2b,"discord.UserAchievement.get_unlockedAt","discord/Types.hx",1258,0xbb915808)
HX_LOCAL_STACK_FRAME(_hx_pos_b25690ab00fef22e_1264_set_unlockedAt,"discord.UserAchievement","set_unlockedAt",0xdbc8329f,"discord.UserAchievement.set_unlockedAt","discord/Types.hx",1264,0xbb915808)
namespace discord{

void UserAchievement_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1223_new)
            	}

Dynamic UserAchievement_obj::__CreateEmpty() { return new UserAchievement_obj; }

void *UserAchievement_obj::_hx_vtable = 0;

Dynamic UserAchievement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UserAchievement_obj > _hx_result = new UserAchievement_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UserAchievement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c1ef0c4;
}

::cpp::Int64 UserAchievement_obj::get_userID(){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1228_get_userID)
            	return internal_.user_id;

HXDLIN(1228)		return ( (::cpp::Int64)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserAchievement_obj,get_userID,return )

::cpp::Int64 UserAchievement_obj::set_userID(::cpp::Int64 v){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1232_set_userID)
            	internal_.user_id = v;

HXDLIN(1232)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserAchievement_obj,set_userID,return )

::cpp::Int64 UserAchievement_obj::get_achievementID(){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1238_get_achievementID)
            	return internal_.achievement_id;

HXDLIN(1238)		return ( (::cpp::Int64)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserAchievement_obj,get_achievementID,return )

::cpp::Int64 UserAchievement_obj::set_achievementID(::cpp::Int64 v){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1242_set_achievementID)
            	internal_.achievement_id;

HXDLIN(1242)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserAchievement_obj,set_achievementID,return )

unsigned char UserAchievement_obj::get_percentComplete(){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1248_get_percentComplete)
            	return internal_.percent_complete;

HXDLIN(1248)		return ( (unsigned char)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserAchievement_obj,get_percentComplete,return )

unsigned char UserAchievement_obj::set_percentComplete(unsigned char v){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1252_set_percentComplete)
            	internal_.percent_complete = v;

HXDLIN(1252)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserAchievement_obj,set_percentComplete,return )

::String UserAchievement_obj::get_unlockedAt(){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1258_get_unlockedAt)
            	return internal_.unlocked_at;

HXDLIN(1258)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(UserAchievement_obj,get_unlockedAt,return )

::String UserAchievement_obj::set_unlockedAt(::String v){
            	HX_STACKFRAME(&_hx_pos_b25690ab00fef22e_1264_set_unlockedAt)
            	strncpy(internal_.unlocked_at, v, 64);
					internal_.unlocked_at[64 - 1] = '\0';
					return internal_.unlocked_at;

HXDLIN(1264)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(UserAchievement_obj,set_unlockedAt,return )


UserAchievement_obj::UserAchievement_obj()
{
}

void UserAchievement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UserAchievement);
	HX_MARK_MEMBER_NAME(internal_,"internal_");
	HX_MARK_END_CLASS();
}

void UserAchievement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(internal_,"internal_");
}

::hx::Val UserAchievement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"userID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_userID() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"internal_") ) { return ::hx::Val( cpp::Struct<  DiscordUserAchievement >( internal_ ) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_userID") ) { return ::hx::Val( get_userID_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_userID") ) { return ::hx::Val( set_userID_dyn() ); }
		if (HX_FIELD_EQ(inName,"unlockedAt") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_unlockedAt() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"achievementID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_achievementID() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_unlockedAt") ) { return ::hx::Val( get_unlockedAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_unlockedAt") ) { return ::hx::Val( set_unlockedAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"percentComplete") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_percentComplete() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_achievementID") ) { return ::hx::Val( get_achievementID_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_achievementID") ) { return ::hx::Val( set_achievementID_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_percentComplete") ) { return ::hx::Val( get_percentComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_percentComplete") ) { return ::hx::Val( set_percentComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val UserAchievement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"userID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_userID(inValue.Cast< ::cpp::Int64 >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"internal_") ) { internal_=inValue.Cast< cpp::Struct<  DiscordUserAchievement >  >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unlockedAt") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_unlockedAt(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"achievementID") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_achievementID(inValue.Cast< ::cpp::Int64 >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"percentComplete") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_percentComplete(inValue.Cast< unsigned char >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UserAchievement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("internal_",82,ee,23,3f));
	outFields->push(HX_("userID",e6,3a,ef,41));
	outFields->push(HX_("achievementID",0a,3a,c1,17));
	outFields->push(HX_("percentComplete",9e,34,d4,df));
	outFields->push(HX_("unlockedAt",f6,fb,1d,23));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UserAchievement_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  DiscordUserAchievement */ ,(int)offsetof(UserAchievement_obj,internal_),HX_("internal_",82,ee,23,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *UserAchievement_obj_sStaticStorageInfo = 0;
#endif

static ::String UserAchievement_obj_sMemberFields[] = {
	HX_("internal_",82,ee,23,3f),
	HX_("get_userID",af,aa,76,32),
	HX_("set_userID",23,49,f4,35),
	HX_("get_achievementID",61,45,31,1e),
	HX_("set_achievementID",6d,1d,9f,41),
	HX_("get_percentComplete",b5,03,df,6a),
	HX_("set_percentComplete",c1,f6,7b,a7),
	HX_("get_unlockedAt",3f,84,13,99),
	HX_("set_unlockedAt",b3,6c,33,b9),
	::String(null()) };

::hx::Class UserAchievement_obj::__mClass;

void UserAchievement_obj::__register()
{
	UserAchievement_obj _hx_dummy;
	UserAchievement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("discord.UserAchievement",02,61,77,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UserAchievement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UserAchievement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UserAchievement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UserAchievement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace discord
