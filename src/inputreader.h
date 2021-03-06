#ifndef INPUTREADER_H
#define INPUTREADER_H

#include "bitmap.h"
#include "InputReaders/bitmapreader.h"
#include "inputoptions.h"

#include <map>
#include <memory>
#include <string>

namespace AutoTrace {

// Forward declare Bitmap
class Bitmap;

class InputReader
{
public:
    virtual ~InputReader() { }
    virtual Bitmap *func (std::string filename,
                 AutoTrace::InputOptions *opts,
                 void* data) = 0;
    virtual std::string getFileExtension() = 0;
    void* data;
};

}

#endif // INPUTREADER_H
