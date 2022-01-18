#include <stdio.h>  
  
int main()  
{  
    int n,m;  
    while(scanf("%d%d",&n,&m)!=EOF)  
    {  
        int a[n][m];  
        for(int i=0;i<n;i++)  
            for(int j=0;j<m;j++)  
                scanf("%d",&a[i][j]);  
        for(int i=0;i<m;i++)  
        {  
            for(int j=0;j<n-1;j++)  
            {  
                printf("%d ",a[j][i]);  
            }  
            printf("%d\n",a[n-1][i]);  
        }  
    }  
  
    return 0;  
} 
