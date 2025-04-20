#include<stdio.h>
int main(){
    int n,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("the prime num b/w 1 to %d\n", n);
    for(int i=1;i<=n;i++){
        count = 0;  
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }

        }
        if(count==2){
            printf("%d\n",i);
        }
    }
   
    return 0;

}
   