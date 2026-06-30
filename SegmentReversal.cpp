#include<stdio.h>

void swap(int *a,int *b){ 
  int temp = *a;
  *a = *b;
  *b = temp;
}


int main(){
  int n;
  scanf("%d",&n);
  int arr[100005];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  int q;
  scanf("%d",&q);
  while(q--){
    int l,r;
    scanf("%d %d",&l,&r);
    while(l<=r){
      int *ad1 = &arr[l];
      int *ad2 = &arr[r];
      swap(ad1,ad2);
      l++;
      r--;
    }
  }

  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}