#include<stdio.h>
int Abs(int a,int b){
      if(a - b < 0)
            return(-(a-b));
      return(a-b);
}
int main(){
      int num[10],max;
      printf(" *** Maximum diference of adjacent number ***\nEnter 10 integers : ");
      for (int i = 0;i<=9;i++){
            scanf("%d",&num[i]);
      }
      max = num[1]-num[0];
      for (int j=0;j<=8;j++){
            if(j == 0 || max <= Abs(num[j+1],num[j])){
                  max = Abs(num[j+1],num[j]);
            }
      }
      printf("Maximum differnce is %d",max);
}