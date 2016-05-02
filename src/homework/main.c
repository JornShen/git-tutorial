#include <stdio.h>

#include "include/array.h"
#define length 6

int main()
{
   int array[length]={1,99,4,55,6,2};
   sort_array(array,length);   	
   print_array(array,length);
   printf("find 4 is on location of %d\n",find_val_location(array,4,length));
   printf("find less than 50 count is %d",count_val_lessthan(array,50,length));	

   return 0;
}
