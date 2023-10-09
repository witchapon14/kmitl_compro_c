#include<stdio.h>
void sort(int *num){
      int min, tmp;
      for (int i = 0;i < 5;i++){
            min = i;
            for (int j = i;j<5;j++){
                  if(num[j]<num[min]){
                        tmp = num[j];
                        num[j] = num[min];
                        num[min] = tmp;
                  }
            }
      }
}
int main()
{
    int ratings[5];
    printf("Enter 5 rating : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &ratings[i]);
    sort(ratings);
    printf("Sorted : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", ratings[i]);
}