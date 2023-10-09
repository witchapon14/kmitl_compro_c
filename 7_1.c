#include<stdio.h>
int findmin(int,int);
int main() {
  	int a,b,c,d;
  	printf(" *** Find min value of 4 inputs ***\n");
   	printf("Enter 4 integers : ");
  	scanf("%d %d %d %d",&a,&b,&c,&d);
  	printf("The minimum number is %d\n",findmin(findmin(a,b),findmin(c,d)));
	return 0;
}
int findmin(int a, int b){
    if (a <= b) {
        return a;
    }
    else{
        return b;
    }
}