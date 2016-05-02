#include<stdio.h>
#include "include/matrix.h"
#include <time.h>

int main()
{
      int i,j;
      int  array1[5][3]={{1,2,3},{4,5,6},{4,3,2},{3,7,8},{9,0,2}};
      int  array2[3][5]={{2,4,5,7,8},{4,6,7,3,5},{6,3,2,3,2}};
      int array3[5][5];
      double time_start,time_end;
      time_start=clock();
      multi_matrix(array1,5,3,array2,3,5,array3);
      for(i=0;i<5;i++)
      {
            for(j=0;j<5;j++)
            {
                printf("%d\t",array3[i][j]);
            }
            printf("\n");
      }
      time_end=clock();
      printf("Time used: %10.9f\n", (double) ( (time_end - time_start) / 1000.0) );

      return 0 ;
}
