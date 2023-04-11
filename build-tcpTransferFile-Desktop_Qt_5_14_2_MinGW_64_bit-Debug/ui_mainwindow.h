/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *act_startListen;
    QAction *act_stopListen;
    QAction *act_clearText;
    QAction *act_connect;
    QAction *act_disconnect;
    QAction *act_server;
    QAction *act_client;
    QAction *act_test;
    QAction *act_fileTransmit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *chooseDirBtn;
    QLineEdit *dirShowLineEdit;
    QLabel *label_4;
    QSpinBox *spinBox_bufferSize;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *clientcomBox;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *serverAddressLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *localIpComBox;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *testBtn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *clearTextBtn;
    QPushButton *fileTransmitBtn;
    QPushButton *stopSendBtn;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 392);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icons/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        act_startListen = new QAction(MainWindow);
        act_startListen->setObjectName(QString::fromUtf8("act_startListen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icons/\345\274\200\345\247\213\347\233\221\345\220\254.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_startListen->setIcon(icon1);
        act_stopListen = new QAction(MainWindow);
        act_stopListen->setObjectName(QString::fromUtf8("act_stopListen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icons/\345\201\234\346\255\242\347\233\221\345\220\254.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_stopListen->setIcon(icon2);
        act_clearText = new QAction(MainWindow);
        act_clearText->setObjectName(QString::fromUtf8("act_clearText"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/icons/\346\270\205\351\231\244\346\226\207\346\234\254.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_clearText->setIcon(icon3);
        act_connect = new QAction(MainWindow);
        act_connect->setObjectName(QString::fromUtf8("act_connect"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/icons/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_connect->setIcon(icon4);
        act_disconnect = new QAction(MainWindow);
        act_disconnect->setObjectName(QString::fromUtf8("act_disconnect"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/icons/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_disconnect->setIcon(icon5);
        act_server = new QAction(MainWindow);
        act_server->setObjectName(QString::fromUtf8("act_server"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/icons/server.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_server->setIcon(icon6);
        act_client = new QAction(MainWindow);
        act_client->setObjectName(QString::fromUtf8("act_client"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/icons/client.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_client->setIcon(icon7);
        act_test = new QAction(MainWindow);
        act_test->setObjectName(QString::fromUtf8("act_test"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/icons/test.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_test->setIcon(icon8);
        act_fileTransmit = new QAction(MainWindow);
        act_fileTransmit->setObjectName(QString::fromUtf8("act_fileTransmit"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/icons/fileSend.png"), QSize(), QIcon::Normal, QIcon::Off);
        act_fileTransmit->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        chooseDirBtn = new QPushButton(centralwidget);
        chooseDirBtn->setObjectName(QString::fromUtf8("chooseDirBtn"));

        horizontalLayout->addWidget(chooseDirBtn);

        dirShowLineEdit = new QLineEdit(centralwidget);
        dirShowLineEdit->setObjectName(QString::fromUtf8("dirShowLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dirShowLineEdit->sizePolicy().hasHeightForWidth());
        dirShowLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dirShowLineEdit);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        spinBox_bufferSize = new QSpinBox(centralwidget);
        spinBox_bufferSize->setObjectName(QString::fromUtf8("spinBox_bufferSize"));
        spinBox_bufferSize->setMinimum(1);
        spinBox_bufferSize->setMaximum(65536);
        spinBox_bufferSize->setValue(12000);

        horizontalLayout->addWidget(spinBox_bufferSize);


        verticalLayout_3->addLayout(horizontalLayout);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(16777215, 42));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 40));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        clientcomBox = new QComboBox(page);
        clientcomBox->setObjectName(QString::fromUtf8("clientcomBox"));
        sizePolicy.setHeightForWidth(clientcomBox->sizePolicy().hasHeightForWidth());
        clientcomBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(clientcomBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMouseTracking(true);

        horizontalLayout_2->addWidget(label);

        serverAddressLineEdit = new QLineEdit(page_2);
        serverAddressLineEdit->setObjectName(QString::fromUtf8("serverAddressLineEdit"));

        horizontalLayout_2->addWidget(serverAddressLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page_2);

        horizontalLayout_6->addWidget(stackedWidget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        localIpComBox = new QComboBox(frame);
        localIpComBox->setObjectName(QString::fromUtf8("localIpComBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(localIpComBox->sizePolicy().hasHeightForWidth());
        localIpComBox->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(localIpComBox);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(frame);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_3->addWidget(textEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        testBtn = new QPushButton(centralwidget);
        testBtn->setObjectName(QString::fromUtf8("testBtn"));

        horizontalLayout_4->addWidget(testBtn);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        clearTextBtn = new QPushButton(centralwidget);
        clearTextBtn->setObjectName(QString::fromUtf8("clearTextBtn"));

        horizontalLayout_4->addWidget(clearTextBtn);


        verticalLayout_3->addLayout(horizontalLayout_4);

        fileTransmitBtn = new QPushButton(centralwidget);
        fileTransmitBtn->setObjectName(QString::fromUtf8("fileTransmitBtn"));

        verticalLayout_3->addWidget(fileTransmitBtn);

        stopSendBtn = new QPushButton(centralwidget);
        stopSendBtn->setObjectName(QString::fromUtf8("stopSendBtn"));

        verticalLayout_3->addWidget(stopSendBtn);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(act_startListen);
        toolBar->addAction(act_stopListen);
        toolBar->addAction(act_connect);
        toolBar->addAction(act_disconnect);
        toolBar->addAction(act_server);
        toolBar->addAction(act_client);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        act_startListen->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        act_stopListen->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\345\220\254", nullptr));
        act_clearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\220\206\346\226\207\346\234\254", nullptr));
        act_connect->setText(QCoreApplication::translate("MainWindow", "\345\273\272\347\253\213\350\277\236\346\216\245", nullptr));
        act_disconnect->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        act_server->setText(QCoreApplication::translate("MainWindow", "\350\275\254\345\210\260\346\234\215\345\212\241\347\253\257", nullptr));
        act_client->setText(QCoreApplication::translate("MainWindow", "\350\275\254\345\210\260\345\256\242\346\210\267\347\253\257", nullptr));
        act_test->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        act_fileTransmit->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\344\274\240\350\276\223", nullptr));
        chooseDirBtn->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\347\233\256\345\275\225", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\274\223\345\206\262\345\214\272:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\347\253\257:", nullptr));
        serverAddressLineEdit->setText(QCoreApplication::translate("MainWindow", "192.168.34.40", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260IP:", nullptr));
        testBtn->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\350\277\236\346\216\245", nullptr));
        clearTextBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\220\206\344\277\241\346\201\257", nullptr));
        fileTransmitBtn->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\344\274\240\350\276\223", nullptr));
        stopSendBtn->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\274\240\350\276\223", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
