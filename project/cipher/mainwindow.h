#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_generator_clicked();

    void on_caesar_clicked();

    void on_morse_clicked();

    void on_exit_clicked();

    void on_translit_clicked();

    void on_leshill_clicked();

    void on_about_program_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
