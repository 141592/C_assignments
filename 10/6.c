//4D21 �c�����M
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
    printf("���̐�������͂��Ă�������:");
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
    printf("�K��: %d\n",ans);
    return 0;
}
