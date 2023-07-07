#include<stdio.h>
int main()
{
	int rows,col;
	printf("Input the number of rows : ");
	scanf("%d",&rows);

    printf("\nInput the number of columns : ");
	scanf("%d",&col);
	
	int arr1[][col] ;
	
	int arr2[][col];
     
	for(int i=0 ; i<rows ; i++)
	{
	  for(int j=0 ; j<col ; j++)
	  {
	  	int result = arr1[i][j]- arr[i][j];
	  	printf("%d ",result);
	  }
	  
	  printf("\n");
    } 	
}