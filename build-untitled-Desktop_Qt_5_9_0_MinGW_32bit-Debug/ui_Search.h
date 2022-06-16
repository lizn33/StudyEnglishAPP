/********************************************************************************
** Form generated from reading UI file 'Search.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *label_2;
    QLineEdit *l_ed;
    QPushButton *p_but;
    QTextBrowser *t_bro;
    QLabel *label;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(1000, 650);
        verticalLayoutWidget = new QWidget(Search);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 981, 631));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
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

        verticalLayout->addWidget(title, 0, Qt::AlignHCenter);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(800, 20));
        label_2->setMaximumSize(QSize(800, 20));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        l_ed = new QLineEdit(verticalLayoutWidget);
        l_ed->setObjectName(QStringLiteral("l_ed"));
        l_ed->setMinimumSize(QSize(600, 100));
        l_ed->setMaximumSize(QSize(600, 100));
        QFont font2;
        font2.setPointSize(20);
        l_ed->setFont(font2);
        l_ed->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));

        verticalLayout->addWidget(l_ed);

        p_but = new QPushButton(verticalLayoutWidget);
        p_but->setObjectName(QStringLiteral("p_but"));
        p_but->setMinimumSize(QSize(100, 50));
        p_but->setMaximumSize(QSize(100, 50));
        QFont font3;
        font3.setPointSize(12);
        p_but->setFont(font3);
        p_but->setStyleSheet(QStringLiteral("background-color: rgba(0, 255, 0, 170);"));

        verticalLayout->addWidget(p_but);

        t_bro = new QTextBrowser(verticalLayoutWidget);
        t_bro->setObjectName(QStringLiteral("t_bro"));
        t_bro->setMinimumSize(QSize(600, 100));
        t_bro->setMaximumSize(QSize(600, 100));
        t_bro->setFont(font2);
        t_bro->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 100);"));
        t_bro->setMidLineWidth(0);

        verticalLayout->addWidget(t_bro);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(800, 40));
        label->setMaximumSize(QSize(800, 40));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font4.setPointSize(20);
        label->setFont(font4);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Dialog", Q_NULLPTR));
        title->setText(QApplication::translate("Search", "\345\215\225\350\257\215\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("Search", "\350\276\223\345\205\245\345\215\225\350\257\215\351\233\206\344\270\255\347\232\204\350\213\261\350\257\255\345\215\225\350\257\215\346\235\245\346\237\245\350\257\242\345\257\271\345\272\224\347\232\204\346\261\211\350\257\255\351\207\212\344\271\211\343\200\202(\346\263\250\346\204\217\345\215\225\350\257\215\345\244\247\345\260\217\345\206\231)", Q_NULLPTR));
        p_but->setText(QApplication::translate("Search", "\346\237\245\350\257\242", Q_NULLPTR));
        t_bro->setHtml(QApplication::translate("Search", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Search", "A lazy youth, a lousy age     \345\260\221\346\227\266\346\207\222\346\203\260\350\200\201\346\235\245\350\213\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
