#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
int a,b,c;
srand(time(NULL));
a=rand()%6+1;
b=rand()%6+1;
c=a+b;
printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",a,b,c);
return 0;
}
