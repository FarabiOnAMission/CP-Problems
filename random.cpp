#include<stdio.h>
int main(){
    int n,nsp;
    printf("enter the number of n & nsp: ");
    scanf("%d %d",&n,&nsp);
    for(int i=0;i<=n;i++){
          for(int k=1;k<=nsp;k++){
        printf(" ");
    }
    int first=1;
    for(int j=0;j<=i;j++){
   printf("%d",first);
   first=first*(i-j)/(j+1);
}printf("\n");
    }
    return 0;
}
