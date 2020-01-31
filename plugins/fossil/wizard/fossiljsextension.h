/****************************************************************************
**
** Copyright (c) 2018 Artur Shepilko
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#pragma once

#include <vcsbase/wizard/vcsjsextension.h>

#include <QStringList>
#include <QMap>
#include <QObject>

namespace Fossil {
namespace Internal {

class FossilJsExtensionPrivate;
class FossilSettings;

class FossilJsExtension : public QObject
{
    Q_OBJECT

public:
    static void parseArgOptions(const QStringList &args, QMap<QString, QString> &options);

    FossilJsExtension();
    ~FossilJsExtension();

    Q_INVOKABLE bool isConfigured() const;
    Q_INVOKABLE QString displayName() const;
    Q_INVOKABLE QString defaultAdminUser() const;
    Q_INVOKABLE QString defaultSslIdentityFile() const;
    Q_INVOKABLE QString defaultLocalRepoPath() const;
    Q_INVOKABLE bool defaultDisableAutosync() const;

private:
    FossilJsExtensionPrivate *d = nullptr;
};

} // namespace Internal
} // namespace Fossil
