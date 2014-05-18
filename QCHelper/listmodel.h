#ifndef LISTMODEL_H
#define LISTMODEL_H

#include <QAbstractListModel>

class ListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ListModel(QObject *parent = 0);

signals:

public slots:

protected:
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

private:

};

#endif // LISTMODEL_H
