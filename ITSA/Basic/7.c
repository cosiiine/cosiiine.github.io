#include <stdio.h>  
  
int main()  
{  
    int n;  
    scanf("%d",&n);  
  
    while(n--)  
    {  
        char c;  
        int x,y,a,b;  
  
        scanf("\n%c",&c);  
        scanf("%d %d %d %d",&x,&y,&a,&b);  
        if(c=='+')  
        {  
            printf("%d %d\n",x+a,y+b);  
        }  
        else if(c=='-')  
        {  
            printf("%d %d\n",x-a,y-b);  
        }  
        else  
        {  
            printf("%d %d\n",a*x-y*b,x*b+y*a);  
        }  
    }  
  
    return 0;  
}
