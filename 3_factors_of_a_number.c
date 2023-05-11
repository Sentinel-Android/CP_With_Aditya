#include<Stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=pow(n,0.5);i++){
        if(n%i==0){
            if(i!=n/i){
                printf("%d,%d,",i,n/i);
            }
            else{
                printf("%d,",i);
            }
        }
    }
    return 0;
}