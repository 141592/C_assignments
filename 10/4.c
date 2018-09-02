//4D21 “cŒû°M
#include <stdio.h>

int input(int *num){
    printf("³‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d",  &*num);
    return 0;
}

int factorial(int num, int *ans){
	int loop;
    *ans = 1;
    for (loop = num; loop > 0; loop--) {
        *ans = *ans * loop;
    }
    return 0;
}

int output(int ans){
    printf("ŠKæ: %d\n",ans);
    return 0;
}

int main(){
    int num,ans;
    input(&num);
    factorial(num, &ans);
    output(ans);


    return 0;
}
