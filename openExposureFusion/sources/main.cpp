/*
openExposureFusion
Copyright (C) 2015 Alexey Markarov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include "MainController.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainController ctrl;
    const int retCode = ctrl.init() ? a.exec() : 0;
    ctrl.release();
    return retCode;
}
