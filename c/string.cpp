#include<stdio.h>
#include<string.h>
main(){
    int f=0;
    char str[50];
    printf("Enter a string :");
    gets(str);
    for(int i=0; str[i]!='\0';i++){
        f++;
    }
    printf("%d",f);
}