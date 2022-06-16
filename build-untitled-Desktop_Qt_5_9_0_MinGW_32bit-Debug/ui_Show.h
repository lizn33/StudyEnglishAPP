/********************************************************************************
** Form generated from reading UI file 'Show.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_H
#define UI_SHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Show
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *base_ver;
    QLabel *lab_title;
    QComboBox *c_box_cho;
    QLabel *label;
    QTextBrowser *t_bro_con;

    void setupUi(QDialog *Show)
    {
        if (Show->objectName().isEmpty())
            Show->setObjectName(QStringLiteral("Show"));
        Show->resize(1000, 650);
        verticalLayoutWidget = new QWidget(Show);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 981, 631));
        base_ver = new QVBoxLayout(verticalLayoutWidget);
        base_ver->setSpacing(10);
        base_ver->setObjectName(QStringLiteral("base_ver"));
        base_ver->setContentsMargins(10, 10, 10, 10);
        lab_title = new QLabel(verticalLayoutWidget);
        lab_title->setObjectName(QStringLiteral("lab_title"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font.setPointSize(25);
        font.setBold(false);
        font.setWeight(50);
        lab_title->setFont(font);

        base_ver->addWidget(lab_title, 0, Qt::AlignHCenter);

        c_box_cho = new QComboBox(verticalLayoutWidget);
        c_box_cho->setObjectName(QStringLiteral("c_box_cho"));
        c_box_cho->setMinimumSize(QSize(200, 30));
        c_box_cho->setMaximumSize(QSize(200, 30));
        QFont font1;
        font1.setPointSize(10);
        c_box_cho->setFont(font1);
        c_box_cho->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 170);"));

        base_ver->addWidget(c_box_cho, 0, Qt::AlignHCenter);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(800, 40));
        label->setMaximumSize(QSize(800, 40));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);

        base_ver->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        t_bro_con = new QTextBrowser(verticalLayoutWidget);
        t_bro_con->setObjectName(QStringLiteral("t_bro_con"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(t_bro_con->sizePolicy().hasHeightForWidth());
        t_bro_con->setSizePolicy(sizePolicy);
        t_bro_con->setMinimumSize(QSize(700, 450));
        t_bro_con->setMaximumSize(QSize(700, 450));
        QFont font3;
        font3.setPointSize(12);
        t_bro_con->setFont(font3);
        t_bro_con->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 170);"));

        base_ver->addWidget(t_bro_con, 0, Qt::AlignHCenter);

        base_ver->setStretch(0, 1);
        base_ver->setStretch(1, 1);
        base_ver->setStretch(3, 5);

        retranslateUi(Show);

        QMetaObject::connectSlotsByName(Show);
    } // setupUi

    void retranslateUi(QDialog *Show)
    {
        Show->setWindowTitle(QApplication::translate("Show", "Dialog", Q_NULLPTR));
        lab_title->setText(QApplication::translate("Show", "\351\200\211\346\213\251\344\275\277\347\224\250\347\232\204\345\215\225\350\257\215\351\233\206", Q_NULLPTR));
        c_box_cho->clear();
        c_box_cho->insertItems(0, QStringList()
         << QApplication::translate("Show", "\345\237\272\347\241\200\345\215\225\350\257\215 ", Q_NULLPTR)
         << QApplication::translate("Show", "\345\260\217\345\255\246\345\237\272\346\234\254\345\215\225\350\257\215", Q_NULLPTR)
         << QApplication::translate("Show", "\345\210\235\344\270\255\345\237\272\346\234\254\345\215\225\350\257\215", Q_NULLPTR)
        );
        label->setText(QApplication::translate("Show", "\345\215\225\350\257\215\345\206\205\345\256\271(\346\237\245\350\257\242\343\200\201\351\200\211\346\213\251\343\200\201\345\241\253\347\251\272\347\255\211\345\212\237\350\203\275\345\260\206\345\237\272\344\272\216\350\257\245\345\215\225\350\257\215\351\233\206\345\206\205\347\232\204\345\215\225\350\257\215)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Show: public Ui_Show {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_H
