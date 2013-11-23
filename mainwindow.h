#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTableView>
#include <QtXml>
#include <QtGui>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

signals:
    void refresh();

public slots:
    void slotSuccess(QDomDocument);

private slots:
    void allRadio_clicked_slot();
    void onlineRadio_clicked_slot();
    void offlineRadio_clicked_slot();
    void on_btnRefresh_clicked_slot();

private:
    QStandardItemModel *model;
    QStandardItemModel *modelOnline;
    QStandardItemModel *modelOffline;
    QTableView *table;

    int ncols;

    int countOnline();
    int countOffline();

    void setHeader(QStandardItemModel*);

    QRadioButton *allRadio;
    QRadioButton *onlineRadio;
    QRadioButton *offlineRadio;
};

#endif // MAINWINDOW_H
