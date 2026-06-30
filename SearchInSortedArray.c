#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long arr[10000];
    for(int i=0;i<n;i++){
        scanf("%lld",arr[i]);
    }

    int flag=0;
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=1;
            break;
        }
    }
    if(flag) printf("1\n");
    else printf("0\n");
}