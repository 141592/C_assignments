#include <stdio.h>

int main() {
    int num;
    double dnum;
    float fnum;
    printf("1.��������͂��Ă�������:");
    scanf("%d", &num);
    printf("2.��������͂��Ă�������:");
    scanf("%lf", &dnum);
    printf("3.��������͂��Ă�������:");
    scanf("%f", &fnum);

    printf("-���͂����l�̃��X�g-\n");
    printf("1:%d\n", num);
    printf("2:%.10f\n", dnum);
    printf("3:%.10f\n", fnum);
    return 0;
}