/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_14;
    QLabel *label_2;
    QPushButton *pushButton_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setMinimumSize(QSize(800, 480));
        MainWindow->setMaximumSize(QSize(800, 480));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(128, 19, 541, 101));
        QFont font;
        font.setFamily(QStringLiteral("Helvetica Neue"));
        font.setPointSize(54);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 140, 561, 321));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::Box);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 160, 61, 101));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/018-control.png")));
        label->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(310, 160, 201, 101));
        QFont font2;
        font2.setFamily(QStringLiteral("Helvetica Neue"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 310, 120, 120));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/icons/024-water.png")));
        label_9->setScaledContents(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 280, 461, 101));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(360, 360, 461, 101));
        QFont font3;
        font3.setFamily(QStringLiteral("Helvetica Neue"));
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setWeight(75);
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(630, 280, 101, 101));
        label_12->setFont(font2);
        label_12->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(660, 360, 101, 101));
        label_13->setFont(font2);
        label_13->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 100, 100));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/005-home-automation.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(100, 100));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 140, 150, 150));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/043-smart.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(145, 145));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 310, 150, 150));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/039-smoke detector.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(145, 145));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(670, 20, 100, 100));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/014-smart.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(100, 100));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(520, 160, 201, 101));
        label_14->setFont(font2);
        label_14->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(480, 250, 67, 21));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(620, 200, 101, 31));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tela Principal", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Irri - RU FGA", Q_NULLPTR));
        label_6->setText(QString());
        label->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "Internet: ", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Atuadores:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "M\303\263d Medidores: ", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "OFF", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "1/1", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "ONLINE", Q_NULLPTR));
        label_2->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
