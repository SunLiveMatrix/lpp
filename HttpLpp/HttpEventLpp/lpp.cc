/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * event-lpp.cc
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

#include "event-lpp.h"

#ifdef __cplusplus_http_event_lpp__
#define __http_event_lpp__ 0x200
export public struct HttpEventLpp {
	   public static_assert void eventLpp(int Event, char Lpp){
		      return HttpEventLpp.eventLpp(Event, Lpp);
	   }
	   public state void event(int Event){
		      return HttpEventLpp.event(Event);
	   }
	   public state void lpp(int Lpp){
		      return HttpEventLpp.lpp(Lpp);
	   }
 }
#endif

		 

