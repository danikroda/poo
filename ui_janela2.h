/********************************************************************************
** Form generated from reading UI file 'janela2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA2_H
#define UI_JANELA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_janela2
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *janela2)
    {
        if (janela2->objectName().isEmpty())
            janela2->setObjectName(QString::fromUtf8("janela2"));
        janela2->resize(400, 300);
        label = new QLabel(janela2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 110, 31, 17));
        label_2 = new QLabel(janela2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 150, 31, 17));
        lineEdit = new QLineEdit(janela2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 110, 113, 25));
        lineEdit_2 = new QLineEdit(janela2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 150, 113, 25));
        pushButton = new QPushButton(janela2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 190, 89, 25));

        retranslateUi(janela2);

        QMetaObject::connectSlotsByName(janela2);
    } // setupUi

    void retranslateUi(QDialog *janela2)
    {
        janela2->setWindowTitle(QCoreApplication::translate("janela2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("janela2", "Dia:", nullptr));
        label_2->setText(QCoreApplication::translate("janela2", "Mes:", nullptr));
        pushButton->setText(QCoreApplication::translate("janela2", "Esta\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janela2: public Ui_janela2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA2_H
