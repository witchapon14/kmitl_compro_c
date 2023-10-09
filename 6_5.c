#include<stdio.h>
int main(){
    int n,a=1,b,count=1;
    printf(" *** Find Solution a*a*b = n *** ");
    printf("\nEnter n : ");
    scanf("%d",&n);
    while(a*a<=n){
        if (n%(a*a) == 0){
            b = n/(a*a);
            printf("  %d. (a,b) = (%d,%d)\n",count,a,b);
            count++;
        }
        a++;
    }
    printf("There are %d solution(s).",count-1);
}