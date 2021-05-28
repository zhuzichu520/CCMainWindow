// Copyright 2017 Alejandro Sirgo Rica
//
// This file is part of Flameshot.
//
//     Flameshot is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.
//
//     Flameshot is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
//
//     You should have received a copy of the GNU General Public License
//     along with Flameshot.  If not, see <http://www.gnu.org/licenses/>.

#include "circletool.h"
#include <QPainter>

CircleTool::CircleTool(QObject *parent) : CaptureTool(parent) {

}

int CircleTool::id() const {
    return 0;
}

bool CircleTool::isSelectable() const {
    return true;
}

QString CircleTool::iconName() const {
    return ":/CCMainWindow/Resources/MainWindow/screenImg/Circle.png";
}

QString CircleTool::name() const {
    return QStringLiteral("tuo yuan tool");
}

QString CircleTool::description() const {
    return QStringLiteral("tuo yuan tool");
}

CaptureTool::ToolWorkType CircleTool::toolType() const {
    return TYPE_LINE_DRAWER;
}

void CircleTool::processImage(
        QPainter &painter,
        const QVector<QPoint> &points,
        const QColor &color,
        const int thickness)
{
    painter.setPen(QPen(color, 2 + thickness));
    painter.drawEllipse(QRect(points[0], points[1]));
}

void CircleTool::onPressed() {
}
