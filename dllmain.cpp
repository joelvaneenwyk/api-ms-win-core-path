/*
 * Copyright 2021 Alexandru Naiman
 *
 * Licensed under LGPL 2.1; see notice below
 *
 * Original code copyright:
 *
 * Copyright 2018 Nikolay Sivov
 * Copyright 2018 Zhiyi Zhang
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
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 *
 */

#pragma warning(push)
#pragma warning(disable : 4668)
#pragma warning(disable : 5039)
#pragma warning(disable : 5105)
#include <Windows.h>
#pragma warning(pop)

#pragma warning(push)
#pragma warning(disable : 4100)
BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved) {
#pragma warning(pop)
  switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
      break;
  }
  return TRUE;
}
