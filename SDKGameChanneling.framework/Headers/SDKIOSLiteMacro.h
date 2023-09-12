//
//  SDKIOSLiteMacro.h
//  SDKLite
//
//  Created by DucViet on 6/12/17.
//  Copyright © 2017 DucViet. All rights reserved.
//
//#import "<FirebaseAnalytics/"FirebaseAnalytics.h>

#import "MBProgressHUD.h"

#ifndef SDKIOSLiteMacro_h
#define SDKIOSLiteMacro_h

typedef enum {
    ResultCodeConnectionError = -1,
    ResultCodeSuccess = 0,
    ResultCodeDataEmpty = -2,
    ResultCodeDataError = 1,
    ResultCodeNetWorkError = -1001,
    RequestCodeUnknowError = 1000,
    AccountNotActivePhoneNumber = -49,
    AccountEsixted = -30,
    Accountlocked = -48,
    AccountNotActiveEmail = -43,
    AccountNotExist = -50,
    AccountPasswordIncorrect = -53,
    ServiceLimited = -102,
    ApikeyIncorrect = -100,
    ApiisLocking = -101,
    NumberPhoneExisted = -700,
    NumberPhoneUsedNotActive = -701,
    LoginErrorWhenRegistorSuccess = -303,
}ResultCode;

typedef enum {
    MethodTypeGET = 0,
    MethodTypePOST,
    MethodTypePUT,
    MethodTypeDELETE,
    MethodTypeHEAD,
    MethodTypePATCH
}MethodType;
typedef enum {
    UpdateFastAccountScreen             = 0,
    UpdateAccountFastScreen             = 1,
    ActiveMobileScreen                  = 2,
    RegisterAccountScreen               = 3,
    ExistAccountScreen                  = 4,
}ToScreen;
#define ERROR_CODE_NETWORK_UNAVAIABLE   -9000
#define IS_IPAD (( UIDevice.current.userInterfaceIdiom == UIUserInterfaceIdiomPad ) ? YES : NO)
#define IS_IPHONE_5 (([UIScreen mainScreen].scale == 2.f && [UIScreen mainScreen].bounds.size.height == 568)?YES:NO)
#define IS_RETINA_DISPLAY_DEVICE (([UIScreen mainScreen].scale == 2.f)?YES:NO)
#define IS_IPHONE_5_SDK (([UIScreen mainScreen].scale == 2.f && [UIScreen mainScreen].bounds.size.width == 568)?YES:NO)
#define IS_IPAD_SDK (([UIScreen mainScreen].scale == 2.f && [UIScreen mainScreen].bounds.size.width == 1024)?YES:NO)
#define IS_IPHONE_6 (fabs((double)[[UIScreen mainScreen]bounds].size.width - (double)667) < DBL_EPSILON)
#define IS_IPHONE_6_PLUS (fabs((double)[[UIScreen mainScreen]bounds].size.width - (double)736) < DBL_EPSILON)

#define IDIOM    UIDevice.current.userInterfaceIdiom
#define IPAD     UIUserInterfaceIdiomPad

//#define SCREEN_WIDTH (UIInterfaceOrientationIsPortrait([UIApplication sharedApplication].statusBarOrientation) ? [[UIScreen mainScreen] bounds].size.width : [[UIScreen mainScreen] bounds].size.height)
//#define SCREEN_HEIGHT (UIInterfaceOrientationIsPortrait([UIApplication sharedApplication].statusBarOrientation) ? [[UIScreen mainScreen] bounds].size.height : [[UIScreen mainScreen] bounds].size.width)

#define SCREEN_WIDTH_POR     (IDIOM == IPAD) ? 336 : ([[UIScreen mainScreen] bounds].size.width - 20)
#define SCREEN_HEIGHT_POR    (IDIOM == IPAD) ? 300 : (([[UIScreen mainScreen] bounds].size.width - 20) * 0.9)

#define SCREEN_WIDTH     (IDIOM == IPAD) ? 336 : [[UIScreen mainScreen] bounds].size.width * 0.58
#define SCREEN_HEIGHT    (IDIOM == IPAD) ? 350 : [[UIScreen mainScreen] bounds].size.width * 0.58 * 0.9
///-----------------------------------------
/// @define key for SDKLite in setting
///-----------------------------------------
#define KEY_SAVE_LANGUAGE_SETTING       @"key_save_language_setting"
#define CHANGE_LANGUAGE_SETTING         @"change_language_setting"
#define KEY_SAVE_DEVICE_TOKEN_PUSH      @"key_save_device_token_push"

#define KEY_API_CONFIG_APP              @"api_key_config_app"
#define KEY_AGENCY_APP                  @"agency_for_app"
#define KEY_DATA_USER_FAST_LOGIN        @"key_data_fast_login"
#define KEY_CHECK_FAST_LOGIN            @"key_check_fast_login"
#define KEY_CHECK_ACCOUNT_LOGIN         @"key_check_account_login"
#define KEY_SAVE_USERID                 @"key_save_user_id"
#define KEY_SAVE_USERNAME               @"key_save_user_name"
#define KEY_SAVE_USER_TOKEN             @"key_save_user_token"
#define KEY_SAVE_USER_FIRST_LOGIN       @"key_save_user_first_login"
#define KEY_SAVE_METHOD_LOGIN           @"key_save_method_login"

#define KEY_USERDEFAULT_DATA_CONFIG     @"key_save_data_config"
#define KEY_DATA_IMAGE_UPLOAD_TO_SERVER @"key_data_image_upload_to_server"

#define KEY_APPID                       @"key_appID"

//TODO: THAY ĐỔI VỚI FRAMEWORK KHÁC
#define BUNDLE_IDENTIFIER               @"com.kd.SDKGameChanneling"




#define API_APP_UPDATE_PROFILE          @"accountapiv4/server/update_profile.aspx"


/**
 Url api for PUSH NOTI data app in SDK!.
 */
#define API_APP_PUSH_NOTIFICATION       @"game/devicecontent.aspx"
#define API_APP_REPORT_COUNTER_NOTI     @"game/reportcounter.aspx"
#define API_APP_SEND_ERROE              @"errorlog/default.aspx"
/**
 Url api for request data app in SDK!.
 */
#define SERVERLIVEGAMEINVITE            @"/game/game"
#define BACKUP_SERVERLIVEGAMEINVITE     @"/game/game"
#define GETOLDLISTINVITE                @"apigetoldfacebook.aspx?"
#define INSERTLISTNEWINVITE             @"apiresultinvite.aspx?"

#define API_APP_GET_INFOACC_BY_NAME     @"accountapiv4/server/get_user_info_by_name.aspx"
#define API_APP_CONFIG                  @"appconfig/default.aspx"
#define API_GET_PRODUCT_INFO            @"billingapi/server/get_inapp_product.aspx"
#define API_APP_GET_INFOACC             @"accountapiv4/server/get_user_info.aspx"
#define API_APP_LOGIN                   @"accountapiv4/server/login.aspx"
#define API_APP_FAST_LOGIN              @"accountapiv4/server/fast_login.aspx"
#define API_APP_REGISTER                @"accountapiv4/server/register.aspx"
#define API_APP_REGISTER_MOBILE         @"accountapiv4/server/register_mobile.aspx"
#define API_APP_REGISTER_MOBILE_ACTIVE  @"accountapiv4/server/register_mobile_active.aspx"
#define API_APP_LOGOUT                  @"accountapiv4/server/logout.aspx"
#define API_APP_CHECK_DEVICE            @"accountapiv4/server/check_device.aspx"
#define API_APP_AUTHEN_FACEBOOK         @"accountapiv4/server/oauth_facebook.aspx"
#define API_APP_AUTHEN_GOOGLE           @"accountapiv4/server/oauth_google.aspx"
#define API_APP_AUTHEN_APPLEID          @"accountapiv4/server/oauth_apple.aspx"
#define API_APP_CONNEC_FACEBOOK         @"accountapiv4/server/connect_facebook.aspx"
#define API_APP_CONNEC_GOOGLE           @"accountapiv4/server/connect_google.aspx"
#define API_APP_FORGOT_BY_MOBILE_B1     @"accountapiv4/server/forgot_by_mobile.aspx"
#define API_APP_MTT                     @"mtt/server/from_itunes.aspx"
#define API_APP_ADD_ADVERTIVE           @"facebookads/server/fb_add_advertiser_info.aspx"
#define API_APP_GET_SUPPORT             @"accountapiv4/server/get_support.aspx"
#define API_APP_FORGOT_BY_EMAIL         @"accountapiv4/server/forgot_by_email.aspx"


#define API_APP_PURCHASE_GET_LASTEST    @"facebookads/server/fb_purchase_getlastest.aspx?"
#define API_APP_NOTIFI_PURCHASE         @"facebookads/server/fb_notify_purchase.aspx?"
#define API_APP_GET_WARNING_CHEAT       @"accountapiv4/server/get_alert.aspx"


#define API_APP_DELETE_BY_MOBILE        @"accountapiv4/server/delete_by_mobile.aspx"
#define API_APP_DELETE_BY_EMAIL         @"accountapiv4/server/delete_by_email.aspx"
#define API_APP_DELETE_ACCOUNT          @"accountapiv4/server/delete.aspx"


#define API_APP_UPLOAD_AVATAR           @"accountapiv4/server/upload_avatar.aspx"
#define API_APP_UPLOAD_IMAGE            @"accountapiv4/server/upload_image.aspx"
#define API_TRACKING_EVENT              @"/v1/log"
/**
 define key get data in SDK!.
 */
#define KEY_DATA_FACEBOOK               @"DataFB"
#define KEY_ERROR_CODE                  @"error_code"
#define KEY_MESSAGE                     @"message"
#define KEY_DATA                        @"data"
#define KEY_DOMAIN_GAME                 @"gameDomain"
#define KEY_USERNAME                    @"username"
#define KEY_USER_ID                     @"user_id"
#define KEY_USERNAME                    @"username"
#define KEY_ACCESS_TOKEN                @"access_token"
#define KEY_FACEBOOK_ID                 @"id"
#define KEY_FACEBOOK_MAIL               @"email"
#define KEY_FACEBOOK_GENDER             @"gender"
#define KEY_FACEBOOK_NAME               @"name"
#define KEY_FACEBOOK_TOKEN              @"token_for_business"
#define KEY_INFO_EMAIL_FACE             @"facebook_email"
#define KEY_INFO_EMAIL_GOOGLE           @"google_email"
#define KEY_TITLE_BUTTON_PLAYNOW        @"titleButtonPlayNow"
#define KEY_FORGOT_PASSWORD             @"linkForgotPass"
#define KEY_TITLE_BUTTON_REGISTER       @"titleButtonRegis"
#define KEY_RE_PASSWORD                 @"rePassword"
#define KEY_REDMINED                    @"reminder"
#define KEY_RATING                      @"rating"
#define KEY_API_TRACKING_EVENT          @"123456"

#endif 

/* SDKIOSLiteMacro_h */
#define KEY_WELCOME_SCREEN              @"welcomScreen"
#define KEY_LAGUAGE_VI                  @"vietnamese"
#define KEY_LAGUAGE_EN                  @"english"
#define KEY_WC_TITLE                    @"title"
#define KEY_WC_DETAIL                   @"detail"
#define KEY_WC_BUTTON_PLAY              @"titleButtonPlay"
#define KEY_WC_BUTTON_ACCOUNT           @"titleButtonHasAccount"
#define KEY_STATUS_APP                  @"app_status"
/**
 Key get data in fast login screen!.
 */
#define KEY_FAST_LOGIN_SCREEN           @"fastloginScreen"
#define KEY_PLACE_ACCOUNT               @"placeAccount"
#define KEY_PLACE_LOGIN_F               @"placeLoginFace"
#define KEY_PLACE_LOGIN_G               @"placeLoginGoogle"
#define KEY_DESCRIPTION                 @"description"
#define KEY_TITLE_BUTTON                @"titleButton"
#define KEY_APPLE_PAYMENT_METHOD        @"paymentMethods"
#define KEY_LOGIN_METHOD                @"loginMethods"
#define KEY_METHOD                      @"method"
#define KEY_ITEMS                       @"items"
#define KEY_PRODUCT_ID                  @"productid"
#define KEY_NAME                        @"name"
#define KEY_GAMECURRENCY                @"gameCurrency"
#define KEY_PRICEAPPLE                  @"priceApple"
#define KEY_PRICE                       @"price"
#define KEY_HOT_LINE                    @"hotline"
#define KEY_CHAT_ID                     @"chat_id"
#define KEY_FIRST_LOGIN                 @"first_login"
#define KEY_TRANSACTION_ID              @"transaction_id"
#define KEY_AMOUNT                      @"amount"
#define KEY_P_TYPE                      @"pt"
/**
 Key get data in Register, confirm and login screen!.
 */
#define KEY_REGISTER_SCREEN             @"registerScreen"
#define KEY_LOGIN_SCREEN                @"loginScreen"
#define KEY_CONFIRM_SCREEN              @"confirmRegisScreen"
#define KEY_PLACE_PASSWORD              @"placePassword"
#define KEY_TITLE_BUTTON_LOGIN          @"titleButtonLogin"
#define KEY_LABEL_ACCOUNT               @"labelAccount"
#define KEY_LABEL_PASSWORD              @"labelPassword"
#define KEY_TITLE_MESSAGER              @"labelTitleMessage"
#define KEY_CONTENT_MESSAGER            @"labelContenMessage"
#define KEY_CONTENTS                    @"content"
#define KEY_NEW_REGISTER                @"newRegister"
#define KEY_ACCOUNT_REGISTERED          @"accountRegistered"
/**
 Key get data in noti show.
 */
#define KEY_NOTI_ID                     @"id"
#define KEY_BADGE                       @"badge"
#define KEY_BODY                        @"body"
#define KEY_GAME_NOTI                   @"GAMENOTIFICATION"
/**
 Even for tracking.
 */
#define EVEN_SPLAY_ACCOUNT_LOGIN        @"splay_account"
#define EVEN_GG_ACCONT_LOGIN            @"google"
#define EVEN_APPLE_ACCONT_LOGIN         @"apple"
#define EVEN_FB_ACCOUNT_LOGIN           @"facebook"
#define EVEN_GEST_ACCOUNT_LOGIN         @"guest_account"

#define EVEN_FIRST_OPEN_FB             @"first_open_fb"
#define EVEN_FIRST_OPEN_GG             @"first_open_gg"
#define EVEN_FIRST_OPEN_APPSFLYER      @"first_open_appsflyer"


#define EVEN_COMPLETE_EXTRACT_OBB_VTC   @"vtc_complete_purchaseextract_obb"
#define EVEN_COMPLETE_FIRST_LEVEL_VTC   @"vtc_complete_first_level"
#define EVEN_COMPLETE_FIRST_UPDATE_VTC  @"vtc_complete_first_update"
#define EVEN_COMPLETE_FIRST_OPEN_VTC    @"vtc_complete_first_open"
#define EVEN_COMPLETE_TUTORIAL_VTC      @"vtc_complete_tutorial"
#define EVEN_COMPLETE_OVER_TUTORIAL_VTC      @"vtc_complete_over_tutorial"
#define EVEN_COMPLETE_LOAD_SERVER_LIST_VTC      @"vtc_complete_load_server_list"
#define EVEN_COMPLETE_LOAD_SDK_VTC      @"vtc_complete_load_sdk"
#define EVEN_COMPLETE_LOAD_ROLE_VTC      @"vtc_complete_load_role"
#define EVEN_COMPLETE_CREATE_ROLE_VTC     @"vtc_complete_create_role"


#define EVEN_FIRST_LEVEL_GG             @"first_level_gg"
#define EVEN_FIRST_LEVEL_APPSFLYER      @"first_level_appsflyer"


#define KEY_MOBILE                      @"mobile"
#define KEY_EMAIL                       @"email"
#define EVEN_START_PLAYNOW_SUCCESS      @"Start_Playnow_sucess"
#define EVEN_START_PLAYNOW_ERROR        @"Start_Playnow_error"

#define EVEN_START_LOGIN_SUCCESS        @"Start_login_sucess"
#define EVEN_START_LOGIN_ERROR          @"Start_login_error"
#define EVEN_FIRST_SIGNIN_SUCCESS       @"First_sign_success"
#define EVEN_SIGN_NORMAL_SUCCESS        @"Signin_Normal_Sucess"
#define EVEN_SIGNIN_NORMAL_ERROR        @"Signin_Normal_error"
#define EVEN_SIGNIN_FACEBOOK_SUCCESS    @"Signin_facebook_sucess"
#define EVEN_SIGNIN_FACEBOOK_ERROR      @"Signin_facebook_error"
#define EVEN_AUTHEN_FACEBOOK_ERROR      @"Authen_facebook_error"

#define EVEN_SIGNIN_GOOGLE_SUCCESS      @"Signin_google_sucess"
#define EVEN_SIGNIN_GOOGLE_ERROR        @"Signin_google_error"
#define EVEN_SIGNIN_SUPPORT_SUCCESS     @"Signin_support_sucess"
#define EVEN_SIGNIN_SUPPORT_ERROR       @"Signin_support_error"
#define EVEN_SIGNUP_SUCCESS             @"Signup_sucess"

#define EVEN_SIGNUP_ERROR               @"Signup_error"
#define EVEN_CONNECT_SIGNUP_SUCCESS     @"Connect_signup_sucess"
#define EVEN_CONNECT_SIGNUP_ERROR       @"Connect_signup_error"
#define EVEN_CONNECT_FACEBOOK_SUCCESS   @"Connect_facebook_sucess"
#define EVEN_CONNECT_FACEBOOK_ERROR     @"Connect_facebook_error"
#define EVEN_CONNECT_GOOGLE_SUCCESS     @"Connect_google_sucess"
#define EVEN_CONNECT_GOOGLE_ERROR       @"Connect_google_error"
#define EVEN_CONNECT_PLAYNOW_SUCCESS    @"Connect_playnow_sucess"
#define EVEN_CONNECT_PLAYNOW_ERROR      @"Connect_playnow_sucess"

#define EVEN_COMPLETE_REGISTRATION     @"vtc_complete_registration"
#define EVEN_COMPLETE_REGISTRATION_NEW @"vtc_complete_registration_new"
#define EVEN_COMPLETE_REGISTRATION_OLD @"vtc_complete_registration_old"
#define EVEN_LOGIN_GAME_VTC                 @"vtc_loginGame"

// Define tracking
#define API_GET_USER_INFO           @"api_user_info"
#define API_CHECK_DEVICE            @"api_check_device"
#define API_LOG_OUT                 @"api_log_out"
#define API_GET_WEB_PURCHASES       @"api_get_w_purchases"
#define API_SAVE_WEB_PURCHASES      @"api_save_w_purchases"
#define API_UPLOAD_IMAGE            @"api_upload_image"
#define API_GET_CONFIG              @"api_get_config"

#define API_GET_INVITED_FB_LIST     @"api_get_invited_fb"
#define API_REGISTER_GUEST_LOGIN    @"api_register_guest_login"
#define API_SPLAY_LOGIN             @"api_splay_login"
#define API_GG_LOGIN                @"api_google_login"
#define API_FB_LOGIN                @"api_facebook_login"
#define API_GUEST_LOGIN             @"api_guest_login"
#define API_GET_SUPPORT_INFO        @"api_support_info"
#define API_GET_ANNOUNCEMENT        @"api_announcement"
#define API_REGISTER_ACCOUNT        @"api_register_account"
#define API_REGISTER_MOBILE         @"api_register_mobile"
#define API_CONFIRM_MOBILE          @"api_confirm_mobile"
#define API_RESET_PASS_MOBILE       @"api_reset_pass_mobile"
#define API_RESET_PASS_EMAIL        @"api_reset_pass_email"
#define API_VERIFY_OTP              @"api_verify_otp"
#define API_CHECK_LAST_DIGIT        @"api_check_last_digit"
#define API_LOG_IAP                 @"api_log_iap"
#define CONSUME_IAP                 @"consume_iap"
#define QUERY_IAP                   @"query_iap"
#define API_SUBMIT_ISSUE            @"api_submit_issue"
#define API_SAVE_INVITED_LIST       @"api_save_invited_list"
#define CONNECTION_ERROR            @"connection_error"


// Define Manager
#define ACTION_LOGIN_USER_SUCCESS           @"key_login_user_success_action"
#define ACTION_LOGIN_APPLE_SUCCESS           @"key_login_apple_success_action"
#define KEY_INFO_USER_LOGIN                 @"key_info_user_login"
#define ACTION_LOGOUT_USER_SUCCESS          @"key_logout_user_success_action"
#define KEY_INFO_USER_LOGOUT                @"key_login_user_success_action"
