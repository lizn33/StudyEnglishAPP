/********************************************************************************
** Form generated from reading UI file 'Choice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICE_H
#define UI_CHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choice
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *base_ver;
    QHBoxLayout *hor_1;
    QLabel *title;
    QGridLayout *content;
    QTextBrowser *t_bro_c;
    QPushButton *p_but_2;
    QTextBrowser *t_bro_b;
    QPushButton *p_but_4;
    QPushButton *p_but_3;
    QTextBrowser *t_bro_d;
    QTextBrowser *t_bro_a;
    QPushButton *p_but_1;
    QPushButton *p_but_star;
    QTextBrowser *t_bro_word;
    QPushButton *p_but_next;
    QTextBrowser *t_bro_last;
    QTextBrowser *t_bro_back;

    void setupUi(QDialog *Choice)
    {
        if (Choice->objectName().isEmpty())
            Choice->setObjectName(QStringLiteral("Choice"));
        Choice->resize(1000, 650);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Choice->sizePolicy().hasHeightForWidth());
        Choice->setSizePolicy(sizePolicy);
        Choice->setFocusPolicy(Qt::NoFocus);
        verticalLayoutWidget = new QWidget(Choice);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 1070, 631));
        base_ver = new QVBoxLayout(verticalLayoutWidget);
        base_ver->setSpacing(10);
        base_ver->setObjectName(QStringLiteral("base_ver"));
        base_ver->setSizeConstraint(QLayout::SetMaximumSize);
        base_ver->setContentsMargins(0, 10, 10, 10);
        hor_1 = new QHBoxLayout();
        hor_1->setObjectName(QStringLiteral("hor_1"));
        hor_1->setSizeConstraint(QLayout::SetMaximumSize);
        title = new QLabel(verticalLayoutWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy1);
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

        content = new QGridLayout();
        content->setObjectName(QStringLiteral("content"));
        content->setSizeConstraint(QLayout::SetMaximumSize);
        content->setHorizontalSpacing(0);
        content->setVerticalSpacing(100);
        content->setContentsMargins(0, 10, 10, 10);
        t_bro_c = new QTextBrowser(verticalLayoutWidget);
        t_bro_c->setObjectName(QStringLiteral("t_bro_c"));
        t_bro_c->setMinimumSize(QSize(300, 40));
        t_bro_c->setMaximumSize(QSize(200, 40));
        QFont font1;
        font1.setPointSize(14);
        t_bro_c->setFont(font1);
        t_bro_c->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        content->addWidget(t_bro_c, 2, 1, 1, 1);

        p_but_2 = new QPushButton(verticalLayoutWidget);
        p_but_2->setObjectName(QStringLiteral("p_but_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(p_but_2->sizePolicy().hasHeightForWidth());
        p_but_2->setSizePolicy(sizePolicy2);
        p_but_2->setMinimumSize(QSize(40, 40));
        p_but_2->setMaximumSize(QSize(40, 40));
        QFont font2;
        font2.setPointSize(15);
        p_but_2->setFont(font2);
        p_but_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        p_but_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 170, 0, 170);"));

        content->addWidget(p_but_2, 1, 2, 1, 1, Qt::AlignRight);

        t_bro_b = new QTextBrowser(verticalLayoutWidget);
        t_bro_b->setObjectName(QStringLiteral("t_bro_b"));
        t_bro_b->setMinimumSize(QSize(300, 40));
        t_bro_b->setMaximumSize(QSize(300, 40));
        t_bro_b->setFont(font1);
        t_bro_b->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        content->addWidget(t_bro_b, 1, 3, 1, 1);

        p_but_4 = new QPushButton(verticalLayoutWidget);
        p_but_4->setObjectName(QStringLiteral("p_but_4"));
        p_but_4->setMinimumSize(QSize(40, 40));
        p_but_4->setMaximumSize(QSize(40, 40));
        p_but_4->setFont(font2);
        p_but_4->setStyleSheet(QStringLiteral("background-color: rgba(255, 170, 0, 170);"));

        content->addWidget(p_but_4, 2, 2, 1, 1, Qt::AlignRight);

        p_but_3 = new QPushButton(verticalLayoutWidget);
        p_but_3->setObjectName(QStringLiteral("p_but_3"));
        p_but_3->setMinimumSize(QSize(40, 40));
        p_but_3->setMaximumSize(QSize(40, 40));
        p_but_3->setFont(font2);
        p_but_3->setStyleSheet(QStringLiteral("background-color: rgba(255, 170, 0, 170);"));

        content->addWidget(p_but_3, 2, 0, 1, 1, Qt::AlignRight);

        t_bro_d = new QTextBrowser(verticalLayoutWidget);
        t_bro_d->setObjectName(QStringLiteral("t_bro_d"));
        t_bro_d->setMinimumSize(QSize(300, 40));
        t_bro_d->setMaximumSize(QSize(300, 40));
        t_bro_d->setFont(font1);
        t_bro_d->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        content->addWidget(t_bro_d, 2, 3, 1, 1);

        t_bro_a = new QTextBrowser(verticalLayoutWidget);
        t_bro_a->setObjectName(QStringLiteral("t_bro_a"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(t_bro_a->sizePolicy().hasHeightForWidth());
        t_bro_a->setSizePolicy(sizePolicy3);
        t_bro_a->setMinimumSize(QSize(300, 40));
        t_bro_a->setMaximumSize(QSize(200, 40));
        t_bro_a->setFont(font1);
        t_bro_a->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        content->addWidget(t_bro_a, 1, 1, 1, 1, Qt::AlignVCenter);

        p_but_1 = new QPushButton(verticalLayoutWidget);
        p_but_1->setObjectName(QStringLiteral("p_but_1"));
        sizePolicy2.setHeightForWidth(p_but_1->sizePolicy().hasHeightForWidth());
        p_but_1->setSizePolicy(sizePolicy2);
        p_but_1->setMinimumSize(QSize(40, 40));
        p_but_1->setMaximumSize(QSize(40, 40));
        p_but_1->setFont(font2);
        p_but_1->setContextMenuPolicy(Qt::DefaultContextMenu);
        p_but_1->setLayoutDirection(Qt::LeftToRight);
        p_but_1->setStyleSheet(QStringLiteral("background-color: rgba(255, 170, 0, 170);"));

        content->addWidget(p_but_1, 1, 0, 1, 1, Qt::AlignRight|Qt::AlignVCenter);

        p_but_star = new QPushButton(verticalLayoutWidget);
        p_but_star->setObjectName(QStringLiteral("p_but_star"));
        p_but_star->setMinimumSize(QSize(100, 50));
        p_but_star->setMaximumSize(QSize(100, 50));
        QFont font3;
        font3.setPointSize(12);
        p_but_star->setFont(font3);
        p_but_star->setStyleSheet(QStringLiteral("background-color: rgba(255, 170, 0, 170);"));

        content->addWidget(p_but_star, 0, 0, 1, 1);

        t_bro_word = new QTextBrowser(verticalLayoutWidget);
        t_bro_word->setObjectName(QStringLiteral("t_bro_word"));
        t_bro_word->setMinimumSize(QSize(300, 50));
        t_bro_word->setMaximumSize(QSize(300, 50));
        t_bro_word->setFont(font1);
        t_bro_word->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        content->addWidget(t_bro_word, 0, 1, 1, 1, Qt::AlignVCenter);

        p_but_next = new QPushButton(verticalLayoutWidget);
        p_but_next->setObjectName(QStringLiteral("p_but_next"));
        sizePolicy3.setHeightForWidth(p_but_next->sizePolicy().hasHeightForWidth());
        p_but_next->setSizePolicy(sizePolicy3);
        p_but_next->setMinimumSize(QSize(100, 50));
        p_but_next->setMaximumSize(QSize(100, 50));
        p_but_next->setFont(font3);
        p_but_next->setStyleSheet(QStringLiteral("background-color: rgba(255, 170, 0, 170);"));

        content->addWidget(p_but_next, 0, 2, 1, 1);

        t_bro_last = new QTextBrowser(verticalLayoutWidget);
        t_bro_last->setObjectName(QStringLiteral("t_bro_last"));
        t_bro_last->setMinimumSize(QSize(300, 80));
        t_bro_last->setMaximumSize(QSize(300, 80));
        t_bro_last->setFont(font3);
        t_bro_last->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 125);"));

        content->addWidget(t_bro_last, 0, 3, 1, 1);

        content->setRowStretch(0, 1);
        content->setColumnStretch(0, 1);

        base_ver->addLayout(content);

        t_bro_back = new QTextBrowser(verticalLayoutWidget);
        t_bro_back->setObjectName(QStringLiteral("t_bro_back"));
        t_bro_back->setMinimumSize(QSize(900, 65));
        t_bro_back->setMaximumSize(QSize(900, 65));
        t_bro_back->setFont(font1);
        t_bro_back->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 150);"));

        base_ver->addWidget(t_bro_back, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        base_ver->setStretch(0, 1);
        base_ver->setStretch(1, 5);
        base_ver->setStretch(2, 1);

        retranslateUi(Choice);

        QMetaObject::connectSlotsByName(Choice);
    } // setupUi

    void retranslateUi(QDialog *Choice)
    {
        Choice->setWindowTitle(QApplication::translate("Choice", "Dialog", Q_NULLPTR));
        title->setText(QApplication::translate("Choice", "\351\200\211\346\213\251\345\260\217\346\265\213\350\257\225", Q_NULLPTR));
        p_but_2->setText(QApplication::translate("Choice", "B", Q_NULLPTR));
        p_but_4->setText(QApplication::translate("Choice", "D", Q_NULLPTR));
        p_but_3->setText(QApplication::translate("Choice", "C", Q_NULLPTR));
        p_but_1->setText(QApplication::translate("Choice", "A", Q_NULLPTR));
        p_but_star->setText(QApplication::translate("Choice", "\345\274\200\345\247\213\346\265\213\350\257\225", Q_NULLPTR));
        p_but_next->setText(QApplication::translate("Choice", "\350\267\263\350\277\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Choice: public Ui_Choice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICE_H
