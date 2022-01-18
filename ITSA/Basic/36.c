#include<stdio.h>  
#include <string.h>  
  
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF)  
    {  
        if(n%400==0) printf("Bissextile Year\n");  
        else if(n%100==0) printf("Common Year\n");  
        else if(n%4==0) printf("Bissextile Year\n");  
        else printf("Common Year\n");  
    }  
    return 0;  
}
