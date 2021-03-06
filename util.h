/**
 * Copyright (C) 2009-2013 by Gerardo Orellana <goaccess@prosoftcorp.com>
 * GoAccess - An Ncurses apache weblog analyzer & interactive viewer
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * A copy of the GNU General Public License is attached to this
 * source distribution for its full text.
 *
 * Visit http://goaccess.prosoftcorp.com for new releases.
 */

#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

#define REGEX_ERROR 100
#define DATE_LEN     12         /* date length */
#define KB          1024
#define MB          (KB * 1024)
#define GB          (MB * 1024)

#define MILS        1000ULL
#define SECS        1000000ULL
#define MINS        60000000ULL
#define HOUR        3600000000ULL

typedef enum
{
   BROWSER,
   BROWSER_TYPE
} GBrowserStr;

typedef enum
{
   OPESYS,
   OPESYS_TYPE
} GOpeSysStr;

char *alloc_string (const char *str);
char *char_repeat (int n, char c);
char *char_replace (char *str, char o, char n);
char *clean_date (char *s);
char *clean_month (char *s);
char *convert_date (char *result, char *data, char *from, char *to, int size);
char *filesize_str (unsigned long long log_size);
char *int_to_str (int d);
char *reverse_ip (char *str);
char *secs_to_str (int secs);
char *substring (const char *str, int begin, int len);
char *trim_str (char *str);
char *usecs_to_str (unsigned long long usec);
char *verify_browser (const char *str, GBrowserStr b_type);
char *verify_os (const char *str, GOpeSysStr o_type);
char *verify_status_code (char *str);
char *verify_status_code_type (const char *str);
int count_occurrences (const char *s1, char c);
int intlen (int num);
int invalid_ipaddr (char *str);
off_t file_size (const char *filename);

#endif
