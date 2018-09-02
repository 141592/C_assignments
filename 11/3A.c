//4D21 田口晴信
#include <stdio.h>
#include <math.h>

int main(){
    double dnum;
    printf("ラジアンで角度を実数入力:");
    scanf("%lf", &dnum);

    printf("sin(x)=%f\n", sin(dnum));
    printf("cos(x)=%f\n", cos(dnum));
    printf("tan(x)=%f\n", tan(dnum));

    printf("入力した正の実数のlogや平方根を求めます");
    scanf("%lf", &dnum);
    printf("log(x)=%f\n", log(dnum));
    printf("sqrt(x)=%f\n", sqrt(dnum));

    printf("入力した実数の絶対値を求めます");
    scanf("%lf", &dnum);
    printf("fabs(x)=%f\n", fabs(dnum));

    return 0;
}
