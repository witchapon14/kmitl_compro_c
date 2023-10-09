#include <stdio.h>
int	main()
{
    int num,row,k;
    printf(" *** Show isosceles triangle ***\n");
    printf("Enter a counting number : ");
    scanf("%d",&row);
    k = 0;
    num = (2*row)+1;
    if (row >= 3)
    {
        printf("Output :\n");
        for(int i =1;i<=row;i++){
            for (int j= 1;j<=num;j++){
                if(j <= (num/2)+k && j >= (num/2)-k) 
                    printf("*");
                else
                    printf(" ");
            }
            k++;
            printf("\n");
        }
    }
    else{
        printf(" --- Incorrect number. ---");
    }
}