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
    for(i=0; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i][0]>a[j][0])
            {
                strcpy(b[i],a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],b[i]);
            }
        }
    }
    for(i=n; i>0; i--)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}
