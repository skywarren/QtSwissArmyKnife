﻿/*
 * Copyright (C) 2018-2019 wuuhii. All rights reserved.
 *
 * The file is encoding with utf-8 (with BOM). It is a part of QtSwissArmyKnife
 * project. The project is a open source project, you can get the source from:
 *     https://github.com/qter188/QtSwissArmyKnife
 *     https://gitee.com/qter188/QtSwissArmyKnife
 *
 * For more information about the project, please join our QQ group(952218522).
 * In addition, the email address of the project author is qter188@outlook.com.
 */
#ifndef SAKTIMINGSENDINGSETTINGSWIDGET_HH
#define SAKTIMINGSENDINGSETTINGSWIDGET_HH

#include <QRegExp>
#include <QWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <QListWidget>
#include <QPushButton>
#include <QRegExpValidator>

namespace Ui {
    class SAKTimingSendingSettingsWidget;
}

class SAKDebugPage;
class SAKTimingSendingSettingsWidget:public QWidget
{
    Q_OBJECT
public:
    SAKTimingSendingSettingsWidget(SAKDebugPage *debugPage, QWidget *parent = Q_NULLPTR);
    ~SAKTimingSendingSettingsWidget();

private:
    Ui::SAKTimingSendingSettingsWidget *ui;

    QListWidget *itemListWidget;
    QPushButton *savePushButton;
    QPushButton *importPushButton;
    QPushButton *deletePushButton;
    QPushButton *addPushButton;
private slots:
    void on_savePushButton_clicked();
    void on_importPushButton_clicked();
    void on_deletePushButton_clicked();
    void on_addPushButton_clicked();

private:
    SAKDebugPage *debugPage;

signals:
    void write(QByteArray data);
};

#endif
