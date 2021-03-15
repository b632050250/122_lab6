#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k=0,max,m,p=0;
    scanf("%d",&n);
    char a[n][2],b[n],c[n];
    for(i=0; i<=n; i++)
    {
        gets(a[i]);
    }
    for(i=0; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i][0]==a[j][0])
            {
                k++;
            }
        }
        b[i]=k;
        k=0;
    }
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            max=b[i];
        }
        else
        {
            if(max<b[i])
            {
                m=max;
                max=b[i];
                b[i]=m;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        if(b[i]!=b[i+1])
        {
            c[p]=b[i];
            p++;
        }
    }
    printf("%c %c",a[p[0]][0],a[p[1]][0]);
    return 0;
}
