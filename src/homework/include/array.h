#ifndef _OPERARRAY_H
#define _OPERARRAY_H

int find_val_location(int* array,int value,int length);//if no find ,return -1;if there are more same ,return the first location
int count_val_lessthan(int* array,int value,int length);
void sort_array(int *array,int length);	
void print_array(int *array,int length);
#endif //_OPERARRAY_H
