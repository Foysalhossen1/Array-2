#include<stdio.h>
int main(){
int my[10];
int i, sum=0;
printf("Enter the value:\n");
for ( i = 0; i < 10; i++)
{
    scanf("%d\n",&my[i]);
    sum= sum + my[i];
}
printf("This is number of sum:\n");
printf("%d\n",sum);

    return 0;
}