#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    printf("Capital : ");
    while(str[i]!='\0'){
        if (str[i]>='a'&& str[i]<='z')
            printf("%c",str[i]-32);
        else    
            printf("%c",str[i]);
        i++;
    }
    int k=0;
    printf("\nSmall : ");
    while(str[k]!='\0'){
        if (str[k]>='A'&& str[k]<='Z')
            printf("%c",str[k]+32);
        else    
            printf("%c",str[k]);
        k++;
    }
}