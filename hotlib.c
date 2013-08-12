/*
 * (C) Copyright 2013 x8esix.
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser General Public License
 * (LGPL) version 3.0 which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-3.0.txt
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 */

#include "hotlib.h"

/// <summary>
/// Checks if feature is available </summary>
/// 
/// <returns>
/// Returns 1 if available, 0 if unavailabe </returns>
int STDCALL hlIsFeatureCompatible(IN HOTLIB_FEATURE hlFeature) {
	switch(hlFeature) {
		case HOTPATCH:
			return 1;
		default:
			return 0;
	}
}