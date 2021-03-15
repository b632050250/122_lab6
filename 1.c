#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n][100];
    char b[100][100];
    for(i=0; i<n; i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i][0]>90)
        {
            a[i][0]-=32;
        }
    }
    for(i=1; i<n; i++)
    {
        if(a[i][1]>a[i+1][1])
        {
            strcpy(b[i],a[i]);
            strcpy(a[i],a[i+1]);
            printf("%s >> ",a[i]);
            strcpy(a[i+1],b[i]);
            printf("%s\n",a[i+1]);
        }
        else
        {
            printf("notchange\n");
        }
    }
    printf("\n");
    for(i=0; i<=n; i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}
