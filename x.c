#include<stdio.h>
#include<math.h>

int main(){
  long int a,b;
  
  while(scanf("%d %d",&a,&b)==2){
    printf("%d",(a > b) ? (a - b) : (b - a));
  }
}