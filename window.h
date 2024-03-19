#ifndef WINDOW_H
#define WINDOW_H

#include "area.h"
#include <QPushButton>

class Window : public QWidget
{
protected:
    Area * area;         // область отображения рисунка
    QPushButton * btn;
public:
    Window();
};
#endif // WINDOW_H
