#include<Stdio.h>
int main()
{
    int x,n;
    scanf("%d%d",&x,&n);
    int term=1;
    for(int w=1;w<=n;w++){
        term*=x;
    }
    printf("%d",term);
    return 0;
}