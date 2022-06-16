/********************************************************************************
** Form generated from reading UI file 'Input.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_H
#define UI_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Input
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *base_ver;
    QHBoxLayout *hor_1;
    QLabel *title;
    QGridLayout *gridLayout;
    QPushButton *p_but_start;
    QTextBrowser *t_bro_word_1;
    QPushButton *p_but_change;
    QTextBrowser *t_bro_ans_1;
    QLineEdit *l_ed_1;
    QPushButton *p_but_check;
    QTextBrowser *t_bro_ans_2;
    QTextBrowser *t_bro_word_2;
    QTextBrowser *t_bro_word_3;
    QTextBrowser *t_bro_ans_3;
    QLineEdit *l_ed_2;
    QLineEdit *l_ed_3;
    QLabel *lab_info;

    void setupUi(QDialog *Input)
    {
        if (Input->objectName().isEmpty())
            Input->setObjectName(QStringLiteral("Input"));
        Input->resize(1000, 650);
        verticalLayoutWidget = new QWidget(Input);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 981, 631));
        base_ver = new QVBoxLayout(verticalLayoutWidget);
        base_ver->setSpacing(50);
        base_ver->setObjectName(QStringLiteral("base_ver"));
        base_ver->setSizeConstraint(QLayout::SetMaximumSize);
        base_ver->setContentsMargins(10, 10, 10, 10);
        hor_1 = new QHBoxLayout();
        hor_1->setObjectName(QStringLiteral("hor_1"));
        hor_1->setSizeConstraint(QLayout::SetMaximumSize);
        title = new QLabel(verticalLayoutWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);
        title->setMinimumSize(QSize(500, 50));
        title->setMaximumSize(QSize(500, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font.setPointSize(25);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        title->setFont(font);
        title->setAlignment(Qt::AlignCenter);

        hor_1->addWidget(title);


        base_ver->addLayout(hor_1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(70);
        p_but_start = new QPushButton(verticalLayoutWidget);
        p_but_start->setObjectName(QStringLiteral("p_but_start"));
        p_but_start->setMinimumSize(QSize(300, 50));
        p_but_start->setMaximumSize(QSize(300, 50));
        QFont font1;
        font1.setPointSize(12);
        p_but_start->setFont(font1);
        p_but_start->setStyleSheet(QStringLiteral("background-color: rgba(0, 170, 255, 170);"));

        gridLayout->addWidget(p_but_start, 0, 0, 1, 1);

        t_bro_word_1 = new QTextBrowser(verticalLayoutWidget);
        t_bro_word_1->setObjectName(QStringLiteral("t_bro_word_1"));
        t_bro_word_1->setMinimumSize(QSize(300, 40));
        t_bro_word_1->setMaximumSize(QSize(300, 40));
        QFont font2;
        font2.setPointSize(14);
        t_bro_word_1->setFont(font2);
        t_bro_word_1->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        gridLayout->addWidget(t_bro_word_1, 1, 0, 1, 1);

        p_but_change = new QPushButton(verticalLayoutWidget);
        p_but_change->setObjectName(QStringLiteral("p_but_change"));
        p_but_change->setMinimumSize(QSize(300, 50));
        p_but_change->setMaximumSize(QSize(300, 50));
        p_but_change->setFont(font1);
        p_but_change->setStyleSheet(QStringLiteral("background-color: rgba(0, 170, 255, 170);"));

        gridLayout->addWidget(p_but_change, 0, 1, 1, 1);

        t_bro_ans_1 = new QTextBrowser(verticalLayoutWidget);
        t_bro_ans_1->setObjectName(QStringLiteral("t_bro_ans_1"));
        t_bro_ans_1->setMinimumSize(QSize(300, 40));
        t_bro_ans_1->setMaximumSize(QSize(300, 40));
        t_bro_ans_1->setFont(font2);
        t_bro_ans_1->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        gridLayout->addWidget(t_bro_ans_1, 1, 2, 1, 1);

        l_ed_1 = new QLineEdit(verticalLayoutWidget);
        l_ed_1->setObjectName(QStringLiteral("l_ed_1"));
        l_ed_1->setMinimumSize(QSize(300, 40));
        l_ed_1->setMaximumSize(QSize(300, 40));
        l_ed_1->setFont(font2);
        l_ed_1->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 180);"));

        gridLayout->addWidget(l_ed_1, 1, 1, 1, 1);

        p_but_check = new QPushButton(verticalLayoutWidget);
        p_but_check->setObjectName(QStringLiteral("p_but_check"));
        p_but_check->setMinimumSize(QSize(300, 50));
        p_but_check->setMaximumSize(QSize(300, 50));
        p_but_check->setFont(font1);
        p_but_check->setStyleSheet(QStringLiteral("background-color: rgba(0, 170, 255, 170);"));

        gridLayout->addWidget(p_but_check, 0, 2, 1, 1);

        t_bro_ans_2 = new QTextBrowser(verticalLayoutWidget);
        t_bro_ans_2->setObjectName(QStringLiteral("t_bro_ans_2"));
        t_bro_ans_2->setMinimumSize(QSize(300, 40));
        t_bro_ans_2->setMaximumSize(QSize(300, 40));
        t_bro_ans_2->setFont(font2);
        t_bro_ans_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        gridLayout->addWidget(t_bro_ans_2, 2, 2, 1, 1);

        t_bro_word_2 = new QTextBrowser(verticalLayoutWidget);
        t_bro_word_2->setObjectName(QStringLiteral("t_bro_word_2"));
        t_bro_word_2->setMinimumSize(QSize(300, 40));
        t_bro_word_2->setMaximumSize(QSize(300, 40));
        t_bro_word_2->setFont(font2);
        t_bro_word_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        gridLayout->addWidget(t_bro_word_2, 2, 0, 1, 1);

        t_bro_word_3 = new QTextBrowser(verticalLayoutWidget);
        t_bro_word_3->setObjectName(QStringLiteral("t_bro_word_3"));
        t_bro_word_3->setMinimumSize(QSize(300, 40));
        t_bro_word_3->setMaximumSize(QSize(300, 40));
        t_bro_word_3->setFont(font2);
        t_bro_word_3->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        gridLayout->addWidget(t_bro_word_3, 3, 0, 1, 1);

        t_bro_ans_3 = new QTextBrowser(verticalLayoutWidget);
        t_bro_ans_3->setObjectName(QStringLiteral("t_bro_ans_3"));
        t_bro_ans_3->setMinimumSize(QSize(300, 40));
        t_bro_ans_3->setMaximumSize(QSize(300, 40));
        t_bro_ans_3->setFont(font2);
        t_bro_ans_3->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        gridLayout->addWidget(t_bro_ans_3, 3, 2, 1, 1);

        l_ed_2 = new QLineEdit(verticalLayoutWidget);
        l_ed_2->setObjectName(QStringLiteral("l_ed_2"));
        l_ed_2->setMinimumSize(QSize(300, 40));
        l_ed_2->setMaximumSize(QSize(300, 40));
        l_ed_2->setFont(font2);
        l_ed_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 180);"));

        gridLayout->addWidget(l_ed_2, 2, 1, 1, 1);

        l_ed_3 = new QLineEdit(verticalLayoutWidget);
        l_ed_3->setObjectName(QStringLiteral("l_ed_3"));
        l_ed_3->setMinimumSize(QSize(300, 40));
        l_ed_3->setMaximumSize(QSize(300, 40));
        l_ed_3->setFont(font2);
        l_ed_3->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 180);"));

        gridLayout->addWidget(l_ed_3, 3, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        base_ver->addLayout(gridLayout);

        lab_info = new QLabel(verticalLayoutWidget);
        lab_info->setObjectName(QStringLiteral("lab_info"));
        lab_info->setMinimumSize(QSize(800, 40));
        lab_info->setMaximumSize(QSize(800, 40));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font3.setPointSize(20);
        lab_info->setFont(font3);

        base_ver->addWidget(lab_info, 0, Qt::AlignHCenter|Qt::AlignBottom);

        base_ver->setStretch(0, 1);
        base_ver->setStretch(1, 5);

        retranslateUi(Input);

        QMetaObject::connectSlotsByName(Input);
    } // setupUi

    void retranslateUi(QDialog *Input)
    {
        Input->setWindowTitle(QApplication::translate("Input", "Dialog", Q_NULLPTR));
        title->setText(QApplication::translate("Input", "\346\213\274\345\206\231\345\260\217\347\273\203\344\271\240", Q_NULLPTR));
        p_but_start->setText(QApplication::translate("Input", "\345\274\200\345\247\213", Q_NULLPTR));
        p_but_change->setText(QApplication::translate("Input", "\346\215\242\344\270\200\346\211\271", Q_NULLPTR));
        p_but_check->setText(QApplication::translate("Input", "\346\243\200\346\237\245", Q_NULLPTR));
        lab_info->setText(QApplication::translate("Input", "\347\237\245\344\271\213\350\200\205\344\270\215\345\246\202\345\245\275\344\271\213\350\200\205,\345\245\275\344\271\213\350\200\205\344\270\215\345\246\202\344\271\220\344\271\213\350\200\205            \342\200\224\342\200\224\345\255\224\345\255\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Input: public Ui_Input {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_H
