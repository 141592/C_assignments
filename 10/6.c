//4D21 “cŒû°M
#include <stdio.h>

void input(int *num);
int factorial(int num);
int output(int ans);

int main(){
    int num;
    input(&num);
    output(factorial(num));

    return 0;
}

void input(int *num){
    printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d", &*num);
    return;
}

int factorial(int num){
	int loop;
    int ans = 1;
    for (loop = num; loop > 0; loop--) {
        ans = ans * loop;
    }
    return ans;
}

int output(int ans){
    printf("ŠKæ: %d\n",ans);
    return 0;
}
