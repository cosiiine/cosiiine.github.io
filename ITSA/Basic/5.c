#include <stdio.h>  
  
int main()  
{  
    int x;  
    while(scanf("%d",&x)!=EOF)  
    {  
        int a[8]={0};  
        if(x<0)  
        {  
            x+=128;  
            a[0]=1;  
        }  
        else a[0]=0;  
        for(int i=7;i>0;i--)  
        {  
            a[i]=x%2;  
            x/=2;  
        }  
        for(int i=0;i<8;i++)  
        {  
            printf("%d",a[i]);  
        }  
        printf("\n");  
    }  
  
    return 0;  
}
