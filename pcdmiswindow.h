#ifndef PCDMISWINDOW_H
#define PCDMISWINDOW_H

#include <QWidget>

namespace Ui {
class pcdmiswindow;
}

class pcdmiswindow : public QWidget
{
    Q_OBJECT

public:
    explicit pcdmiswindow(QWidget *parent = 0);
    ~pcdmiswindow();

private:
    Ui::pcdmiswindow *ui;
};

#endif // PCDMISWINDOW_H
