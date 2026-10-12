#include <QCoreApplication>
#include <QSqlDatabase>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    qDebug() << "Qt SQL drivers:"
             << QSqlDatabase::drivers();

    qDebug() << "Plugin paths:"
             << QCoreApplication::libraryPaths();

    if (!QSqlDatabase::drivers().contains("QMYSQL")) {
        qDebug() << "ERROR: QMYSQL driver is missing.";
        return 1;
    }

    qDebug() << "QMYSQL driver is available.";
    return 0;
}
