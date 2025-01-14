#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sqlitedatabase.h"
#include "singlerow.h"
#include "pickresultdiagram.h"
#include "defs.h"
#include "historyshow.h"
//#include "rygl.h"
#include "personmanagedialog.h"
#include "absencemanagedialog.h"
#include "dptmanagedialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    SqliteDatabase* database = nullptr;
    PickResultDiagram* m_resultDiagram = nullptr;
    QVector<SingleRow*> singleRows;

    QVector<department> m_depts;
    QMap<int,QVector<person>> m_pers;

    QMap<int, QPair<int, QString>> m_readPersons;
    QVector<hisRecord> m_his;
    int pickNum = 0;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void getData();
    void initGUI();
    void showDept();

    void refreshSingleRow(int line);
    void showWorkPerNum();

    void showHisDialog();

    void PersonManagement();
    void AbsentManageButton();
    void DptManageButton();

//private slots:
//    void on_renyuanguanli_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
