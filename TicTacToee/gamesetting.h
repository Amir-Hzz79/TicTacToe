#ifndef GAMESETTING_H
#define GAMESETTING_H

#include <QMainWindow>
#include "qstring.h"

namespace Ui {
class gamesetting;
}

class gamesetting : public QMainWindow
{
        Q_OBJECT

    public:
        explicit gamesetting(QWidget *parent = nullptr);
        ~gamesetting();

        QString clr1;
        QString clr2;

    private slots:
        void on_btn_letsgo_clicked();

        void on_comboBox_player1_activated(const QString &arg1);

        void on_comboBox_player2_activated(const QString &arg1);

        void on_lineEdit_player1_textChanged(const QString &arg1);

        void on_lineEdit_player2_textChanged(const QString &arg1);

    private:
        Ui::gamesetting *ui;

};

#endif // GAMESETTING_H
