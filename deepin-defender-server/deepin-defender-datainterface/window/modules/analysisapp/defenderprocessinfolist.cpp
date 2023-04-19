// SPDX-FileCopyrightText: 2017 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include "defenderprocessinfolist.h"

void registerDefenderProcessInfoListMetaType()
{
    qRegisterMetaType<DefenderProcessInfoList>("DefenderProcessInfoList");
    qDBusRegisterMetaType<DefenderProcessInfoList>();
}
