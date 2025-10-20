#include "cbuiltindlg.h"
#include "ui_cbuiltindlg.h"
#include<QGridLayout>
CBuiltinDlg::CBuiltinDlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CBuiltinDlg)
{
    QGridLayout *gridLayout=new QGridLayout;
    displayTextEdit =new QTextEdit(QStringLiteral("Qt標準通用對話盒"));
    colorPushBtn    =new QPushButton(QStringLiteral("顏色對話盒"));
    errorPushBtn    =new QPushButton(QStringLiteral("錯誤對話盒"));
    filePushBtn     =new QPushButton(QStringLiteral("檔案對話盒"));
    fontPushBtn     =new QPushButton(QStringLiteral("字體對話盒"));

    ui->setupUi(this);
}

CBuiltinDlg::~CBuiltinDlg()
{
    delete ui;
}
