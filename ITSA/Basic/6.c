#include <stdio.h>  
  
int main()  
{  
    int x;  
    while(scanf("%d",&x)!=EOF)  
    {  
        if(x==12||x<3) printf("Winter\n");  
        else if(x<6) printf("Spring\n");  
        else if(x<9) printf("Summer\n");  
        else printf("Autumn\n");  
    }  
  
    return 0;  
}  
