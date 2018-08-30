#include <stdio.h>
int comp(int a,int b,int c)
{
    if(a>b&&a>c)
    printf("%d is greater than %d and %d\n",a,b,c);
    else if(b>a&&b>c)
    printf("%d is greater than %d and %d\n",b,a,c);
    else
    printf("%d is greater than %d and %d\n",c,a,b);
}
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=comp(a,b,c);
    return 0;
}
