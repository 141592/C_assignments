//4D21 �c�����M
#include <stdio.h>
#include <math.h>

int main(){
    double dnum;
    printf("���W�A���Ŋp�x����������:");
    scanf("%lf", &dnum);

    printf("sin(x)=%f\n", sin(dnum));
    printf("cos(x)=%f\n", cos(dnum));
    printf("tan(x)=%f\n", tan(dnum));

    printf("���͂������̎�����log�╽���������߂܂�");
    scanf("%lf", &dnum);
    printf("log(x)=%f\n", log(dnum));
    printf("sqrt(x)=%f\n", sqrt(dnum));

    printf("���͂��������̐�Βl�����߂܂�");
    scanf("%lf", &dnum);
    printf("fabs(x)=%f\n", fabs(dnum));

    return 0;
}
