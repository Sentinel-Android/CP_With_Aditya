#include<Stdio.h>
#include<math.h>
int main()
{
    int n,check=1;
    scanf("%d",&n);
    if(n<=1){
        printf("not a prime number");
    }
    else{
        for(int i=2;i<=pow(n,0.5);i++){
            if(n%i==0){
                printf("composite number");
                check=0;
                break;
            }
        }
        if(check==1){
            printf("prime number");
        }
    }
    return 0;
}