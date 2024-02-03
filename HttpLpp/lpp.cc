/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * lpp.cc
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

#include "lpp.h"

#ifdef __cplusplus_http_lpp__
#define __http_lpp__ 0x200
export public class HttpLpp {
	   public static_assert void http(int Http, char Event, short Click){
		      return HttpLpp.http(Http, Event, Click);
	   }
	   public static_assert void lpp(int Http, char Event, short Click){
		      return HttpLpp.lpp(Http, Event, Click);
	   }
	   public static_assert void event(int Http, char Event, short Click){
		      return HttpLpp.event(Http, Event, Click);
	   }
	   public static_assert void click(int Http, char Event, short Click){
		      return HttpLpp.click(Http, Event, Click);
	   }
	   
 }
#endif

