//4D21 ìcå˚ê∞êM
#include <stdio.h>

int func4(int a, double b, int c[3]){
    printf("CheckPointA: a=%d b=%1f c[3]=[%d,%d,%d]}\n",a,b,c[0],c[1],c[2]);

    a = a + 1;
    b = b + 1;
    c[0] = c[0] + 1;
    c[1] = c[1] + 1;
    c[2] = c[2] + 1;

    printf("CheckPointB: a=%d b=%1f c[3]=[%d,%d,%d]}\n",a,b,c[0],c[1],c[2]);

    return 0;
}

int func5(int *a, double *b, int c[3]){

    printf("CheckPointC: a=%d b=%1f c[3]=[%d,%d,%d]}\n",*a,*b,c[0],c[1],c[2]);
    *a = *a + 1;
    *b = *b + 1;

    c[0] = c[0] + 1;
    c[1] = c[1] + 1;
    c[2] = c[2] + 1;

    printf("CheckPointD: a=%d b=%1f c[3]=[%d,%d,%d]}\n",*a,*b,c[0],c[1],c[2]);

	return 0;
}

int main(){
    int a = 0;
    double b = 1.1;
    int c[3] = {2,3,4};

    printf("CheckPointE: a=%d b=%1f c[3]=[%d,%d,%d]}\n",a,b,c[0],c[1],c[2]);
    func4(a,b,c);
    printf("CheckPointF: a=%d b=%1f c[3]=[%d,%d,%d]}\n",a,b,c[0],c[1],c[2]);
    func5(&a,&b,c);
    printf("CheckPointG: a=%d b=%1f c[3]=[%d,%d,%d]}\n",a,b,c[0],c[1],c[2]);

    return 0;
}
