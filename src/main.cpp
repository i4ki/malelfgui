#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "gui/MainWindow.h"
#include "controller/MainWindowController.h"

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(qhexedit);
    QApplication app(argc, argv);
    app.setApplicationName("MalelfGUI");
    app.setOrganizationName("Malelficus");

    // Identify locale and load translation if available
    QString locale = QLocale::system().name();
    QTranslator translator;
    translator.load(QString("malelfgui_") + locale);
    app.installTranslator(&translator);

    MainWindow window;
    MainWindowController* controller = new MainWindowController();
    window.controller = controller;
    window.show();
    
    return app.exec();
}
