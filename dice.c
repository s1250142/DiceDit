#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int d1,d2,sum = 0;
  char name[100];
  srand(time(NULL));
  d1 = rand()%6 + 1;
  d2 = rand()%6 + 1;
  sum = d1 + d2;
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s !\n",name);
  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",d1,d2,sum);
  return 0;
}
