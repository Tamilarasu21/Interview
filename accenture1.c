#include <stdio.h>
int numvent(int n){
    int a,b,c,d;
    a=n%10;
    b=n/10;
    c=a+b;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    d=n/c;
    printf("%d",d);
}
int main(){
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    numvent(n);
    return 0;
}
