#include<stdio.h>
int main()
{
    int x,term=97;
//    char term = 'a';
    printf("Enter a number : ");
    scanf("%d",&x);
    for (int i = 0;i < x;i++){
        for (int j = 0; j < x;j++){//6<6 False
            printf("%c",term+j);//98+0=98-->b
        }
        printf("\n");
        term++;//97+1 = 98-->b
    }
}
