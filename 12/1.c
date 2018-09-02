//4D21 “cŒû°M
#include <stdio.h>
#include <string.h>

int main(){
    struct{
        int num;
        double dnum;
    } setname1;

    struct Dtype{
        int nums[3];
        char str[81];
    };
    struct Dtype setname2;

    setname1.num = 0;
    scanf("%1f", &setname1.dnum);
    printf("%f\n", setname1.dnum);

    setname2.nums[0] = 1;
    setname2.nums[1] = 2;
    setname2.nums[2] = 3;

    strcpy(setname2.str, "TRICK or TREAT");

    printf("OK\n");

    return 0;
}
