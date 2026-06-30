#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long arr[10000];
    for(int i=0;i<n;i++){
        scanf("%lld",arr[i]);
    }

    int flag=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=1;
            break;
        }
    }
    if(flag) printf("0");
    else printf("1");
}