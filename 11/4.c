//4D21 �c�����M
#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("1�������͂��AEnter�������Ă�������:");
    scanf("%c",&ch);

    if(isalpha(ch) != 0) printf("�A���t�@�x�b�g�̕����ł�\n");
    if(isupper(ch) != 0) printf("�啶���ł�:��������%c�ł�\n", tolower(ch));
    if(islower(ch) != 0) printf("�������ł�:�啶����%c�ł�\n", toupper(ch));
    if(isdigit(ch) != 0) printf("�����ł�\n");
    if(isalnum(ch) != 0) printf("�A���t�@�x�b�g�̕����������ł�\n");
    if(isspace(ch) != 0) printf("�󔒋L���̂ǂꂩ�ł�\n");


    return 0;
}
