#include <QCoreApplication>
#include "compressor.h"
#include "sqc_compressor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Compressor *p = new Compressor(new SQC_Compressor());
    p->compress();
    return a.exec();
}
