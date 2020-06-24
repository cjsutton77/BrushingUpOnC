/*
 * kr_ch1.c
 * 
 * Copyright 2020 Christian Sutton <christiansutton@Christians-MacBook-Air.local>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int nc;
	int c = 0;
	int s = 0;
	int n = 0;
	while(1){
		nc = getchar();
		
		if (nc == EOF) break;
		
		else if (nc == ' '){
			++s;
		}
		else if (nc == '\n'){
			++n;
		}
		else {
			//printf("%c",nc);
			++c;
		}
		}
	printf("\n\nchars: %d, spaces: %d, newlines: %d\n",c,s,n);
	return 0;
}

