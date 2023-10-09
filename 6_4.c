#include<stdio.h>
int main(){
    int num,c=0;
    char str[27];
    printf("Enter : ");
    scanf("%d",&num);
    for (int i = 0;i<num;i++){
        str[i] = 'A'+i;
        //printf("%c",str[i]);
    }
    for (int j = 0;j<num;j++){
        for(int k = 0;k<num;k++){
            printf("%c",str[c%num]);
            c++;
        }
        printf("\n");
        c++;
    }
}