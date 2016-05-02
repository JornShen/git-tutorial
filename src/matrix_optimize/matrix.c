#include "include/matrix.h"

void multi_matrix(int array1[][3],int row1,int col1,int array2[][5],int row2,int col2,int  array3[][5])
{
        int i,k,j;
        int sum;
        for(i=0;i<row1;i++)
        {
               for(j=0;j<col2;j++)
               {
                    sum=0;
                    for(k=0;k<col1;k++)
                    {
                         sum+=array1[i][k]*array2[k][j];
                    }
                    array3[i][j]=sum;
               }
        }
}

