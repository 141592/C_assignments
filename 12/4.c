//4D21 “cŒû°M
#include <stdio.h>
#include <string.h>

struct Dtype01{
    char name[81];
    int age;
};

int printData(struct Dtype01 data);
struct Dtype01 setData(char name[81], int age);

int main(){

    struct Dtype01 data[2];

    data[0] = setData("Anakin", 9);
    data[1] = setData("Luke", 26);
    printData(data[0]);
    printData(data[1]);

    return 0;
}

int printData(struct Dtype01 data){
    printf("Name:%s\t\tAge:[%d]\n",data.name,data.age);
    return 0;
}

struct Dtype01 setData(char name[81], int age){
    struct Dtype01 dummy;
    strcpy(dummy.name,name);
    dummy.age = age;
    return dummy;
}
