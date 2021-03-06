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

#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>
#include <QMap>
#include <QVector>

class QWidget;
class QPropertyAnimation;
class CaptureTool;

class CaptureButton : public QPushButton {
    Q_OBJECT
    Q_ENUMS(ButtonType)



public:
    // Don't forget to add the new types to CaptureButton::iterableButtonTypes
    // in the .cpp and the order value in the private array buttonTypeOrder
    enum ButtonType {
		TYPE_PENCIL = 0,
		TYPE_ARROW = 1,
		TYPE_SELECTION = 2,
		TYPE_CIRCLE = 3,
		TYPE_BLUR = 4,
		TYPE_MOVESELECTION = 5,
		TYPE_UNDO = 6,
		TYPE_COPY = 7,
		TYPE_SAVE = 8,
		TYPE_EXIT = 9,
    };

	CaptureButton(){};
    explicit CaptureButton(const ButtonType, QWidget *parent = nullptr);

    static size_t buttonBaseSize();
    static bool iconIsWhiteByColor(const QColor &);
    static QVector<CaptureButton::ButtonType> getIterableButtonTypes();
    static int getPriorityByButton(CaptureButton::ButtonType);

    QString name() const;
    QString description() const;
    QString styleSheet() const;
    ButtonType buttonType() const;
    CaptureTool* tool() const;

    void setColor(const QColor &c);

protected:
    virtual void mousePressEvent(QMouseEvent *);
    static QVector<ButtonType> iterableButtonTypes;

    CaptureTool *m_tool;

signals:
    void pressedButton(CaptureButton *);

private:
    CaptureButton(QWidget *parent = 0);
    ButtonType m_buttonType;

    static QColor m_mainColor;

    void initButton();

};

#endif // BUTTON_H
