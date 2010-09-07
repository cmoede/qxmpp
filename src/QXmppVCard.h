/*
 * Copyright (C) 2008-2010 The QXmpp developers
 *
 * Authors:
 *  Manjeet Dahiya
 *
 * Source:
 *  http://code.google.com/p/qxmpp
 *
 * This file is a part of QXmpp library.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 */

#ifndef QXMPPVCARD_H
#define QXMPPVCARD_H

// deprecated in release 0.3.0
#warning "QXmppVCard.h is deprecated, use QXmppVCardIq instead"

#include "QXmppVCardIq.h"

// QXmppVCard inherits QXmppVCardIq, to maintain backward compatibility
class QXmppVCard : public QXmppVCardIq
{
public:
    QXmppVCard(const QString& bareJid = ""):QXmppVCardIq(bareJid)
    {
    }
};

#endif //QXMPPVCARD_H
