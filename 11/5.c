//4D21 “cŒû°M
#include <stdio.h>

int func(int num);

int func(int num){
    printf("#%d\n", num);

    if(num == 1){
        return 1;
    }else {
        return num * func(num-1);
    }
}

int main(){
    printf("%d\n", func(5));

    return 0;
}
