#include <stdio.h>
int main(){
    int n,c,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
       c=n*i;
       printf("%d\t",c);
       sum+=c;
    }
    printf("\n%d",sum);
    return 0;
}
