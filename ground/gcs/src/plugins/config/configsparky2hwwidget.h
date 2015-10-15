/**
 ******************************************************************************
 *
 * @file       configsparky2hwwidget.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2015.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup ConfigPlugin Config Plugin
 * @{
 * @brief Sparky2 hardware configuration panel
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef CONFIGSPARKY2HWWIDGET_H
#define CONFIGSPARKY2HWWIDGET_H

#include "ui_configsparky2hwwidget.h"
#include "../uavobjectwidgetutils/configtaskwidget.h"
#include "extensionsystem/pluginmanager.h"
#include "uavobjectmanager.h"
#include "uavobject.h"
#include <QWidget>
#include <QList>


class ConfigSparky2HWWidget : public ConfigTaskWidget {
    Q_OBJECT

public:
    ConfigSparky2HWWidget(QWidget *parent = 0);
    ~ConfigSparky2HWWidget();

private:
    bool m_refreshing;
    Ui_Sparky2HWWidget *m_ui;
    void setupCustomCombos();

protected slots:
    void refreshWidgetsValues(UAVObject *obj = NULL);
    void updateObjectsFromWidgets();

private slots:
    void usbVCPPortChanged(int index);
    void usbHIDPortChanged(int index);
    void flexiPortChanged(int index);
    void mainPortChanged(int index);
    void openHelp();
};

#endif // CONFIGSPARKY2HWWIDGET_H
