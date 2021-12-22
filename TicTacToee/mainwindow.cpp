#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include "qmessagebox.h"
#include "gamesetting.h"
#include "string.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("TicTacToe");

    i=0;
    for( int j=0 ; j<10 ; j++ )
        st[j]=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::set_player_st(QString n1, QString n2, QString cl1, QString cl2)
{
    ui->label_player1->setText(n1);
    ui->label_player2->setText(n2);

    if( cl1=="red" )
        ui->label_player1_st->setStyleSheet("background:red");
    else if( cl1=="blue" )
        ui->label_player1_st->setStyleSheet("background:blue");
    else if( cl1=="yellow" )
        ui->label_player1_st->setStyleSheet("background:yellow");
    else if( cl1=="green" )
        ui->label_player1_st->setStyleSheet("background:green");
    else if( cl1=="pink" )
        ui->label_player1_st->setStyleSheet("background:pink");
    else if( cl1=="purple" )
        ui->label_player1_st->setStyleSheet("background:purple");
    else if( cl1=="black" )
        ui->label_player1_st->setStyleSheet("background:black");
    else if( cl1=="white" )
        ui->label_player1_st->setStyleSheet("background:white");

    if( cl2=="red" )
        ui->label_player2_st->setStyleSheet("background:red");
    else if( cl2=="blue" )
        ui->label_player2_st->setStyleSheet("background:blue");
    else if( cl2=="yellow" )
        ui->label_player2_st->setStyleSheet("background:yellow");
    else if( cl2=="green" )
        ui->label_player2_st->setStyleSheet("background:green");
    else if( cl2=="pink" )
        ui->label_player2_st->setStyleSheet("background:pink");
    else if( cl2=="purple" )
        ui->label_player2_st->setStyleSheet("background:purple");
    else if( cl2=="black" )
        ui->label_player2_st->setStyleSheet("background:black");
    else if( cl2=="white" )
        ui->label_player2_st->setStyleSheet("background:white");
}

void MainWindow::on_btn1_clicked()
{
    if( st[1]==0 )
    {
        if( i%2==0 )    
            st[1]=1;
        else if( i%2==1 )
            st[1]=2;
        btn_set_color( ui->btn1 );
        win_condition();
    }
}

void MainWindow::on_btn2_clicked()
{
    if( st[2]==0 )
    {
        if( i%2==0 ) 
            st[2]=1;
        else if( i%2==1 )
            st[2]=2;
        btn_set_color( ui->btn2 );
        win_condition();
    }
}

void MainWindow::on_btn3_clicked()
{
    if( st[3]==0 )
    {
        if( i%2==0 )
            st[3]=1;
        else if( i%2==1 )
            st[3]=2;
        btn_set_color( ui->btn3 );
        win_condition();
    }
}

void MainWindow::on_btn4_clicked()
{
    if( st[4]==0 )
    {
        if( i%2==0 )
            st[4]=1;
        else if( i%2==1 )
            st[4]=2;
        btn_set_color( ui->btn4 );
        win_condition();
    }
}

void MainWindow::on_btn5_clicked()
{
    if( st[5]==0 )
    {
        if( i%2==0 )
            st[5]=1;
        else if( i%2==1 )
            st[5]=2;
        btn_set_color( ui->btn5 );
        win_condition();
    }
}

void MainWindow::on_btn6_clicked()
{
    if( st[6]==0 )
    {
        if( i%2==0 )
            st[6]=1;
        else if( i%2==1 )
            st[6]=2;
        btn_set_color( ui->btn6 );
        win_condition();
    }
}

void MainWindow::on_btn7_clicked()
{
    if( st[7]==0 )
    {
        if( i%2==0 )
            st[7]=1;
        else if( i%2==1 )
            st[7]=2;
        btn_set_color( ui->btn7 );
        win_condition();
    }
}

void MainWindow::on_btn8_clicked()
{
    if( st[8]==0 )
    {
        if( i%2==0 )
            st[8]=1;
        else if( i%2==1 )
            st[8]=2;
        btn_set_color( ui->btn8 );
        win_condition();
    }
}

void MainWindow::on_btn9_clicked()
{
    if( st[9]==0 )
    {
        if( i%2==0 )
            st[9]=1;
        else if( i%2==1 )
            st[9]=2;
        btn_set_color( ui->btn9 );
        win_condition();
    }
}

void MainWindow::btn_set_color(QWidget *btn)
{
    if( i%2==0 )
    {
        ui->label->setGeometry(510,43,8,8);
        i++;

        if( color1=="red" )
            btn->setStyleSheet("background:red");
        else if( color1=="blue" )
            btn->setStyleSheet("background:blue");
        else if( color1=="yellow" )
            btn->setStyleSheet("background:yellow");
        else if( color1=="green" )
            btn->setStyleSheet("background:green");
        else if( color1=="pink" )
            btn->setStyleSheet("background:pink");
        else if( color1=="purple" )
            btn->setStyleSheet("background:purple");
        else if( color1=="black" )
            btn->setStyleSheet("background:black");
        else if( color1=="white" )
            btn->setStyleSheet("background:white");
    }
    else if( i%2==1 )
    {
        ui->label->setGeometry(510,13,8,8);
        i++;
        if( color2=="blue" )
            btn->setStyleSheet("background:blue");
        else if( color2=="red" )
            btn->setStyleSheet("background:red");
        else if( color2=="yellow" )
            btn->setStyleSheet("background:yellow");
        else if( color2=="green" )
            btn->setStyleSheet("background:green");
        else if( color2=="pink" )
            btn->setStyleSheet("background:pink");
        else if( color2=="purple" )
            btn->setStyleSheet("background:purple");
        else if( color2=="black" )
            btn->setStyleSheet("background:black");
        else if( color2=="white" )
            btn->setStyleSheet("background:white");
    }
}

void MainWindow::win_condition()
{
    bool win=false;

    QMessageBox *mg= new QMessageBox;

    for( int a=1 ; a<3 ; a++ )
    {
        QString str;
        if( a==1 )
        {
            str=name1;
            int l=name1.length();
            str.insert( l , " won");
        }
        else if( a==2 )
        {
            str=name2;
            int l=name2.length();
            str.insert( l , " won");
        }

        mg->setWindowTitle("Congratulation!!");
        mg->setText(str);

        if( st[1]==a && st[2]==a && st[3]==a )
        {
            mg->show();
            win=true;
        }
        else if( st[4]==a && st[5]==a && st[6]==a )
        {
            mg->show();
            win=true;
        }
        else if( st[7]==a && st[8]==a && st[9]==a )
        {
            mg->show();
            win=true;
        }
        else if( st[1]==a && st[4]==a && st[7]==a )
        {
            mg->show();
            win=true;
        }
        else if( st[2]==a && st[5]==a && st[8]==a )
        {
            mg->show();
            win=true;
        }
        else if( st[3]==a && st[6]==a && st[9]==a )
        {
            mg->show();
            win=true;
        }
        else if( st[1]==a && st[5]==a && st[9]==a )
        {
            mg->show();
            win=true;
        }
        else if( st[3]==a && st[5]==a && st[7]==a )
        {
            mg->show();
            win=true;
        }

        if( win==true )
        {
            ui->btn1->setDisabled("");
            ui->btn2->setDisabled("");
            ui->btn3->setDisabled("");
            ui->btn4->setDisabled("");
            ui->btn5->setDisabled("");
            ui->btn6->setDisabled("");
            ui->btn7->setDisabled("");
            ui->btn8->setDisabled("");
            ui->btn9->setDisabled("");
            break;
        }
    }

    if( win==false && st[1]!=0 && st[2]!=0 && st[3]!=0 && st[4]!=0 && st[5]!=0 && st[6]!=0 && st[7]!=0 && st[8]!=0 && st[9]!=0 )
    {
        mg->setWindowTitle("  ");
        mg->setText("Draw");
        mg->show();
    }

}

void MainWindow::on_actionrestart_triggered()
{
    i=0;

    for( int j=0 ; j<10 ; j++ )
        st[j]=0;

    ui->btn1->setEnabled("");
    ui->btn2->setEnabled("");
    ui->btn3->setEnabled("");
    ui->btn4->setEnabled("");
    ui->btn5->setEnabled("");
    ui->btn6->setEnabled("");
    ui->btn7->setEnabled("");
    ui->btn8->setEnabled("");
    ui->btn9->setEnabled("");

    ui->btn1->setStyleSheet("clear");
    ui->btn2->setStyleSheet("clear");
    ui->btn3->setStyleSheet("clear");
    ui->btn4->setStyleSheet("clear");
    ui->btn5->setStyleSheet("clear");
    ui->btn6->setStyleSheet("clear");
    ui->btn7->setStyleSheet("clear");
    ui->btn8->setStyleSheet("clear");
    ui->btn9->setStyleSheet("clear");
}
