/* -*- mode: C++; tab-width: 4 -*- */
/* ===================================================================== *\
	Copyright (c) 1998-2001 Palm, Inc. or its subsidiaries.
	All rights reserved.

	This file is part of the Palm OS Emulator.

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
\* ===================================================================== */

#ifndef _HOSTCONTROLPRV_H_
#define _HOSTCONTROLPRV_H_

#include "EmPatchIf.h"			// CallROMType

class SessionFile;

CallROMType	HandleHostControlCall (void);

class Host
{
	public:
	
		static void Initialize	(void);
		static void Reset		(void);
		static void Save		(SessionFile&);
		static void Load		(SessionFile&);
		static void Dispose		(void);
};

#endif /* _HOSTCONTROLPRV_H_ */

