#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    char a[n],b[n];
    scanf("%s",a);
    scanf("%s",b);
    for(i=0; i<n; i++)
    {
        if(a[i]==b[i])
        {
            j++;
        }
    }
    printf("%d %d",j,n-j);
    return 0;
}
