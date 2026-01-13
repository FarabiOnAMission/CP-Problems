#include<stdio.h>

int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    int freq[201]={0};
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        freq[x+100]++;
    }

    int t=n;

    while(m--){
        int x,y;
        scanf("%d %d",&x,&y);
        freq[x+100]++;
        freq[y+100]++;
        t+=2;

        int mid=t/2;

        int c=0;
        int ans=-1;
        for(int i=0;i<=200;i++){
            c+=freq[i];
            if(c>mid){
                ans=i-100;
                break;
            }
        }

        printf("%d\n",ans);
    }

}
