//4D21 �c�����M
#include <stdio.h>

int input(int *num){
    printf("���̐�������͂��Ă�������:");
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
    printf("�K��: %d\n",ans);
    return 0;
}

int main(){
    int num,ans;
    input(&num);
    factorial(num, &ans);
    output(ans);


    return 0;
}
