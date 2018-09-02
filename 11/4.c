//4D21 田口晴信
#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("1文字入力し、Enterを押してください:");
    scanf("%c",&ch);

    if(isalpha(ch) != 0) printf("アルファベットの文字です\n");
    if(isupper(ch) != 0) printf("大文字です:小文字は%cです\n", tolower(ch));
    if(islower(ch) != 0) printf("小文字です:大文字は%cです\n", toupper(ch));
    if(isdigit(ch) != 0) printf("数字です\n");
    if(isalnum(ch) != 0) printf("アルファベットの文字か数字です\n");
    if(isspace(ch) != 0) printf("空白記号のどれかです\n");


    return 0;
}
