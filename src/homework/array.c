#include "include/array.h"
#include "stdio.h"

int find_val_location(int* array,int value,int length)
{
       int i;
       for(i=0;i<length;i++){
	  if(array[i]==value){
		return i+1;
	  }

       }
       return -1;
}


int count_val_lessthan(int* array,int value,int length)
{
	int i, count=0;
	for(i=0;i<length;i++){
		if(array[i]<value){
			count++;
		}

	}
	return count;
}
void sort_array(int *array,int length)
{
	int temp;
	int i,j,min;
	for(i=0;i<length-1;i++){
	    min=i;	
	    for(j=i+1;j<length;j++){
		if(array[min]>array[j]){
		    min=j;
		}
	    }
	    if(min!=i){
		temp=array[i];
		array[i]=array[min];
		array[min]=temp;
	    }

	}

}
void print_array(int *array,int length)
{
	int i;
	for(i=0;i<length;i++){
	    printf("%d\t",array[i]);
	}		
	printf("\n");




}







