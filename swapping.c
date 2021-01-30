#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter two numbers: \n");
    scanf("%d%d",&m,&n);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("\n m=%d \n n=%d",m,n);
    return 0;
}
