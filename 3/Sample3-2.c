#include <stdio.h>

int main() {
    int num;
    double dnum;
    float fnum;
    printf("1.®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d", &num);
    printf("2.À”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%lf", &dnum);
    printf("3.À”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%f", &fnum);

    printf("-“ü—Í‚µ‚½’l‚ÌƒŠƒXƒg-\n");
    printf("1:%d\n", num);
    printf("2:%.10f\n", dnum);
    printf("3:%.10f\n", fnum);
    return 0;
}