/*=======================================================================
*
*   Copyright (C) 2013 Lysine.
*
*   Filename:    Render.h
*   Time:        2013/12/27
*   Author:      Lysine
*
*   Lysine is a student majoring in Software Engineering
*   from the School of Software, SUN YAT-SEN UNIVERSITY.
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.

*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
=========================================================================*/

#ifndef RENDER_H
#define RENDER_H

#include <QtGui>
#include <QtCore>

class Render:public QWindow
{
	Q_OBJECT
public:
	explicit Render(QWidget *parent=0);
	QWidget *getWidget(){return widget;}

private:
	QMovie tv;
	double time;
	QImage me,background;
	QTime last;
	QWidget *parent;
	QWidget *widget;
	QOpenGLContext *context;
	QOpenGLPaintDevice *device;
	bool event(QEvent *e);
	void drawPlay(QPainter *painter,QRect rect);
	void drawStop(QPainter *painter,QRect rect);
	void drawTime(QPainter *painter,QRect rect);

public slots:
	void draw();
	void setTime(double t);
};

#endif // RENDER_H
