#ifndef BIRTHDAYASTROWIDGET_H
#define BIRTHDAYASTROWIDGET_H

#include <QWidget>
#include <QStringList>
#include <QDate>
#include "ui_BirthdayAstroWidget.h"

class BirthdayAstroWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BirthdayAstroWidget(QWidget *parent = nullptr);
    ~BirthdayAstroWidget();

private slots:
    void onQueryClicked();

private:
    void initAstroData();
    QString getAstro(int month, int day);
    int calculateAge(const QDate &birthDate);

    Ui::BirthdayAstroWidget ui;
    QStringList m_astroNames;
    QList<int> m_astroChangeDays;
};

#endif // BIRTHDAYASTROWIDGET_H
