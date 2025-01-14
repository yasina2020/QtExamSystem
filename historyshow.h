#ifndef HISTORYSHOW_H
#define HISTORYSHOW_H

#include <QDialog>
#include "defs.h"
#include <QTableWidget>
#include <confirmhisdeletedialog.h>

namespace Ui {
class HistoryShow;
}

class HistoryShow : public QDialog
{
    Q_OBJECT

public:
    explicit HistoryShow(QWidget *parent = nullptr);
    ~HistoryShow();
    QWidget hisShow();
    void refresh(QVector<hisRecord> hisResult, QVector<department> departs);
    void confirmHisDelete();
    void hisDetScopeInit();

private:
    Ui::HistoryShow *ui;
    QVector<hisDetScope> m_scopeVect;
};

#endif // HISTORYSHOW_H
