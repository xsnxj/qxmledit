/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2013 by Luca Bellonda and individual contributors       *
 *    as indicated in the AUTHORS file                                    *
 *  lbellonda _at_ gmail.com                                              *
 *                                                                        *
 * This library is free software; you can redistribute it and/or          *
 * modify it under the terms of the GNU Library General Public            *
 * License as published by the Free Software Foundation; either           *
 * version 2 of the License, or (at your option) any later version.       *
 *                                                                        *
 * This library is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 * Library General Public License for more details.                       *
 *                                                                        *
 * You should have received a copy of the GNU Library General Public      *
 * License along with this library; if not, write to the                  *
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA  02110-1301  USA                                            *
 **************************************************************************/


#ifndef TAGSPRING_H
#define TAGSPRING_H

class TagMarker;
#include <QGraphicsLineItem>
#include <QGraphicsDropShadowEffect>


class TagSpring
{
public:
    TagMarker *from;
    TagMarker *to;
    QGraphicsLineItem *line;
    double k;
    double length;
    QGraphicsDropShadowEffect *effect ;
    QGraphicsPolygonItem *arrow1;
    QGraphicsPolygonItem *arrow2;
    bool _isVisible ;

    QGraphicsPolygonItem *createArrow(const bool isLeft);
public:
    TagSpring(TagMarker *newFrom, TagMarker *newTo, double stiffness, double length, double damping);
    virtual ~TagSpring();

    void updatePos();
    void setValues(double stiffness, double length, double damping);
    void setVisible(const bool value);
    bool isVisible();
};

#endif // TAGSPRING_H
