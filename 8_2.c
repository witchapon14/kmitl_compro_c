#include<stdio.h>
int main(){
      int n,index[8][10],k=0,i;
      int num[8][10] = {    2,    3,     5,     7,  11,  13,   17,   19,   29,  31, 
                            37,  41,   43,   37,  61,  71,   73,   79,   83,  97, 
                            103, 107, 109, 113, 131, 151, 181, 191, 193, 173, 
                            163, 113, 102, 107, 127, 137, 257, 139, 149, 369,
                            212, 224, 236, 248, 313, 326, 339, 341, 355, 368,
                            2,    4,     6,     6,  10,   12,   14,   16,   18,  20, 
                            1,    3,     5,     7,    9,   11,   13,   17,   19,  21, 
                            163, 113, 102, 107, 127, 137, 257, 139, 149, 369 };
      printf(" *** Find a value in array 2 dimension ***\nEnter a value : ");
      scanf("%d",&n);
      for (i=0;i<=7;i++){
            for(int j=0;j<=9;j++){
                  printf("%5d",num[i][j]);
                  if (num[i][j] == n){
                        index[k][0] = i + 1;
                        index[k][1] = j + 1;
                        k++;
                  }
            }
            printf("\n");
      }
      printf("\nFinding value => %d\n",n);
      i = 0;
      if (k == 0){
            printf(" --- !!! NOT FOUND !!! ---");
      }
      else{
            while(i<k){
                  printf("%d. (row,column) => (%d,%d)\n",i+1,index[i][0],index[i][1]);
                  i++;
            }
      }
}