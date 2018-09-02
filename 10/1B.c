//4D21 “cŒû°M
#include <stdio.h>

int func1(){
    printf("*****\n");
    printf("***\n");
    printf("*\n");

    return 0;
}


int main(){
    int num = 100;

	func1();
    func1();
    func1();
    
	printf("%d\n", num);

    func1();
    func1();

    return 0;
}
