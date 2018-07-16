#pragma once

#include <exception>
#include <memory>

#include <QPoint>
#include <QVector>

#include "pixeldata.h"
#include "pixelgroup.h"
#include "qtautotracelib_global.h"

namespace QtAutoTraceV2
{

class QTAUTOTRACELIBSHARED_EXPORT SvgElement
{
public:

    /**
     * Should return a valid svg element representing the points.
     */
    QString virtual toSvgXml() = 0;
    QColor virtual getColor() = 0;

    /**
     * Factory method for creating shapes from groups of points.
     * @param tolerance - The total number of pixels divided by 200 (1/5% of the
     * total number of pixels).
     */
    static std::unique_ptr<SvgElement> CreateElement(QVector<QPoint> points, int tolerance);

private:
    bool isLine(QVector<QPoint> points, int tolerance);
};

}