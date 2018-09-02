//4D21 田口晴信
#include <stdio.h>

int input(int *num){
    printf("正の整数を入力してください:");
    scanf("%d", &*num);
    return 10;
}

int factorial(int num){
	int loop;
	int ans = 1;
    for (loop = num; loop > 0; loop--) {
        ans = ans * loop;
    }
    return ans;
}

void output(int ans){
    printf("階乗: %d\n",ans);
    return;
}

int main(){
    int num, ans;
    num = input(&num);
    ans = factorial(num);
    output(ans);

    return 0;
}
