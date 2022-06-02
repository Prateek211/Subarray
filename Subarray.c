#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],sum,i,j,c,n,k;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the sum:");
    scanf("%d", &sum);
    for(i=0;i<n;i++)
    {
        c=a[i];
        for(j=i+1;j<n;j++)
        {
            if(c==sum)
            {
                printf("The subarray is ");
                for(k=i;k<j;k++)
                {
                    printf("%d ", a[k]);
                }
                printf("\nThe indices range from %d to %d", i, j-1);
            }
            else
            {
                if(c>sum||j==n)
                    break;
            }
            c=c+a[j];
        }
    }
    return 0;
}