#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    FILE *ffp;  
    FILE *tfp;  
    char ch;  
    if((ffp = fopen("a.txt","r")) == NULL)  
    {  
        printf("Cannot open file!\n");  
        exit(0);  
    }  
    if((tfp = fopen("b.txt","w+")) == NULL)  
    {  
        printf("Cannot open file!\n");  
        exit(0);  
    }  
    while((ch = fgetc(ffp)) != EOF)  
    {  
        fputc(ch,tfp);  
    }  
    fclose(ffp);  
    fclose(tfp);  
      
    return 0;  
}  

