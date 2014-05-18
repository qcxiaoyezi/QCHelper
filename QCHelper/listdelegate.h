#ifndef LISTDELEGATE_H
#define LISTDELEGATE_H

#include <QAbstractItemDelegate>

class ListDelegate : public QAbstractItemDelegate
{
    Q_OBJECT
public:
    explicit ListDelegate(QObject *parent = 0);

signals:

public slots:

protected:
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;

};

#endif // LISTDELEGATE_H
