#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_SoftSimulink.h"

class Qt_SoftSimulink : public QMainWindow
{
    Q_OBJECT

public:
    Qt_SoftSimulink(QWidget *parent = Q_NULLPTR);

private:
    Ui::Qt_SoftSimulinkClass ui;
};
