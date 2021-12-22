#include "gamesetting.h"
#include "mainwindow.h"
#include "ui_gamesetting.h"
#include "ui_mainwindow.h"
#include "qdebug.h"

gamesetting::gamesetting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gamesetting)
{
    ui->setupUi(this);

    this->setWindowTitle("Game setting");

    clr1="red";
    clr2="blue";
}

gamesetting::~gamesetting()
{
    delete ui;
}

void gamesetting::on_btn_letsgo_clicked()
{
    MainWindow *w=new MainWindow;

    QString str1 =ui->lineEdit_player1->text();
    QString str2 =ui->lineEdit_player2->text();
    w->color1=clr1;
    w->color2=clr2;
    w->name1=str1;
    w->name2=str2;

    w->set_player_st( str1 , str2 , clr1 , clr2 );

    w->show();
    this->close();
}

void gamesetting::on_comboBox_player1_activated(const QString &arg1)
{
    clr1=arg1;

    QString str1=ui->lineEdit_player1->text();
    QString str2=ui->lineEdit_player2->text();

    if( clr1!=clr2 && str1!="" && str2!="" && str1!=str2 )
    {
        ui->btn_letsgo->setEnabled("");

        ui->label_warning1->setText("");
        ui->label_warning2->setText("");
    }
    else
    {
        ui->btn_letsgo->setDisabled("");

        if( str1==str2 && str1!="" && str2!="" )
            ui->label_warning2->setText("Names must be diffrent!!");
        else
            ui->label_warning2->setText("");

        if( clr1==clr2 )
            ui->label_warning1->setText("Colors must be diffrent!!");
        else
            ui->label_warning1->setText("");
    }
}

void gamesetting::on_comboBox_player2_activated(const QString &arg1)
{
    clr2=arg1;

    QString str1=ui->lineEdit_player1->text();
    QString str2=ui->lineEdit_player2->text();

    if( clr1!=clr2 && str1!="" && str2!="" && str1!=str2 )
    {
        ui->btn_letsgo->setEnabled("");

        ui->label_warning1->setText("");
        ui->label_warning2->setText("");
    }
    else
    {
        ui->btn_letsgo->setDisabled("");

        if( str1==str2 && str1!="" && str2!="" )
            ui->label_warning2->setText("Names must be diffrent!!");
        else
            ui->label_warning2->setText("");

        if( clr1==clr2 )
            ui->label_warning1->setText("Colors must be diffrent!!");
        else
            ui->label_warning1->setText("");
    }
}

void gamesetting::on_lineEdit_player1_textChanged(const QString &arg1)
{
    QString a= arg1;  //solve unused warning for arg1

    QString str1=ui->lineEdit_player1->text();
    QString str2=ui->lineEdit_player2->text();

    if( clr1!=clr2 && str1!="" && str2!="" && str1!=str2 )
    {
        ui->btn_letsgo->setEnabled("");

        ui->label_warning1->setText("");
        ui->label_warning2->setText("");
    }
    else
    {
        ui->btn_letsgo->setDisabled("");

        if( str1==str2 && str1!="" && str2!="" )
            ui->label_warning2->setText("Names must be diffrent!!");
        else
            ui->label_warning2->setText("");

        if( clr1==clr2 )
            ui->label_warning1->setText("Colors must be diffrent!!");
        else
            ui->label_warning1->setText("");
    }
}

void gamesetting::on_lineEdit_player2_textChanged(const QString &arg1)
{
    QString a= arg1;  //solve unused warning for arg1

    QString str1=ui->lineEdit_player1->text();
    QString str2=ui->lineEdit_player2->text();

    if( clr1!=clr2 && str1!="" && str2!="" && str1!=str2 )
    {
        ui->btn_letsgo->setEnabled("");

        ui->label_warning1->setText("");
        ui->label_warning2->setText("");
    }
    else
    {
        ui->btn_letsgo->setDisabled("");

        if( str1==str2 && str1!="" && str2!="" )
            ui->label_warning2->setText("Names must be diffrent!!");
        else
            ui->label_warning2->setText("");

        if( clr1==clr2 )
            ui->label_warning1->setText("Colors must be diffrent!!");
        else
            ui->label_warning1->setText("");
    }
}
