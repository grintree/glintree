#ifndef STYLE_H
#define STYLE_H
#include <QString>
// 字体 https://blog.csdn.net/qq_37370501/article/details/81016910


const QString m_rgb_basic = "rgb(245,245,247)";

const QString m_stylesheet_QLabel = ".QLabel{color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:17px;}";
const QString m_stylesheet_QLabel12 = ".QLabel{color:rgb(134,134,139);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:16px;}";
const QString m_stylesheet_QLabel14 = ".QLabel{color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:18px;}";
const QString m_stylesheet_QLabel18 = ".QLabel{color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:22px;}";
const QString m_stylesheet_QLabel30 = ".QLabel{color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:34px;}";

const QString m_stylesheet_QCheckBox = "QCheckBox{color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:17px;height:22px;spacing:6px;};\
          QCheckBox::indicator{width:16px;height:16px;border:1px solid rgb(199,199,204);border-radius:4px;background:rgb(255,255,255);};\
          QCheckBox::indicator:checked{background:rgb(10,132,255);border-color:rgb(10,132,255);};";

const QString m_stylesheet_QLineEdit = ".QLineEdit{color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:17px;background:rgb(255,255,255);border:1px solid rgb(209,209,214);border-radius:8px;padding: 4px 10px;}\
         .QLineEdit:hover {border:1px solid rgb(174,174,178);}\
         .QLineEdit:focus {border:1px solid rgb(10,132,255);}";

const QString m_stylesheet_QTextEdit = ".QTextEdit{color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:17px;background:rgb(255,255,255);border:1px solid rgb(209,209,214);border-radius:8px; padding: 4px 10px;}\
         .QTextEdit:hover {border:1px solid rgb(174,174,178);}\
         .QTextEdit:focus {border:1px solid rgb(10,132,255);}";

const QString m_stylesheet_QSpinBox = ".QSpinBox{color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:17px;background:rgb(255,255,255);border:1px solid rgb(209,209,214);border-radius:8px; padding: 3px 8px;}\
         .QSpinBox:hover {border:1px solid rgb(174,174,178);}\
         .QSpinBox:focus {border:1px solid rgb(10,132,255);}";

const QString m_stylesheet_QComboBox =".QComboBox {color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:17px;background:rgb(255,255,255);border:1px solid rgb(209,209,214);border-radius:8px; padding: 3px 8px;}\
         .QComboBox:hover {border-color:rgb(174,174,178);}\
         .QComboBox::drop-down{border:none;width:22px;} \
         .QComboBox QAbstractItemView{background:rgb(255,255,255);border:1px solid rgb(209,209,214);border-radius:8px;padding:4px;outline:0px;} \
         .QComboBox QAbstractItemView::item { height: 28px;border-radius:6px;}\
         .QComboBox QAbstractItemView::item:selected {background-color:rgb(10,132,255);color:rgb(255,255,255);}";

const QString m_stylesheet_QToolButton_hollow = ".QToolButton {color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:17px;background-color:rgb(255,255,255); border:1px solid rgb(209,209,214); border-radius: 8px;padding: 4px 12px;}\
         .QToolButton:pressed {background-color: rgb(229,229,234);}\
         .QToolButton:hover {background-color: rgb(242,242,247);}";

const QString m_stylesheet_QToolButton_empty = "QToolButton{border:0px;}";

// 背景为蓝色（macOS 系统蓝）
const QString m_stylesheet_QPushButton = ".QPushButton {color:white;font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:18px;background-color:rgb(10, 132, 255);border:none; border-radius: 8px;padding: 5px 14px;}\
         .QPushButton:pressed {background-color: rgb(0, 106, 224);}\
         .QPushButton:hover {background-color: rgb(10, 120, 238);}\
         .QPushButton:focus{outline: none;}";
// 背景为蓝色
const QString m_stylesheet_QPushButton_blue = ".QPushButton {color:white;font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:18px;background-color:rgb(10,132,255);border:none; border-radius: 8px;padding: 5px 14px;}\
         .QPushButton:pressed {background-color: rgb(0,106,224);}\
         .QPushButton:hover {background-color: rgb(10,120,238);}\
         .QPushButton:focus{outline: none;}";

// 背景为白色，边框为浅灰
const QString m_stylesheet_QPushButton_hollow = ".QPushButton {color:rgb(29,29,31);font-family:'Microsoft YaHei UI','Microsoft YaHei';font-size:18px;background-color:rgb(255,255,255); border:1px solid rgb(209,209,214); border-radius: 8px;padding: 5px 14px;}\
         .QPushButton:pressed {background-color: rgb(229,229,234);}\
         .QPushButton:hover {background-color: rgb(242,242,247);}\
         .QPushButton:focus{outline: none;}";
// 任务流的左侧和右侧滚动框（macOS 滚动条）
const QString m_stylesheet_QScrollArea = "QScrollArea{border:none;}\
          QScrollBar::vertical{background:transparent;width:8px;margin:2px;}\
          QScrollBar::handle:vertical{background:rgb(199,199,204);border-radius:4px;min-height:24px;}\
          QScrollBar::handle:hover:vertical,QScrollBar::handle:pressed:vertical{background:rgb(174,174,178);}\
          QScrollBar::horizontal{background:transparent;height:8px;margin:2px;}\
          QScrollBar::handle:horizontal{background:rgb(199,199,204);border-radius:4px;min-width:24px;}\
          QScrollBar::handle:hover:horizontal,QScrollBar::handle:pressed:horizontal{background:rgb(174,174,178);}\
          QScrollBar::add-line:vertical,QScrollBar::sub-line:vertical,QScrollBar::add-line:horizontal,QScrollBar::sub-line:horizontal{background:none;width:0;height:0;}\
          QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical,QScrollBar::add-page:horizontal,QScrollBar::sub-page:horizontal{background:transparent;}";

const QString m_stylesheet_QToolBar = "QToolBar {background-color:rgba(255,255,255,0.72);spacing:8px;border-bottom:1px solid rgba(0,0,0,0.08);}\
          QToolBar QToolButton {color: rgb(29,29,31);text-align: left; padding:4px 8px; margin:2px 2px;border-radius:6px;}\
          QToolBar QToolButton:hover {background-color:rgba(0,0,0,0.06); }";


#endif // STYLE_H
