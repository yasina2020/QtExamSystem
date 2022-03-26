#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <sqlitedatabase.h>
#include <singlerow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    SqliteDatabase* database = nullptr;
    QVector<SingleRow*> singleRows;

    QVector<department> m_depts;
    QMap<int,QVector<person>> m_pers;

    QMap<int, QPair<int, QString>> m_readPersons;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void getData();
    void initGUI();
    void showDept();

    void refreshSingleRow(int line);


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
