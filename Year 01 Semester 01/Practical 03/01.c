#include <stdio.h>
#include <stdlib.h>

int main()
{
int no1,no2;
printf("Enter Your First Number ");
scanf("%d", &no1);
printf("Enter Your Second Number ");
scanf("%d", &no2);
if (no1>no2)
printf("%d", no1);
else
printf("%d", no2);
return 0;
}
