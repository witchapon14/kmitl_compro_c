#include<stdio.h>
int main(){
    int num;
    char str[16]="123456789ABCDEF";
    printf("Enter a number (1-16) : ");
    scanf("%d",&num);
    if (num>=1 && num <=16)
    {
        for (int i =0;i<num;i++){
            for(int j =num-1;j>=0;j--){
                if (i==0|| i== num - 1 || j == 0 || j == num-1)
                    printf("%c",str[j]);
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else{
        printf("Out of range ! ! !");
    }
}