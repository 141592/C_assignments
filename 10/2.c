//4D21 “cŒû°M
#include <stdio.h>

int func2(int num1,int num2){
	int loop;
    printf("[%d]\n", num2);
    for (loop = 0; loop < num1; loop++) {
        printf("%2d",loop);
    }
    printf("\n");
	return 0;
}

int func1(int a, int b){
    printf("A[%d][%d]\n", a, b);
    return 0;
}


int main(){
    int num1 = 4, num2 = 6;

    func2(num1,num2);
    func1(num1,3);

    return 0;
}
