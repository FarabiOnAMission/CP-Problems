#include<stdio.h>
#include<string.h>

int main(){
  char A[1005],B[1005];
  scanf("%s %s",A,B);
  int total=0,cnt=0;
  for(int i=0;i<1005;i++){
    if(A[i]=='\0') break;
    if(A[i]!='\0') cnt++;
    if(A[i]==B[i]) total++;
  }

  if(total>cnt/2){
    printf("Close\n");
  }
  else printf("Not Close\n");
}