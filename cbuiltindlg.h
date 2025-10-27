#ifndef CBUILTINDLG_H
#define CBUILTINDLG_H

#include <QDialog>
#include<QPushButton>
#include<QTextEdit>
QT_BEGIN_NAMESPACE
namespace Ui {
class CBuiltinDlg;
}
QT_END_NAMESPACE

class CBuiltinDlg : public QDialog
{
    Q_OBJECT

public:
    CBuiltinDlg(QWidget *parent = nullptr);
    ~CBuiltinDlg();

private:
    Ui::CBuiltinDlg *ui;
    QTextEdit   *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
private slots:
    void doPushBtn();
};
#endif // CBUILTINDLG_H
