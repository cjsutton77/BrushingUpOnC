/*
 * playground.c
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
#include <stdlib.h>

void func(int arr[]){
    int n = 6;
    for (int i = 0; i<n ; i++){
        arr[i] =  2 * arr[i];
    }
}

int main(int argc, char **argv)
{
	/*
    int a = 2;
	int b = 3;
	printf("bitwise and is:\t%d\n",a & b);
	printf("bitwise or is:\t%d\n",a | b);
	printf("%d\n",a << 1);
	printf("%d\n",b << 1);
	
	int s_int = sizeof(int);
	int s_char = sizeof(char);
	int s_long = sizeof(long);
	int s_longlong = sizeof(long long);
	int s_double = sizeof(double);
	int s_longdouble = sizeof(long double);
	
	printf("size of int is:\t%d\n",s_int);
	printf("size of int is:\t%d\n",s_char);
	printf("size of int is:\t%d\n",s_long);
	printf("size of int is:\t%d\n",s_longlong);
	printf("size of int is:\t%d\n",s_double);
	printf("size of int is:\t%d\n",s_longdouble);
    */
    int n = 10;
    int arr[n];

    for (int i = 0; i < n ; i++) {
        arr[i] = i;
        printf("%d\t%d\n",i,arr[i]);
    }

    char word[] = "hello!";

    printf("%s\t\t%lu\n",word,sizeof(word)/sizeof(char));

    int a[] = {1,2,3,4,5,6};
    
    printf("%lu\n\n",sizeof(a)/sizeof(int));

    for (int i = 0; i < sizeof(a)/sizeof(int) ; i++){
        printf("%d\n",a[i]);
    }

    printf("\\/\\/\\/\n");

    func(a);

    for (int i = 0; i < sizeof(a)/sizeof(int) ; i++){
        printf("%d\n",a[i]);
    }

    printf("\\/\\/\\/\n");

	int x = 999;
	int *px = &x;
	
	printf("px address is %p\n",&px);
	printf("x address is %p\n", &x);
	printf("px is: %p\n*px is %d\n", px, *px);

    printf("\n\\/\\/\\/\n");
    
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;
    
    pnum = &num1;
    *pnum = 2L;
    ++num2;
    printf("num2 = %ld\n",num2);
    num2 += *pnum;
    printf("num2 = %ld\n",num2);
    pnum = &num2;
    ++(*pnum);
    printf("num2 = %ld\n",num2);
    printf("num1 = %ld, num2 = %ld, *pnum=%ld, *pnum+num2=%ld\n",num1,num2,*pnum,*pnum+num2);

    printf("\n\\/\\/\\/\n");
    
    int values[100];
    int *valuesPtr;
    
    valuesPtr = values;
    printf("%p\t%p\n",valuesPtr,&values);	

	printf("%lu\n",sizeof(values)/sizeof(int));

    return 0;
    
}


