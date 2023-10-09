#include<stdio.h>
#define SIZE 10
int main(){
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    int i,i_max,k = 0;
    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for(i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
    printf("\n\n *** Analyzing Data ***\n");
    int max_score[10];
    for(i=0;i<SIZE;i++) {
        if(i == 0 || st[i_max].marking < st[i].marking)
            i_max = i;
    }
    for(i=0;i<SIZE;i++) {
        if(st[i_max].marking == st[i].marking)
        {
            max_score[k] = i;
            k++;
        }
    }
    printf("Max marking   = %d points, %d students.\n",st[i_max].marking,k);
    for (int j=0;j<k;j++){
      printf("%d. ",j+1);
      printf("%s %s %d\n",st[max_score[j]].id,st[max_score[j]].name,st[max_score[j]].marking);
    }
    return 0;
}