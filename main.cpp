#include <QCoreApplication>
#include <QSslCipher>
#include <QSqlDatabase>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSslCipher cipher;
    std::cout << "Network module is on" << std::endl;

    QSqlDatabase db;
    std::cout << "BD module is on" << std::endl;

    std::cout << "Press Enter to exit" << std::endl;
    std::cin.get();

    return 0;
}
