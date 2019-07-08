#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
int a,b,c;
int d;
char str[20];

printf("What is your name?\n");
scanf("%s", str);
printf("Hello, %s!\n", str);

srand(time(NULL));
a=rand()%6+1;
b=rand()%6+1;
d=rand()%6+1;
c=a+b+d;
  
printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nDie 3: %d\nTotal value: %d\n",a,b,d,c);
  
if(c>7){
  printf("%s won!\n", str);
}
else printf("%s lost!\n", str);
 
return 0;
}
