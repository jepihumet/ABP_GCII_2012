/********************************************************************************
** Form generated from reading UI file 'uigc2.ui'
**
** Created: Thu 15. Mar 20:26:04 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIGC2_H
#define UI_UIGC2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_UIGC2
{
public:
    QAction *actionBlau;
    QAction *actionNegre;
    QAction *actionBlanc;
    QAction *actionVermell;
    QAction *actionOrtogonal;
    QAction *actionPerspectiva;
    QAction *actionVista_Cl_ssica;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    GLWidget *widget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *UIGC2)
    {
        if (UIGC2->objectName().isEmpty())
            UIGC2->setObjectName(QString::fromUtf8("UIGC2"));
        UIGC2->resize(730, 374);
        UIGC2->setMinimumSize(QSize(0, 200));
        actionBlau = new QAction(UIGC2);
        actionBlau->setObjectName(QString::fromUtf8("actionBlau"));
        actionNegre = new QAction(UIGC2);
        actionNegre->setObjectName(QString::fromUtf8("actionNegre"));
        actionBlanc = new QAction(UIGC2);
        actionBlanc->setObjectName(QString::fromUtf8("actionBlanc"));
        actionVermell = new QAction(UIGC2);
        actionVermell->setObjectName(QString::fromUtf8("actionVermell"));
        actionOrtogonal = new QAction(UIGC2);
        actionOrtogonal->setObjectName(QString::fromUtf8("actionOrtogonal"));
        actionPerspectiva = new QAction(UIGC2);
        actionPerspectiva->setObjectName(QString::fromUtf8("actionPerspectiva"));
        actionVista_Cl_ssica = new QAction(UIGC2);
        actionVista_Cl_ssica->setObjectName(QString::fromUtf8("actionVista_Cl_ssica"));
        centralWidget = new QWidget(UIGC2);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(200, 0));
        frame->setMaximumSize(QSize(200, 16777215));
        frame->setStyleSheet(QString::fromUtf8("background-color:#7F43DE;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        widget = new GLWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(widget);

        UIGC2->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(UIGC2);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        UIGC2->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UIGC2);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        UIGC2->setStatusBar(statusBar);
        menuBar = new QMenuBar(UIGC2);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 730, 21));
        UIGC2->setMenuBar(menuBar);

        retranslateUi(UIGC2);

        QMetaObject::connectSlotsByName(UIGC2);
    } // setupUi

    void retranslateUi(QMainWindow *UIGC2)
    {
        UIGC2->setWindowTitle(QApplication::translate("UIGC2", "UIGC2", 0, QApplication::UnicodeUTF8));
        actionBlau->setText(QApplication::translate("UIGC2", "Blau", 0, QApplication::UnicodeUTF8));
        actionNegre->setText(QApplication::translate("UIGC2", "Negre", 0, QApplication::UnicodeUTF8));
        actionBlanc->setText(QApplication::translate("UIGC2", "Blanc", 0, QApplication::UnicodeUTF8));
        actionVermell->setText(QApplication::translate("UIGC2", "Vermell", 0, QApplication::UnicodeUTF8));
        actionOrtogonal->setText(QApplication::translate("UIGC2", "Ortogonal", 0, QApplication::UnicodeUTF8));
        actionPerspectiva->setText(QApplication::translate("UIGC2", "Perspectiva", 0, QApplication::UnicodeUTF8));
        actionVista_Cl_ssica->setText(QApplication::translate("UIGC2", "Vista Cl\303\240ssica", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UIGC2: public Ui_UIGC2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIGC2_H
