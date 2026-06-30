#include<stdio.h>
#include<string.h>

typedef struct{
  char name[50];
  int roll;
  int marks[3];
} Student;

int main(){
  int n;
  scanf("%d",&n);
  Student students[105];
  for(int i=0;i<n;i++){
    scanf("%s",students[i].name);
    scanf("%d",students[i].roll);
    for(int j=0;j<3;j++){
      scanf("%d",students[i].marks[j]);
    }
  }

  int total=0,topper_roll=0;
  char topper[50];
  for(int i=0;i<n;i++){
    int paise=0;
    for(int j=0;j<3;j++){
      paise+=(students[i].marks[j]);
    }

    if(paise>=total){
      if(paise==total){
        if(students[i].roll>topper_roll){
          continue;
        }
      }

      total=paise;
      topper_roll=students[i].roll;
      strcpy(topper,students[i].name);
    }
  }

  printf("%s\n",topper);

}