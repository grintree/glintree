#ifndef CONSTANT_H
#define CONSTANT_H

#include <QString>

/**
 * @brief HOST
 * 注意，项目里面，一共添加了三个业务接口：
    1 reportCrash  // 上报崩溃信息
    2 reportHeart  // 上传心跳
    3 checkVersion // 检查版本
  在二次开发的时候，可以忽略接口的存在，并不会影响功能的使用。
 *
 */
const QString HOST = "*";           //保留服务器地址，为后续检查心跳以及探测指纹
const bool    IS_reportHeart = true;

const QString URL_OPENSOURCE = "https://github.com/grintree/glintree.git"; // 开源地址

const QString JS_QWEBCHANNEL_FILE = ":/res/js/lib/qwebchannel_release.js.txt";
const QString JS_CUSTOMTASK_FILE = ":/res/js/customtask.js.txt";
const QString JS_EXECUTE_FILE = ":/res/js/execute.js.txt";

const QString SETTINGS_KEY_FINGER= "settings_finger";// 唯一指纹
const QString SETTINGS_KEY_OPEN_PROXY= "settings_open_proxy";// 是否开启代理
const QString SETTINGS_KEY_PROXY_IP= "settings_proxy_ip";
const QString SETTINGS_KEY_PROXY_PORT= "settings_proxy_port";
const QString SETTINGS_KEY_PROXY_USERNAME= "settings_proxy_username";
const QString SETTINGS_KEY_PROXY_PASSWORD= "settings_proxy_password";

#endif // CONSTANT_H
