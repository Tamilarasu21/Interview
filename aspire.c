// company name : Aspire systems
//multiplication of 2 * 2 matrix
#include<stdio.h>
#include<conio.h>
int main()
{
  int x, y, a[10][10], b[10][10], c[10][10],sum=0, mul[10][10];
  printf("Enter the number of rows");
  scanf("%d", &x);
  printf("Enter the number of columns");
  scanf("%d", &y);
  // get first matrix values
  printf("Enter the first matrix elements\n");
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      scanf("%d",&a[i][j]);
    }
  }
  // get second matrix values
  printf("Enter the second matrix elements\n");
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      scanf("%d",&b[i][j]);
    }
  }
  // multiply the matrix and store it in mul[][]
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      for(int k=0;k<y;k++){
        sum+=a[i][k]*b[k][j];
      }
      mul[i][j]=sum;
      sum=0;
    }
  }
  //printing out the elements in the resultant matrix
  printf("The resultant matrix is\n");
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      printf("%d\t",mul[i][j]);
    }
  }
  return 0;
}
