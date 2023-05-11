#include<Stdio.h>
int main()
{
    int n1,n2,n3,min;
    scanf("%d%d%d",&n1,&n2,&n3);
    // if(n1>n2){
    //     if(n2>n3){
    //         min=n3;
    //     }
    //     else{
    //         min=n2;
    //     }
    // }
    // else if(n1>n3){
    //     min=n3;
    // }
    // else{
    //     min=n1;
    // }
    min=n1;
    if(n2<min){
        min=n2;
    }
    if(n3<min){
        min=n3;
    }
    printf("%d",min);
    return 0;
}