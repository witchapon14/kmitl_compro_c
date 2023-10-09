#include<stdio.h>
#include<string.h>
void palindrome(char *);
int main() {
      char str[100];
      printf(" ***  Palindrome Verification  ***\n");
      printf(" *  verify only alphabet number  *\n");
      printf(" *        insensitive case       *\n");
      printf(" *-------------------------------*\n");
      printf("Enter a sentence : ");
      scanf("%[^\n]",str);
      printf("Entered message : %s\n",str);
      palindrome(str);
      return 0;
}
void palindrome(char *str){
      char *str1;
      int i=0;
      while(str[i]!= '\0'){
            if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')||(str[i]>='0' && str[i]<='9'))
                  str1[i] = str[i];
            i++;
      }
}