#include<stdio.h>
int main(){

  float mark1,mark2,avarage;

  printf("input mark 1:");
  scanf("%f", &mark1);
  printf("input mark 2 :");
  scanf("%f", &mark2);

  avarage = (mark1 + mark2)/2;

  printf("avarage is : %.2f",avarage);

  return 0;
}