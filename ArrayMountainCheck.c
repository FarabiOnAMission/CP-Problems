#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long arr[10000];
    for(int i=0;i<n;i++){
        scanf("%lld",arr[i]);
    }

    int flag=0;
    if(n<3) printf("0\n");
    else{
        for(int i=1;i<n-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                flag=1;
                break;
            }
        }
        if(flag) printf("1\n");
        else printf("0\n");
    }
}