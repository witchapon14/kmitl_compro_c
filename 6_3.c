#include<stdio.h>
int main(){
    int num,k=0;
    char e[9]="987654321";
    printf("input (1-20)  : ");
    scanf("%d",&num);
    printf("\n");
    if(num<=20 && num >0)
    {
        for(int i = 0; i<num;i++){
            printf("  ");
            for (int j = 0; j<num;j++){
                printf("%c  ",e[k % 9]);
                k++;
            }
            printf("\n");
        }
    }
    else
        printf("No Answer");
}
