/*
 * Remote Fan Controller
 * Copyright (c) 2019 Michiel Fokke
 * All rights reserved
 *
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */
 

#include "mgos.h"

enum mgos_app_init_result mgos_app_init(void) {
	LOG(LL_INFO, ("RFC started."));
	return MGOS_APP_INIT_SUCCESS;
}