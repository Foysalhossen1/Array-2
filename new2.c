#include<stdio.h>
int main()
{
    int a[12] ,k;
    int low = a[0] ,j;
    int max = a[0] ,i;
    
    printf("Enter the valu [fast 6 value of [+] AND secend 6 value of [-]]:\n");
for ( k = 1; k < 12; k++)
{
    scanf("%d\n",&a[k]);
    
}

    for ( i = 1; i < k; i++)
    {
        if (a[i] > max)
        max = a[i];    
    }
     printf("Max value is:%d\n",max);

     for ( j = 0; j < k; j++)
    {
        if (a[j] < low)
        low = a[j];
    }
    printf("low value is:%d\n",low);
    
    
    return 0;
}