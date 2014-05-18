#include "listdelegate.h"
#include <QPainter>

ListDelegate::ListDelegate(QObject *parent) :
    QAbstractItemDelegate(parent)
{
}


void ListDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    painter->save();

    if(0!=(index.row()%2)){
        painter->fillRect(option.rect,QColor(180,180,180));
    }else{
        painter->fillRect(option.rect,QColor(220,220,220));
    }

    if(QStyle::State_MouseOver & option.state){
        painter->fillRect(option.rect,Qt::yellow);
    }


    QRect rect = option.rect;
    rect.adjust(3,0,0,0);
    painter->drawText(rect,Qt::AlignVCenter,QString::number(index.row()+1));

    rect.adjust(40,0,0,0);
    if(index.row() == 0)
    {
        painter->drawText(rect,Qt::AlignVCenter,"Gosap 开发难点");
    }else {

        painter->drawText(rect,Qt::AlignVCenter,"Onvif  开发难点");
    }


    painter->restore();

}

QSize ListDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{



    return QSize(0,25);

}
