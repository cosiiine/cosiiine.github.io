#include <stdio.h>  
#include <ctype.h>  
  
int main()  
{  
    char a[110];  
    int n;  
    fgets(a,110,stdin);  
    scanf("%d",&n);  
    for(int i=0;a[i]!='\n'&&a[i]!='\0';i++)  
    {  
        if(isupper(a[i]))  
        {  
            if(a[i]+n>'Z') a[i]='A'+a[i]+n-'Z'-1;  
            else if(a[i]+n<'A') a[i]='Z'+(a[i]+n-'A')+1 ;  
            else a[i]+=n;  
        }  
        if(islower(a[i]))  
        {  
            if(a[i]+n>'z') a[i]='a'+a[i]+n-'z'-1;  
            else if(a[i]+n<'a') a[i]='z'+(a[i]+n-'a')+1 ;  
            else a[i]+=n;  
        }  
        if(isdigit(a[i]))  
        {  
            if(a[i]+n>'9') a[i]='0'+a[i]+n-'9'-1;  
            else if(a[i]+n<'0') a[i]='9'+(a[i]+n-'0')+1 ;  
            else a[i]+=n;  
        }  
    }  
    printf("%s",a);  
  
    return 0;  
}
