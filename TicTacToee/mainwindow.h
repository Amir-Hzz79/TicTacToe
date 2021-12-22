#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

        void set_player_st( QString , QString , QString , QString );
        QString color1;
        QString color2;
        QString name1;
        QString name2;

    private slots:
        void on_btn1_clicked();

        void on_btn2_clicked();

        void on_btn3_clicked();

        void on_btn4_clicked();

        void on_btn5_clicked();

        void on_btn6_clicked();

        void on_btn7_clicked();

        void on_btn8_clicked();

        void on_btn9_clicked();

        void btn_set_color(QWidget *);

        void on_actionrestart_triggered();

    private:
        Ui::MainWindow *ui;
        void win_condition();
        int i;
        int st[10];
};
#endif // MAINWINDOW_H
