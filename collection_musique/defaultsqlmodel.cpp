#include <QtGui>

#include "defaultsqlmodel.h"

DefaultSqlModel::DefaultSqlModel(QObject *parent)
        : QSqlQueryModel(parent) {
}

QVariant DefaultSqlModel::data(const QModelIndex &index, int role) const {
    //~ QVariant value = QSqlQueryModel::data(index, role);
    /*if (value.isValid() && role == Qt::DisplayRole) {
        if (index.column() == 0)
            return value.toString().prepend("#");
        else if (index.column() == 2)
            return value.toString().toUpper();
    }*/
    
    if (role == Qt::BackgroundRole && index.row()%2 == 1)
        return QVariant::fromValue(QBrush(QColor(240, 240, 240)));
    if (role == Qt::ForegroundRole)
        return QVariant::fromValue(QBrush(QColor(Qt::black)));
    if (role == Qt::FontRole) {
        QFont f = QSqlQueryModel::data(index, role).value<QFont>();
        f.setPointSize(10);
        //~ qDebug() << f.pointSize() << f.family();
        return QVariant::fromValue(f);
    }
    return QSqlQueryModel::data(index, role);
}

QVariant DefaultSqlModel::headerData(int section, Qt::Orientation orientation, int role) const  {
    if (role == Qt::FontRole) {
        QFont f = QSqlQueryModel::headerData(section, orientation, role).value<QFont>();
        f.setWeight(QFont::DemiBold);
        return QVariant::fromValue(f);
    }
    
    return QSqlQueryModel::headerData(section, orientation, role);
}