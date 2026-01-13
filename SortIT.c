#include<stdio.h>

int ones(int x){
    int c=0;
    while(x){
        if(x&1){
        c++;
        }
    x>>=1;
    }
        return c;
}

int srt(int x,int y){
    int xnd=(x/10)%10;
    int ynd=(y/10)%10;

    if(xnd!=ynd)
        return xnd>ynd;

    int cx=ones(x);
    int cy=ones(y);

    if(cx!=cy)
        return cx<cy;

    return x<y;
}

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(srt(arr[i],arr[j])){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }

    for(int i=0;i<n;i++){
            if(i==n-1){
                printf("%d\n",arr[i]);
            }
        else{
        printf("%d ",arr[i]);
    }
    }
}
