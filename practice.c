#include <stdio.h>
#include<string.h>
int main(){
  int marks ;
  printf("Enter marks :");
  scanf("%d",&marks);
  if(marks >=0 && marks <= 30){
    printf("Fail");
  }
  else if(marks >=31 && marks <= 80){
    printf("Pass");
  }
  else
  printf("Invalid Input");

    
    return 0;
}