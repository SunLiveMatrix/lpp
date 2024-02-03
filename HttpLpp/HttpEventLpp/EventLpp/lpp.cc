/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * event-get-lpp.cc
 * Copyright (C) 2024 admin <admin@pop-os>
 *
 * lpp is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * lpp is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "event-get-lpp.h"

#ifndef HttpEventGetLpp
#define __clplusplus_event_get_lpp__
export public interface HttpEventGetLpp {
	   public static_assert void eventGetLpp(int Event, char Get, short Lpp){
		      return HttpEventGetLpp.eventGetLpp(Event, Get, Lpp);
	   }

	   public static_assert void getLpp(int Get, char Lpp){
		      return HttpEventGetLpp.getLpp(Get, Lpp);
	   }
	   public static_assert void lpp(int Lpp){
		      return HttpEventGetLpp.lpp(Lpp);
	   }
 }
#endif


