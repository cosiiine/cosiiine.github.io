#include <stdio.h>  
  
int f(int x)  
{  
    if(x==0||x==1) return x+1;  
    else return f(x-1)+f(x/2);  
}  
  
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF)  
    {  
        printf("%d\n",f(n));  
    }  
  
    return 0;  
}
