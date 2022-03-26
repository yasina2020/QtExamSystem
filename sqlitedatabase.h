#ifndef SQLITEDATABASE_H
#define SQLITEDATABASE_H

#include <QApplication>
#include <QCoreApplication>
#include <QDebug>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QMap>
#include <randomaccess.h>


struct department{
    int id;
    QString deptName;
};

struct person{
    int id;
    int deptId;
    QString perName;
};

class SqliteDatabase
{
    QSqlDatabase db;
public:
    SqliteDatabase();
    void initPickNameDBtest(); // 测试函数
    QVector<department> getDeptData(); // 读取处表返回处的结构体
    QMap<int,QVector<person>> getPerData(); // 读取人员表返回人员的结构体
    QPair<int, QString> getRanPer(int n, int deptId, QMap<int,QVector<person>> perData); // 点击选择获取n人数据
    void writePickHis(QMap<int, QString> ranData);
};

#endif // SQLITEDATABASE_H