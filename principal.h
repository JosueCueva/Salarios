#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "calculosalario.h"
#include "acerca.h"
#include <QMessageBox>

#define VERSION "1.0.1"

#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_actionSalir_triggered();
    void on_cmdCalcular_clicked();
    void on_actionCalcular_triggered();
    void on_actionNuevo_triggered();
    void on_actionAcerca_de_triggered();
    void on_actionGuardar_triggered();
    void on_actionAbrir_triggered();

private:
    Ui::Principal *ui;
    void calcular();
    void borrar();
    void nuevo();
};
#endif // PRINCIPAL_H
