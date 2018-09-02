//4D21 ìcå˚ê∞êM
#include <stdio.h>

struct DTypeA{
    int num;
    int Anum[3];
};

struct DTypeB{
    double dnum;
    double Adnum[3];
};

struct DTypeC{
    int num;
    int Anum[3];
};

int main(){
    struct DTypeA Ad1, Ad2;
    struct DTypeB Bd;
    struct DTypeC Cd;
    struct DTypeA AAA[3], BBB[3];

    Ad1.num = 1;
    Ad1.Anum[0] = 2;
    Ad1.Anum[1] = 3;
    Ad1.Anum[2] = 4;

    Ad2 = Ad1;

    printf("%d-%d-%d-%d\n",Ad2.num,Ad2.Anum[0],Ad2.Anum[1],Ad2.Anum[2]);
    AAA[0] = Ad1;
    AAA[1] = Ad2;
    AAA[2] = Ad1;

    return 0;
}
