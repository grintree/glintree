#include "ComLineWidget.h"

ComLineWidget::ComLineWidget(QWidget *parent,int type) : QWidget(parent)
{
    setAttribute(Qt::WA_StyledBackground,true);
    setStyleSheet(".ComLineWidget{background-color:rgb(229,229,234);}");
    if(1==type){
        setFixedWidth(1);
    }else{
        setFixedHeight(1);
    }
}
