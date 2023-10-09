#include<stdio.h>
int main()
{
    int num,count,sum = 0;
    printf("Enter 'number' and 'count' : ");
    scanf("%d%d",&num,&count);//input 2 3 -- > 2+2+2 4 5-->4+4+4+4+4
    if (count <= 1)
        printf("I can move on");
    else{//count > 1
        for (int i=0;i<count;i++){
            sum = sum + num;
            printf("%d",num);
            if (i != count-1)//2 + 2 + 2 =
                printf(" + ");
        }
        printf(" = %d",sum);
    }
}