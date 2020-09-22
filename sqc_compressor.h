#ifndef SQC_COMPRESSOR_H
#define SQC_COMPRESSOR_H

#include "compression.h"

class SQC_Compressor : public Compression
{
public:
    SQC_Compressor();
    void compress();
};

#endif // SQC_COMPRESSOR_H
