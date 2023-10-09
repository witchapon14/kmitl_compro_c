#include<stdio.h>
int Sqrt(int c){
    int i = 0;
    while(i != c){
        if (i*i == c)
            break;
        i++;
    }
    return i ;

}
void quadratic_solver(int a, int b, int c){
    int x1,x2;
    int root;
    root = Sqrt(b*b - 4*a*c);
    if (root == 0)
        printf("x = %d",(-b/2*a));
    else{ 
        x1 = ((-b+root)/(2*a));
        x2 = ((-b-root)/(2*a));
        if (x1<x2)
            printf("x1 = %d\nx2 = %d",x1,x2);
        else    
            printf("x1 = %d\nx2 = %d",x2,x1);
    }
}

int main() {
	int a,b,c;
	float ans1, ans2;
	printf(" *** Quadratic Solver ***\n");
	printf(" *   ax^2 + bx + c = 0  *\n");
	printf(" ************************\n\n");
	printf("Enter a b c : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a==0) {
		printf("a cannot be zero ! ! !\n");
		return 0;
	}
	quadratic_solver(a,b,c);
	return 0;
}
