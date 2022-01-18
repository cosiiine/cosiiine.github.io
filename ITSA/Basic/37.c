#include<stdio.h>  
#include <string.h>  
  
int main()  
{  
    int a,b[7]={0},max=0,n=0,sum=0;  
    for(int i=0;i<4;i++)  
    {  
        scanf("%d",&a);  
        b[a]++;  
        if(b[a]>max)  
        {  
            max=b[a];  
            n=a;  
        }  
        if(b[a]==max && n>a) n=a;  
        sum+=a;  
    }  
    if(max==4) printf("WIN\n");  
    else if(max==2) printf("%d\n",sum-n*max);  
    else printf("R\n");  
  
    return 0;  
}
