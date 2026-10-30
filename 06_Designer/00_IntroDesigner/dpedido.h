#ifndef _DPEDIDO_H
#define _DPEDIDO_H

#include "ui_dpedido.h"

// Hereda de dos clases
class DPedido : public QDialog, public Ui::DPedido  {

public:
    DPedido (QWidget *parent = NULL);

};



#endif
