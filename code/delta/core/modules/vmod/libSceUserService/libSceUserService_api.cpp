
// Copyright (C) Force67

// This file was generated on 08/12/2019

#include "libSceUserService.h"

static const modules::funcInfo functions[] = {
	{0x182D7CAF9E81A7B6, (void*)&sceUserServiceDestroyUser},
	{0x83AA23A96DDCF19E, (void*)&sceUserServiceGetAccessibilityKeyremapData},
	{0xC6BB648BDB14A298, (void*)&sceUserServiceGetAccessibilityKeyremapEnable},
	{0xD730C4154981768A, (void*)&sceUserServiceGetAccessibilityZoom},
	{0xEF3BB717BCA455EA, (void*)&sceUserServiceGetAccountRemarks},
	{0xA09CDF67165C857E, (void*)&sceUserServiceGetAgeVerified},
	{0xEABE210F2AD15068, (void*)&sceUserServiceGetAppearOfflineSetting},
	{0x3E15D96E3E305611, (void*)&sceUserServiceGetAppSortOrder},
	{0x9EA0C49E3ECCD101, (void*)&sceUserServiceGetAutoLoginEnabled},
	{0x5865CEBE8530ACEB, (void*)&sceUserServiceGetCreatedVersion},
	{0xE46FCC035C79BADC, (void*)&sceUserServiceGetCurrentUserGroupIndex},
	{0xD54E5C15D4DDB28D, (void*)&sceUserServiceGetDefaultNewUserGroupName},
	{0x3624C634B90173F4, (void*)&sceUserServiceGetDeletedUserInfo},
	{0x45DA669C767743D3, (void*)&sceUserServiceGetDiscPlayerFlag},
	{0xC87D7B43A356B558, (void*)&sceUserServiceGetEvent},
	{0xCA056E6751DBFE77, (void*)&sceUserServiceGetEventSortEvent},
	{0x69A0B7D34E55B58E, (void*)&sceUserServiceGetEventSortTitle},
	{0x914689515D5BF8F3, (void*)&sceUserServiceGetEventUiFlag},
	{0xB915349507BEF716, (void*)&sceUserServiceGetFaceRecognitionDeleteCount},
	{0x7DB082D32A36A554, (void*)&sceUserServiceGetFaceRecognitionRegisterCount},
	{0x93FEE4C571ABFABD, (void*)&sceUserServiceGetFileBrowserFilter},
	{0x7C20693C96C42C39, (void*)&sceUserServiceGetFileBrowserSortContent},
	{0x51847D7DC3D70D41, (void*)&sceUserServiceGetFileBrowserSortTitle},
	{0x16C381CB725F6EB3, (void*)&sceUserServiceGetFileSelectorFilter},
	{0x20007BC2C70FC22A, (void*)&sceUserServiceGetFileSelectorSortContent},
	{0xE84B77778A75BBC7, (void*)&sceUserServiceGetFileSelectorSortTitle},
	{0x78D6F9DCB4099883, (void*)&sceUserServiceGetForegroundUser},
	{0xC011A6AD14D40B5E, (void*)&sceUserServiceGetFriendFlag},
	{0xEB83C45183EE2BDF, (void*)&sceUserServiceGetGlsAccessTokenNiconicoLive},
	{0xF18F9A0EF5462E2C, (void*)&sceUserServiceGetGlsAccessTokenTwitch},
	{0x57B646ED5F9D774F, (void*)&sceUserServiceGetGlsAccessTokenUstream},
	{0x42A675037BEE9053, (void*)&sceUserServiceGetGlsAnonymousUserId},
	{0x14FE132AB7515D73, (void*)&sceUserServiceGetGlsBcTags},
	{0xC97FD3A5B140631A, (void*)&sceUserServiceGetGlsBcTitle},
	{0x326E3E3D27E51DB3, (void*)&sceUserServiceGetGlsBroadcastChannel},
	{0x3691185433B28D19, (void*)&sceUserServiceGetGlsBroadcastersComment},
	{0x5AF336D49D522345, (void*)&sceUserServiceGetGlsBroadcastersCommentColor},
	{0x1F135188259F545C, (void*)&sceUserServiceGetGlsBroadcastService},
	{0xE9943891F84CDFB7, (void*)&sceUserServiceGetGlsBroadcastUiLayout},
	{0x626985884A1E824A, (void*)&sceUserServiceGetGlsCamCrop},
	{0x63953AEA79346D47, (void*)&sceUserServiceGetGlsCameraBgFilter},
	{0x2DB43F8D4F633AC9, (void*)&sceUserServiceGetGlsCameraBrightness},
	{0xF7590E2919E4AE11, (void*)&sceUserServiceGetGlsCameraChromaKeyLevel},
	{0xD69A731E442188DB, (void*)&sceUserServiceGetGlsCameraContrast},
	{0x8C87BC6440F4E972, (void*)&sceUserServiceGetGlsCameraDepthLevel},
	{0xD07E75105C51DE67, (void*)&sceUserServiceGetGlsCameraEdgeLevel},
	{0xACB130E27E72238D, (void*)&sceUserServiceGetGlsCameraEffect},
	{0xF8FADBC7989A825D, (void*)&sceUserServiceGetGlsCameraEliminationLevel},
	{0x174C2E12F8A841DE, (void*)&sceUserServiceGetGlsCameraPosition},
	{0x1A47078A589D4079, (void*)&sceUserServiceGetGlsCameraReflection},
	{0xCC12F15FC251328A, (void*)&sceUserServiceGetGlsCameraSize},
	{0x3B59D446CC726269, (void*)&sceUserServiceGetGlsCameraTransparency},
	{0xFB6F434A7759F4E7, (void*)&sceUserServiceGetGlsFloatingMessage},
	{0x922F35821D726433, (void*)&sceUserServiceGetGlsHintFlag},
	{0xCD1F89D8F3C98125, (void*)&sceUserServiceGetGlsInitSpectating},
	{0xF08A9DB4C99CE547, (void*)&sceUserServiceGetGlsIsCameraHidden},
	{0x7F9940569D2C14DA, (void*)&sceUserServiceGetGlsIsFacebookEnabled},
	{0x5B79DE15802F66CB, (void*)&sceUserServiceGetGlsIsMuteEnabled},
	{0xE085EE51A071CC48, (void*)&sceUserServiceGetGlsIsRecDisabled},
	{0x8725B9C3CE797E4E, (void*)&sceUserServiceGetGlsIsRecievedMessageHidden},
	{0x5E9F4FC74574B5AB, (void*)&sceUserServiceGetGlsIsTwitterEnabled},
	{0xB8C92A826EF4B618, (void*)&sceUserServiceGetGlsLanguageFilter},
	{0x2F25F30ADCE57804, (void*)&sceUserServiceGetGlsLfpsSortOrder},
	{0x0AFC02309B73A752, (void*)&sceUserServiceGetGlsLiveQuality},
	{0x67E77335A0A5ABBC, (void*)&sceUserServiceGetGlsLiveQuality2},
	{0x5F93A7FFB8550ACD, (void*)&sceUserServiceGetGlsLiveQuality3},
	{0xFAA004E2D44CAD79, (void*)&sceUserServiceGetGlsLiveQuality4},
	{0xE32B34D02454E95F, (void*)&sceUserServiceGetGlsLiveQuality5},
	{0xEF97309F5CB67DF9, (void*)&sceUserServiceGetGlsMessageFilterLevel},
	{0xF8D54931E212ACCE, (void*)&sceUserServiceGetGlsTtsFlags},
	{0x790AC16CC999D52B, (void*)&sceUserServiceGetGlsTtsPitch},
	{0x0420C0EA39F81D56, (void*)&sceUserServiceGetGlsTtsSpeed},
	{0x481BAB15893B33BE, (void*)&sceUserServiceGetGlsTtsVolume},
	{0x615CF0E13D5F9D2E, (void*)&sceUserServiceGetHmuBrightness},
	{0x3BC38D255DDBF238, (void*)&sceUserServiceGetHmuZoom},
	{0x27F284AF881412F4, (void*)&sceUserServiceGetHomeDirectory},
	{0xC8B366DE7EDF829C, (void*)&sceUserServiceGetImeAutoCapitalEnabled},
	{0x827562523D1A6FC5, (void*)&sceUserServiceGetImeInitFlag},
	{0xCEBBBC661BB2D546, (void*)&sceUserServiceGetImeInputType},
	{0xDBF6FC41B53E1CD7, (void*)&sceUserServiceGetImeLastUnit},
	{0x34D6E5A521B1AD8F, (void*)&sceUserServiceGetImePointerMode},
	{0x61484133F01211C0, (void*)&sceUserServiceGetImePredictiveTextEnabled},
	{0x2161256BF8B3C93B, (void*)&sceUserServiceGetImeRunCount},
	{0x09D5A9D281D61ABD, (void*)&sceUserServiceGetInitialUser},
	{0x3D0945E1C8D4CFD5, (void*)&sceUserServiceGetIPDLeft},
	{0x503C7AECF4F3076D, (void*)&sceUserServiceGetIPDRight},
	{0x20A9371068FEC512, (void*)&sceUserServiceGetIsFakePlus},
	{0x3335666EAD88542A, (void*)&sceUserServiceGetIsQuickSignup},
	{0x2E08B90387D0C077, (void*)&sceUserServiceGetIsRemotePlayAllowed},
	{0xBBF742544E9F4005, (void*)&sceUserServiceGetJapaneseInputType},
	{0x4DAE766D7C794DE9, (void*)&sceUserServiceGetKeyboardType},
	{0x5D44FB69DFC150C7, (void*)&sceUserServiceGetKeyRepeatSpeed},
	{0x896A735E2C43D141, (void*)&sceUserServiceGetKeyRepeatStartingTime},
	{0xB803C1C3FEFAE35B, (void*)&sceUserServiceGetKratosPrimaryUser},
	{0xE2751B18605C19CA, (void*)&sceUserServiceGetLastLoginOrder},
	{0xABEED44C610BCE3E, (void*)&sceUserServiceGetLightBarBaseBrightness},
	{0x40D93BA83E1D943E, (void*)&sceUserServiceGetLoginFlag},
	{0x7CF87298A36F2BF0, (void*)&sceUserServiceGetLoginUserIdList},
	{0x61F0E02B3E52A255, (void*)&sceUserServiceGetMicLevel},
	{0xB2E90F77FC410E33, (void*)&sceUserServiceGetMouseHandType},
	{0x639CE0C3AF677681, (void*)&sceUserServiceGetMousePointerSpeed},
	{0xE62AAD52BC88FE12, (void*)&sceUserServiceGetNotificationSettings},
	{0xE9D7C3ADEA2C5C66, (void*)&sceUserServiceGetNpAccountId},
	{0x9E5396022472C640, (void*)&sceUserServiceGetNpAuthErrorFlag},
	{0x5B94603D4BAFDF96, (void*)&sceUserServiceGetNpLoginId},
	{0xCCDBC29C7A643E63, (void*)&sceUserServiceGetPadSpeakerVolume},
	{0x51E22FE9A35794EC, (void*)&sceUserServiceGetPartyMuteList},
	{0x6AAD63C25832395E, (void*)&sceUserServiceGetPartyMuteListA},
	{0xC8046741E5B385D3, (void*)&sceUserServiceGetPartySettingFlags},
	{0x5F9AC964D0D9D92B, (void*)&sceUserServiceGetPasscode},
	{0xC80594AAE8233EF1, (void*)&sceUserServiceGetPlayTogetherFlags},
	{0x552411F6A6296823, (void*)&sceUserServiceGetPsnPasswordForDebug},
	{0x39575505C7A3BE64, (void*)&sceUserServiceGetRegisteredHomeUserIdList},
	{0xE448900A72F61B56, (void*)&sceUserServiceGetRegisteredUserIdList},
	{0x531AD2747EA30371, (void*)&sceUserServiceGetSaveDataAutoUpload},
	{0xA55B0428B9396C80, (void*)&sceUserServiceGetSaveDataSort},
	{0xC7341505C298A08F, (void*)&sceUserServiceGetSecureHomeDirectory},
	{0xCEC25C5AD13CD519, (void*)&sceUserServiceGetShareButtonAssign},
	{0x36384ADFA19F1064, (void*)&sceUserServiceGetShareDailymotionAccessToken},
	{0xB7F2362DB8FC6BED, (void*)&sceUserServiceGetShareDailymotionRefreshToken},
	{0x96B3C5FE43413EBA, (void*)&sceUserServiceGetSharePlayFlags},
	{0x782F3C75BD62FDFF, (void*)&sceUserServiceGetSharePlayFramerateHost},
	{0xB6D892BE200F2D72, (void*)&sceUserServiceGetSharePlayResolutionHost},
	{0x6275CCDAC699925E, (void*)&sceUserServiceGetShareStatus},
	{0xC0CB521CB340563D, (void*)&sceUserServiceGetShareStatus2},
	{0xF27A36AE50E397BA, (void*)&sceUserServiceGetSystemLoggerHashedAccountId},
	{0x66BE21F816F1D1DA, (void*)&sceUserServiceGetSystemLoggerHashedAccountIdParam},
	{0xC7A9BC3FD0C13D27, (void*)&sceUserServiceGetThemeEntitlementId},
	{0x2BC361E9F8666247, (void*)&sceUserServiceGetThemeHomeShareOwner},
	{0x12010F5C389EE574, (void*)&sceUserServiceGetThemeTextShadow},
	{0x59A1D91A9D159F69, (void*)&sceUserServiceGetThemeWaveColor},
	{0x2310A90D8B224D7D, (void*)&sceUserServiceGetTopMenuLimitItem},
	{0x4B2905709106BF3E, (void*)&sceUserServiceGetTopMenuNotificationFlag},
	{0x306F8E6C60D878FC, (void*)&sceUserServiceGetTopMenuTutorialFlag},
	{0xA1754042EB6BDCDB, (void*)&sceUserServiceGetTraditionalChineseInputType},
	{0x954A2AC1342EE06A, (void*)&sceUserServiceGetUserColor},
	{0xD7E9F12786B02C7F, (void*)&sceUserServiceGetUserGroupName},
	{0x81ADB3DC0027F172, (void*)&sceUserServiceGetUserGroupNameList},
	{0xC7376126B2F71E7B, (void*)&sceUserServiceGetUserGroupNum},
	{0xD71C5C3221AED9FA, (void*)&sceUserServiceGetUserName},
	{0x3B49AD7E813909E9, (void*)&sceUserServiceGetVibrationEnabled},
	{0xFE34462EDD836DEE, (void*)&sceUserServiceGetVoiceRecognitionTutorialState},
	{0x95DDFDE972503E03, (void*)&sceUserServiceGetVolumeForController},
	{0x4C4B10D07589F11E, (void*)&sceUserServiceGetVolumeForGenericUSB},
	{0xAF642E1C84FCBBD2, (void*)&sceUserServiceGetVolumeForMorpheusSidetone},
	{0xDD46400CB057A620, (void*)&sceUserServiceGetVolumeForSidetone},
	{0x8F760CBB531534DA, (void*)&sceUserServiceInitialize},
	{0x6B3FF447A7AF899D, (void*)&sceUserServiceInitialize2},
	{0x1675A42CD3A6257C, (void*)&sceUserServiceIsGuestUser},
	{0x98D9C1D8F58C4A0C, (void*)&sceUserServiceIsKratosPrimaryUser},
	{0xA592F5E782AF3235, (void*)&sceUserServiceIsKratosUser},
	{0x319C47F34DBDF968, (void*)&sceUserServiceIsLoggedIn},
	{0xFFB5E00A61302ABB, (void*)&sceUserServiceIsSharePlayClientUser},
	{0x4CBAC382B3D84C3A, (void*)&sceUserServiceIsUserStorageAccountBound},
	{0xBAF551EF467116B4, (void*)&sceUserServiceLogin},
	{0xC2E23B73B50D9340, (void*)&sceUserServiceRegisterEventCallback},
	{0x49F1957F210DF22C, (void*)&sceUserServiceSetAccessibilityKeyremapData},
	{0x64FD2D8B5091C4D0, (void*)&sceUserServiceSetAccessibilityKeyremapEnable},
	{0x1CABBAF1C57372D8, (void*)&sceUserServiceSetAccessibilityZoom},
	{0xBC2FEE4844C21546, (void*)&sceUserServiceSetAccountRemarks},
	{0x8012CC1A107A07D1, (void*)&sceUserServiceSetAgeVerified},
	{0xEC88947544691F49, (void*)&sceUserServiceSetAppearOfflineSetting},
	{0x6F9FED9CB7325101, (void*)&sceUserServiceSetAppSortOrder},
	{0xBBF13EE9DF4F88FF, (void*)&sceUserServiceSetAutoLoginEnabled},
	{0x7DEAA4B5B403D5EA, (void*)&sceUserServiceSetCreatedVersion},
	{0x9BC56D49DE48E688, (void*)&sceUserServiceSetDiscPlayerFlag},
	{0xBA1C2CB13B6DDF2A, (void*)&sceUserServiceSetEventSortEvent},
	{0x5C481D8467EA4692, (void*)&sceUserServiceSetEventSortTitle},
	{0x4F2F706A75430BD9, (void*)&sceUserServiceSetEventUiFlag},
	{0xB273B31F4350C8ED, (void*)&sceUserServiceSetFaceRecognitionDeleteCount},
	{0x8E230D620C734FFE, (void*)&sceUserServiceSetFaceRecognitionRegisterCount},
	{0x33D9E8397321946A, (void*)&sceUserServiceSetFileBrowserFilter},
	{0x5F2E2BABC8296075, (void*)&sceUserServiceSetFileBrowserSortContent},
	{0xC0DE7344BC3827A0, (void*)&sceUserServiceSetFileBrowserSortTitle},
	{0x84FDAAF446F985FD, (void*)&sceUserServiceSetFileSelectorFilter},
	{0x165E7625E48B3F2C, (void*)&sceUserServiceSetFileSelectorSortContent},
	{0x2E5BFAF77371FA75, (void*)&sceUserServiceSetFileSelectorSortTitle},
	{0x3200485D4906B691, (void*)&sceUserServiceSetForegroundUser},
	{0xE5C2BE502E783B3E, (void*)&sceUserServiceSetFriendFlag},
	{0x54450A42E988E41F, (void*)&sceUserServiceSetGlsAccessTokenNiconicoLive},
	{0xD03DB1B47418C482, (void*)&sceUserServiceSetGlsAccessTokenTwitch},
	{0xBDD05DDCF301169E, (void*)&sceUserServiceSetGlsAccessTokenUstream},
	{0x4DEADD4B1F855EB7, (void*)&sceUserServiceSetGlsAnonymousUserId},
	{0x51D6613759D561FC, (void*)&sceUserServiceSetGlsBcTags},
	{0x849E608FE3EFDFF3, (void*)&sceUserServiceSetGlsBcTitle},
	{0x3802DDE92985DB6D, (void*)&sceUserServiceSetGlsBroadcastChannel},
	{0x668A5DBCD9581477, (void*)&sceUserServiceSetGlsBroadcastersComment},
	{0x7F90C3217093C70C, (void*)&sceUserServiceSetGlsBroadcastersCommentColor},
	{0x2C804478D35F790A, (void*)&sceUserServiceSetGlsBroadcastService},
	{0x45D02F12692CFD91, (void*)&sceUserServiceSetGlsBroadcastUiLayout},
	{0x1D832013907AD906, (void*)&sceUserServiceSetGlsCamCrop},
	{0x37FC733B9FE58AF7, (void*)&sceUserServiceSetGlsCameraBgFilter},
	{0x1B1A8C600EB40482, (void*)&sceUserServiceSetGlsCameraBrightness},
	{0x0E2D399475A608B5, (void*)&sceUserServiceSetGlsCameraChromaKeyLevel},
	{0x8066EEDD36625DE5, (void*)&sceUserServiceSetGlsCameraContrast},
	{0xF0F5D021D46C6481, (void*)&sceUserServiceSetGlsCameraDepthLevel},
	{0xE7A6E5895FAD7346, (void*)&sceUserServiceSetGlsCameraEdgeLevel},
	{0x8218EB6F08C2D151, (void*)&sceUserServiceSetGlsCameraEffect},
	{0x627067669AF75098, (void*)&sceUserServiceSetGlsCameraEliminationLevel},
	{0xC166731FF0705AE0, (void*)&sceUserServiceSetGlsCameraPosition},
	{0xA671D1FDA8FD79DA, (void*)&sceUserServiceSetGlsCameraReflection},
	{0xAEB897312D1AEC13, (void*)&sceUserServiceSetGlsCameraSize},
	{0xD1ED30CC5003CB42, (void*)&sceUserServiceSetGlsCameraTransparency},
	{0xB75A14D3EF776FEB, (void*)&sceUserServiceSetGlsFloatingMessage},
	{0x6DD25D5F66CAA361, (void*)&sceUserServiceSetGlsHintFlag},
	{0xBD182902128927E3, (void*)&sceUserServiceSetGlsInitSpectating},
	{0x123C44FBF56FB89E, (void*)&sceUserServiceSetGlsIsCameraHidden},
	{0x1DF41388C4821C99, (void*)&sceUserServiceSetGlsIsFacebookEnabled},
	{0xEB7B7AC343201BC2, (void*)&sceUserServiceSetGlsIsMuteEnabled},
	{0xEA86770D91B38C81, (void*)&sceUserServiceSetGlsIsRecDisabled},
	{0x026277149C53EEBF, (void*)&sceUserServiceSetGlsIsRecievedMessageHidden},
	{0x96C77105E46711EB, (void*)&sceUserServiceSetGlsIsTwitterEnabled},
	{0xC20540C1ADF59741, (void*)&sceUserServiceSetGlsLanguageFilter},
	{0xAC391F9691F3AD11, (void*)&sceUserServiceSetGlsLfpsSortOrder},
	{0xA93F3F78929EFAB2, (void*)&sceUserServiceSetGlsLiveQuality},
	{0x850EF633F6116FC8, (void*)&sceUserServiceSetGlsLiveQuality2},
	{0x6560140B38124364, (void*)&sceUserServiceSetGlsLiveQuality3},
	{0x1F01696AC1B8FA43, (void*)&sceUserServiceSetGlsLiveQuality4},
	{0x3AFF21B3E73518D6, (void*)&sceUserServiceSetGlsLiveQuality5},
	{0x7E6ED7A6C3BEFA59, (void*)&sceUserServiceSetGlsMessageFilterLevel},
	{0x2E07B8B3787C0450, (void*)&sceUserServiceSetGlsTtsFlags},
	{0x341F7F0FFA3784DD, (void*)&sceUserServiceSetGlsTtsPitch},
	{0xD8459F02BA14404E, (void*)&sceUserServiceSetGlsTtsSpeed},
	{0x433788417C9ABED5, (void*)&sceUserServiceSetGlsTtsVolume},
	{0x594E6CF9C3F33BC6, (void*)&sceUserServiceSetHmuBrightness},
	{0x81087C35A09B46AA, (void*)&sceUserServiceSetHmuZoom},
	{0xF1319E2393C069B8, (void*)&sceUserServiceSetImeAutoCapitalEnabled},
	{0xDDF701A130029166, (void*)&sceUserServiceSetImeInitFlag},
	{0x1A1BB49210E0BAAF, (void*)&sceUserServiceSetImeInputType},
	{0x8639549FD5028178, (void*)&sceUserServiceSetImeLastUnit},
	{0xD7DB8217DEA67E8B, (void*)&sceUserServiceSetImePointerMode},
	{0x362C0C8426E0EFAE, (void*)&sceUserServiceSetImePredictiveTextEnabled},
	{0x0191575E964910F2, (void*)&sceUserServiceSetImeRunCount},
	{0x233CBEE17993041F, (void*)&sceUserServiceSetIPDLeft},
	{0xCFF95B0ABA6D781E, (void*)&sceUserServiceSetIPDRight},
	{0xED2138B238653822, (void*)&sceUserServiceSetIsFakePlus},
	{0x9CD9FC1A79FE13A6, (void*)&sceUserServiceSetIsQuickSignup},
	{0x010EBCD0BE12AFBE, (void*)&sceUserServiceSetIsRemotePlayAllowed},
	{0x9404759E4128301A, (void*)&sceUserServiceSetJapaneseInputType},
	{0x74276138920EB51E, (void*)&sceUserServiceSetKeyboardType},
	{0xCECE22F52107CB48, (void*)&sceUserServiceSetKeyRepeatSpeed},
	{0x15F5E03129992DF9, (void*)&sceUserServiceSetKeyRepeatStartingTime},
	{0x7650507E20CE9254, (void*)&sceUserServiceSetLightBarBaseBrightness},
	{0x65D7798326EDB22D, (void*)&sceUserServiceSetLoginFlag},
	{0x73D536A64E00A3DC, (void*)&sceUserServiceSetMicLevel},
	{0x960D88F1B113899A, (void*)&sceUserServiceSetMouseHandType},
	{0xA267FA044DBF14FA, (void*)&sceUserServiceSetMousePointerSpeed},
	{0x5FD260BABD10B4B1, (void*)&sceUserServiceSetNotificationSettings},
	{0xA26E23C7EA49950A, (void*)&sceUserServiceSetNpAuthErrorFlag},
	{0x660AB5F6533EBB65, (void*)&sceUserServiceSetNpLoginId},
	{0xE3591CD988736685, (void*)&sceUserServiceSetPadSpeakerVolume},
	{0x66CC908EF5451E79, (void*)&sceUserServiceSetPartyMuteList},
	{0xF7B6645AE6ED324D, (void*)&sceUserServiceSetPartyMuteListA},
	{0x222C214729EB0E74, (void*)&sceUserServiceSetPartySettingFlags},
	{0xECB0AAE254A59B0E, (void*)&sceUserServiceSetPasscode},
	{0xA665B9BFD84E468B, (void*)&sceUserServiceSetPlayTogetherFlags},
	{0x9C27E16EDB996E4F, (void*)&sceUserServiceSetPsnPasswordForDebug},
	{0x92C50908BD07AB6D, (void*)&sceUserServiceSetSaveDataAutoUpload},
	{0xA5FCF8AF328973A8, (void*)&sceUserServiceSetSaveDataSort},
	{0x6C5CC0DEDEA6BAF5, (void*)&sceUserServiceSetShareButtonAssign},
	{0x07F596EA636DA76B, (void*)&sceUserServiceSetShareDailymotionAccessToken},
	{0x380347E4FF655782, (void*)&sceUserServiceSetShareDailymotionRefreshToken},
	{0x08C97C99426F49FF, (void*)&sceUserServiceSetSharePlayFlags},
	{0xAC1EF42AEAAE631B, (void*)&sceUserServiceSetSharePlayFramerateHost},
	{0x06147147E4743450, (void*)&sceUserServiceSetSharePlayResolutionHost},
	{0x118BD1175554A545, (void*)&sceUserServiceSetShareStatus},
	{0x208F95EB05CA4BF1, (void*)&sceUserServiceSetShareStatus2},
	{0xE632FB50CF8075B4, (void*)&sceUserServiceSetSystemLoggerHashedAccountId},
	{0x534ED7DFABE06C0D, (void*)&sceUserServiceSetSystemLoggerHashedAccountIdParam},
	{0x00BCA352ECA8C2E2, (void*)&sceUserServiceSetThemeEntitlementId},
	{0x8E1CBA7DAE5AE24E, (void*)&sceUserServiceSetThemeHomeShareOwner},
	{0x1E4B81B9885868F8, (void*)&sceUserServiceSetThemeTextShadow},
	{0x3CA1D92BDEB4A991, (void*)&sceUserServiceSetThemeWaveColor},
	{0x7FB5521D01C1E98B, (void*)&sceUserServiceSetTopMenuLimitItem},
	{0x4E26FCCE00DDF95D, (void*)&sceUserServiceSetTopMenuNotificationFlag},
	{0xF10EF58B7BBD94DD, (void*)&sceUserServiceSetTopMenuTutorialFlag},
	{0x65F528B94C7687CC, (void*)&sceUserServiceSetTraditionalChineseInputType},
	{0x21C3367F91284510, (void*)&sceUserServiceSetUserGroupIndex},
	{0x41F61AB1964FBE84, (void*)&sceUserServiceSetUserGroupName},
	{0x26ABB65C5AF952F0, (void*)&sceUserServiceSetUserName},
	{0x0A891687CA8600D9, (void*)&sceUserServiceSetVibrationEnabled},
	{0xD4935883045C00D2, (void*)&sceUserServiceSetVoiceRecognitionTutorialState},
	{0xE271238991F52CA3, (void*)&sceUserServiceSetVolumeForController},
	{0x6E443B68DC7AD908, (void*)&sceUserServiceSetVolumeForGenericUSB},
	{0xEC49E352D9C037EA, (void*)&sceUserServiceSetVolumeForMorpheusSidetone},
	{0x590FE5FE2DA0264A, (void*)&sceUserServiceSetVolumeForSidetone},
	{0x6F01634BE6D7F660, (void*)&sceUserServiceTerminate},
	{0xB295BFFF2A0B43DA, (void*)&sceUserServiceUnregisterEventCallback},
	{0x0060CABA92E34D93, (void*)&sceUserServiceGetTeamShowAboutTeam},
	{0x11925E717F96BC97, (void*)&sceUserServiceGetThemeBgImageDimmer},
	{0x259E4DCCDFD31884, (void*)&sceUserServiceSetThemeBgImageDimmer},
	{0x2627E77234E55D5F, (void*)&sceUserServiceSetNpEnv},
	{0x289C3AADA85835D4, (void*)&sceUserServiceSetParentalBdAge},
	{0x349A54BE8FAB7B38, (void*)&sceUserServiceSetParentalDvdRegion},
	{0x378AAB14B7172E96, (void*)&sceUserServiceSetThemeBgImageWaveColor},
	{0x39D8974AEA082BB7, (void*)&sceUserServiceGetParentalGame},
	{0x3CE55FBC20DC554C, (void*)&sceUserServiceGetThemeBgImageWaveColor},
	{0x4495FB4F8B233602, (void*)&sceUserServiceGetUserStatus},
	{0x4A41394A70858D09, (void*)&sceUserServiceSetNpAccountUpgradeFlag},
	{0x4F010B3E8A96F2D0, (void*)&sceUserServiceGetEventFilterTeamEvent},
	{0x513F3E95BE5FCA97, (void*)&sceUserServiceSetParentalDvd},
	{0x55EA353DB419CC6E, (void*)&sceUserServiceGetNpAccountUpgradeFlag},
	{0x5632E4298D0241EC, (void*)&sceUserServiceGetHoldAudioOutDevice},
	{0x6AE73AE1124072EB, (void*)&sceUserServiceGetNpOfflineAccountAdult},
	{0x6B8D66193A56BD8E, (void*)&sceUserServiceSetThemeBgImageZoom},
	{0x6FAF93CAD59C70F1, (void*)&sceUserServiceSetTeamShowAboutTeam},
	{0x70182FF699E6BA72, (void*)&sceUserServiceSetUserStatus},
	{0x71FF4120CCB89AE6, (void*)&sceUserServiceGetSystemLoggerHashedAccountIdTtl},
	{0x77D0CE98893DFF2E, (void*)&sceUserServiceGetParentalDvdRegion},
	{0x78C185EFB84A17A5, (void*)&sceUserServiceGetFriendCustomListLastFocus},
	{0x7C4CB4116D00475F, (void*)&sceUserServiceGetNpOfflineAccountId},
	{0x7CAE0020CD249C54, (void*)&sceUserServiceSetFriendCustomListLastFocus},
	{0x81123E0673C0E942, (void*)&sceUserServiceSetParentalGame},
	{0x85375C59C51472B9, (void*)&sceUserServiceIsLoggedInWithoutLock},
	{0x8AC6DC4168D5FEA5, (void*)&unk_isbcQWjV_qU},
	{0x8FA160917871A756, (void*)&sceUserServiceSetNpOfflineAccountAdult},
	{0x9572AD00732BC228, (void*)&sceUserServiceGetParentalBdAge},
	{0x9A6160CA35CC401B, (void*)&sceUserServiceSetParentalMorpheus},
	{0x9E0E1794D14C882A, (void*)&sceUserServiceSetNpSubAccount},
	{0xA6BDC9DFDAFD02B4, (void*)&unk_pr3J39r9ArQ},
	{0xA88D871B5A55F8E0, (void*)&sceUserServiceGetThemeBgImageZoom},
	{0xA9282CFF0C2B94B5, (void*)&sceUserServiceSetSystemLoggerHashedAccountIdTtl},
	{0xADECFCD7DC15EC05, (void*)&sceUserServiceSetEventFilterTeamEvent},
	{0xB4D658DED208A343, (void*)&sceUserServiceSetSystemLoggerHashedAccountIdClockType},
	{0xB74E12E1A0B42C23, (void*)&sceUserServiceGetParentalBrowser},
	{0xBA2B18516327FFE5, (void*)&sceUserServiceSetNotificationBehavior},
	{0xBB9491DFE6B4953C, (void*)&unk_u5SR3_a0lTw},
	{0xBD6DAA58A62696FC, (void*)&sceUserServiceGetSystemLoggerHashedAccountIdClockType},
	{0xC021A791786944BE, (void*)&sceUserServiceGetNpSubAccount},
	{0xC100E2CDD3B8F420, (void*)&sceUserServiceSetGlsCommunityId},
	{0xC15DE396FB13E630, (void*)&sceUserServiceSetEventCalendarType},
	{0xC97BDF47E01C81A6, (void*)&sceUserServiceGetParentalMorpheus},
	{0xCEAE3949138A8FD4, (void*)&sceUserServiceSetSaveDataTutorialFlag},
	{0xCECEB432F0A51247, (void*)&sceUserServiceGetEventCalendarType},
	{0xD2B814603E7B4477, (void*)&unk_0rgUYD57RHc},
	{0xDD3F72E710DC7CE9, (void*)&sceUserServiceLogout},
	{0xDE8AA02053D5915F, (void*)&sceUserServiceGetNotificationBehavior},
	{0xDF04ED677736FB40, (void*)&sceUserServiceGetEventVsh},
	{0xE1338415D98555C2, (void*)&sceUserServiceGetGlsCommunityId},
	{0xE6FB45617149ECE5, (void*)&sceUserServiceGetParentalDvd},
	{0xEA33D80421908224, (void*)&sceUserServiceSetParentalBrowser},
	{0xEE989FE51C928BEB, (void*)&sceUserServiceSetHoldAudioOutDevice},
	{0xF3CFA7A8137F4903, (void*)&sceUserServiceGetSaveDataTutorialFlag},
	{0xFD870D90BCCD1A66, (void*)&sceUserServiceGetNpEnv},
	{0xC2E23B73B50D9340, (void*)&sceUserServiceRegisterEventCallback1},
	{0xB295BFFF2A0B43DA, (void*)&sceUserServiceUnregisterEventCallback1},
	{0x0B274FF90B40D0A2, (void*)&sceUserServiceTerminateForShellCore},
	{0x3EC97D99FB3776E3, (void*)&sceUserServiceInitializeForShellCore},
};

MODULE_INIT(libSceUserService);