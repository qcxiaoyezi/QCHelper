#ifndef LISTVIEW_H
#define LISTVIEW_H

#include <QListView>
#include "listmodel.h"
#include "listdelegate.h"


class ListView : public QListView
{
    Q_OBJECT
public:
    explicit ListView(QWidget *parent = 0);

signals:

public slots:

private:
    ListModel *m_listModel;
    ListDelegate *m_listDelegate;

};

#endif // LISTVIEW_H
