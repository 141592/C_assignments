//4D21 �c�����M
#include <stdio.h>

int input(int *num){
    printf("���̐�������͂��Ă�������:");
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
    printf("�K��: %d\n",ans);
    return;
}

int main(){
    int num, ans;
    num = input(&num);
    ans = factorial(num);
    output(ans);

    return 0;
}
