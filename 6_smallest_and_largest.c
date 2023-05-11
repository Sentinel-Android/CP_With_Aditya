#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    x=((a>=b)?((b>=c)?c:b):((a>=c)?c:a));
    y=((a>=b)?((a>=c)?a:c):((b>=c)?b:c));
    printf("Min:%d\nMax:%d",x,y);
    return 0;
}