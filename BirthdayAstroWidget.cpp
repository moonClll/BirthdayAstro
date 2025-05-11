#include "BirthdayAstroWidget.h"
#include <QDate>

BirthdayAstroWidget::BirthdayAstroWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    initAstroData();

    connect(ui.queryButton, &QPushButton::clicked, this, &BirthdayAstroWidget::onQueryClicked);
}

BirthdayAstroWidget::~BirthdayAstroWidget() {}

void BirthdayAstroWidget::initAstroData()
{
    m_astroNames << "摩羯座" << "水瓶座" << "双鱼座" << "白羊座" << "金牛座" << "双子座"
                 << "巨蟹座" << "狮子座" << "处女座" << "天秤座" << "天蝎座" << "射手座" << "摩羯座";
    m_astroChangeDays << 20 << 19 << 21 << 21 << 21 << 22 << 23 << 23 << 23 << 23 << 22 << 22;
}

QString BirthdayAstroWidget::getAstro(int month, int day)
{
    int index = month;
    if (day < m_astroChangeDays.value(month - 1)) {
        index = month - 1;
    }
    return m_astroNames.value(index);
}

int BirthdayAstroWidget::calculateAge(const QDate &birthDate)
{
    QDate today = QDate::currentDate();
    int age = today.year() - birthDate.year();
    if (today < birthDate.addYears(age)) {
        age--;
    }
    return age;
}

void BirthdayAstroWidget::onQueryClicked()
{
    int year = ui.yearEdit->text().toInt();
    int month = ui.monthEdit->text().toInt();
    int day = ui.dayEdit->text().toInt();
    QDate birthDate(year, month, day);

    if (!birthDate.isValid()) {
        ui.resultLabel->setText("无效的日期");
        return;
    }

    QString astro = getAstro(month, day);
    int age = calculateAge(birthDate);

    ui.resultLabel->setText(QString("星座：%1\n年龄：%2").arg(astro).arg(age));
}
