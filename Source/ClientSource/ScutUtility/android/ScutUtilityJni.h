/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <string>
/* Header for class com_nd_lib_NdUitilityJni */

#ifndef _Included_com_nd_lib_NdUitilityJni
#define _Included_com_nd_lib_NdUitilityJni

#ifdef __cplusplus
	extern "C" {
#endif

		extern JavaVM *gJavaVM;

		//�ⲿ��free �ͷŷ��ص��ڴ�
		char* getLanguageJNI();
		bool  getSDCardStateJNI();

		//�ⲿ��free �ͷŷ��ص��ڴ�
		char* getAndroidImsi();
		char* getAndroidImei();


		//������Ϣ֪ͨ����
		//	context �� activity֮���������
		//	iconResId �� ��ʾ����Ϣ��ͼ����Դ��id
		//	msgTitle �� ��Ϣ����
		//	msgContent �� ��Ϣ����
		//	intentFlag �� intent�����ͣ���Intent.FLAG_ACTIVITY_SINGLE_TOP|Intent.FLAG_ACTIVITY_CLEAR_TOP
		//	notifyFlag �� ��ʾ�����ͣ���Notification.FLAG_AUTO_CANCEL
		//	when �� ��ʾ����Ϣĩβ��ʱ�䣬��System.currentTimeMillis()
		void localNotification(
			jint	iconResId ,
			jstring	msgTitle ,
			jstring msgContent,
			jint 	intentFlag,
			jint	notifyFlag ,
			jlong	when
			);

		JNIEXPORT void JNICALL Java_com_nd_lib_NdUtilityJni_initTest
			(JNIEnv *, jclass);


		JNIEXPORT void  JNICALL Java_com_nd_application_MainApplication_localNotification
			(JNIEnv *env, jobject thiz,
			jint	iconResId ,
			jstring	msgTitle ,
			jstring msgContent,
			jint 	intentFlag,
			jint	notifyFlag ,
			jlong	when
			);


		//
		//	������Ϣ֪ͨ����
		//
		//	soundName	�������ļ�·��
		//	iconResId	����ʾ����Ϣ��ͼ����Դ��id
		//	msgTitle	����Ϣ����
		//	msgContent	����Ϣ����
		//	when		����ʾ����Ϣĩβ��ʱ�������System.currentTimeMillis()
		//	hasAction	���Ƿ���
		//	repeatInterval	����ʾ��������ޣ�
		void scheduleAndroidLocalNotification(std::string strSoundName, int iconResId, std::string strMsgTitle, std::string strMsgContent, double when, unsigned char hasAction, int repeatInterval);
		void cancelAndroidNotification(int id);
		void cancelAndroidNotifications();

		void androidCopyTextToClipBoard(std::string content);
		char* androidGetTextFromClipBoard();

		void androidLaunchApp(std::string packageName);
		void androidInstallPackage(std::string apkFilePath);
		bool androidCheckAppInstalled(std::string packageName, bool bForceUpdate);
		std::string androidGetInstalledApps();

		//void androidRegisterWebviewCallback(int nHandler);
		//void excWebviewCallback(std::string strFun, int code, std::string strParam);

		std::string androidGetCurrentAppId();

		int androidGetActiveNetwork();

		//���ڲ���scheduleLocalNotification�ӿ�
		JNIEXPORT void  JNICALL Java_com_nd_application_MainApplication_scheduleLocalNotification(JNIEnv *env, jobject thiz,
			jstring	soundName,
			jint		iconResId ,
			jstring	msgTitle ,
			jstring	msgContent,
			jlong	when,
			jboolean hasAction,
			jint		repeatInterval
			);

		//���ڲ���copyTextToClipBoard�ӿ�
		JNIEXPORT void JNICALL Java_com_nd_application_MainApplication_copyTextToClipBoard(JNIEnv *env, jobject thiz, jstring content);

		JNIEXPORT void JNICALL Java_org_cocos2dx_lib_WebViewActivity_DoWebviewCallback(JNIEnv * env, jclass thisCls, jint nHandler, jint type, jstring strParam);

#ifdef __cplusplus
	}
#endif



#endif