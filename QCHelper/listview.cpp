#include "listview.h"

ListView::ListView(QWidget *parent) :
    QListView(parent)
{
    m_listModel = new ListModel;
    this->setModel(m_listModel);
    m_listDelegate = new ListDelegate;
    this->setItemDelegate(m_listDelegate);

}
