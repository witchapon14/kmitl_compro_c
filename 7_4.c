#include<stdio.h>
int to_upper(int c){
    if(c >= 'a' && c <= 'z')
        return (c - 32);
    else   
        return(c);
}
int to_lower(int c){
    if(c >= 'A' && c <= 'Z')
        return (c + 32);
    else   
        return(c);
}
int main(){
    char str[100];
    int i=0;
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    printf("Capital : ");
    while (str[i]!= '\0')
    {
        printf("%c",to_upper(str[i]));
        i++;
    }
    i = 0;
    printf("\nSmall : ");
    while (str[i]!= '\0')
    {
        printf("%c",to_lower(str[i]));
        i++;
    }
    printf("\nTitle : ");
    i = 0;
    while (str[i]!= '\0')
    {
        if (i == 0)
            printf("%c",to_upper(str[i]));
        else if (str[i] == ' ')
        {
            printf(" ");
            i++;
            printf("%c",to_upper(str[i]));
        }
        else
            printf("%c",str[i]);
        i++;
    }
}