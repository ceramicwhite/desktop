// Copyright (c) 2024 Private Internet Access, Inc.
//
// This file is part of the Private Internet Access Desktop Client.
//
// The Private Internet Access Desktop Client is free software: you can
// redistribute it and/or modify it under the terms of the GNU General Public
// License as published by the Free Software Foundation, either version 3 of
// the License, or (at your option) any later version.
//
// The Private Internet Access Desktop Client is distributed in the hope that
// it will be useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with the Private Internet Access Desktop Client.  If not, see
// <https://www.gnu.org/licenses/>.

#include <common/src/common.h>
#line HEADER_FILE("wireguardmethod.h")

#ifndef WIREGUARDMETHOD_H
#define WIREGUARDMETHOD_H

#include "vpnmethod.h"
#include <common/src/openssl.h>

// Clean any Wireguard leftovers that could exist if the daemon crashed while a
// connection was up.  (Cleans for all WG backends supported on this platform.)
void cleanupWireguard();

std::unique_ptr<VPNMethod> createWireguardMethod(QObject *pParent, const OriginalNetworkScan &netScan);

#endif
