#ifndef GENERICTINPUTREADER_H
#define GENERICTINPUTREADER_H

#include <QException>
#include <QDebug>
#include <QImage>
#include <QObject>

#include "inputoptions.h"
#include "Exceptions/filereadexception.h"

namespace QtAutoTraceV2
{

/**
 * In the original AutoTrace program they have multiple input readers for
 * various types of files, however since Qt can handle all of them this class
 * will most likely be merged into the spline list array class.
 */
class GenerictInputReader : public QObject
{
    Q_OBJECT
public:
    explicit GenerictInputReader(QObject *parent = nullptr);

signals:
    void finishedReadingImage(QImage image, InputOptions inputOptions);
    void error(QException &exc);

public slots:
    void readImage(InputOptions &inputOptions);
};

}

#endif // GENERICTINPUTREADER_H
