// SPDX-FileCopyrightText: 2020 - 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include "appaccessiblelabel.h"

AppAccessibleLabel::AppAccessibleLabel(QLabel *label)
    : AppAccessibleBase(label)
    , m_widget(label)
{
}

QString AppAccessibleLabel::text(int startOffset, int endOffset) const
{
    Q_UNUSED(startOffset);
    Q_UNUSED(endOffset);

    if (m_widget) {
        return m_widget->text();
    }

    return QString();
}
