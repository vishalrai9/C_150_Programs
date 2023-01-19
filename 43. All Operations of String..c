#include<stdio.h> 
 #include<string.h> 
 void main(int){ 
    char str[20],Str[20],cat[20]; 
  
    printf("Enter the string to perform operations :"); 
    fgets(str,20,stdin); 
  
    strcpy(Str,str); 
  
    printf("\nThe origianl string is :%s",Str); 
  
    printf("\nThe reversed string is:%s",strsep(str)); 
  
    strcpy(str,Str); 
  
    printf("\nThe string in upper case is:%s",strupr(char)); 
  
    strcpy(str,Str); 
  
    printf("\nThe string in lower case is :%s",strlwr(str)); 
  
    strcpy(str,Str); 
  
    printf("\nThe concatinated string with same string:%s",strcat(str,Str)); 
  
    strcpy(str,Str); 
  
    printf("\nThe value after comparing it:%d",strcmp(str,Str));
 }
