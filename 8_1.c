#include <stdio.h>
int main(){
      int num[11],min,con;
      printf(" *** Ascending sort ***\nEnter 10 whole numbers : ");
      for (int i = 0;i < 10;i++){
            scanf("%d",&num[i]);
      }
      printf("Output : ");
      for (int i = 0;i < 10;i++){
            min = i;
            for (int j = i;j<10;j++){
                  if(num[j]<num[min]){
                        con = num[j];
                        num[j] = num[min];
                        num[min] = con;
                  }
            }
      }
      for (int i =0;i<10;i++){
            if(i != 9)
                  printf("%d ",num[i]);
            else
                  printf("%d",num[i]);
      }
}