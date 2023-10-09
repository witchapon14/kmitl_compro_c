#include<stdio.h>
int main()
{
    int num,count,sum = 1;
    printf(" *** Power ***");
    printf("\nEnter 2 Positive Integers: ");
    scanf("%d%d",&num,&count);
    if (count == 1)
        printf("%d = %d",num,num);
    else{
        for (int i=0;i<count;i++){
            sum *= num;
            printf("%d",num);
            if (i != count-1)
                printf(" x ");
        }
        printf(" = %d",sum);
    }
}