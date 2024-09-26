#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initSerial();

    serialPortName = "/dev/ttyUSB0";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initSerial()
{
    QTextStream standardOutput(stdout);


    serial.setPortName(serialPortName);
    serial.open(QIODevice::ReadWrite);
    serial.setBaudRate(QSerialPort::Baud9600);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);

    if (serial.isOpen() && serial.isWritable())
    {
        QByteArray ba("1");
        serial.write(ba);
        serial.flush();
        qDebug() << "data has been send" << endl;
        serial.close();
    }

    writeData = "1";
    const qint64 bytesWritten = serial.write(writeData);



}
