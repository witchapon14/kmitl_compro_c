#include<stdio.h>
int main()
{
    int num;
    printf(" *** Multiplication Table ***\nEnter a number (2-100) : ");
    scanf("%d",&num);//6
    if (num >= 2 && num <= 100){
        for (int i=1;i<=12;i++){
            if (i <= 9)
                printf("%4d x %d  = %d\n",num,i,num*i);
            else    
                printf("%4d x %2d = %d\n",num,i,num*i);
        }
    }
    else
        printf(" - - -  Out of Range  - - -");
}