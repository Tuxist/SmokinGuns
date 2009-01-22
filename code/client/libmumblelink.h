/*
===========================================================================
  libmumblelink.c -- mumble link interface

  Copyright (C) 2008 Ludwig Nussel <ludwig.nussel@suse.de>
  Copyright (C) 2008 Smokin' Guns

  This file is part of Smokin' Guns, but all credits are accorded to
  Ludwig Nussel.

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

===========================================================================
*/

int mumble_link(const char* name);
int mumble_islinked(void);
void mumble_update_coordinates(float fPosition[3], float fFront[3], float fTop[3]);
void mumble_unlink(void);
