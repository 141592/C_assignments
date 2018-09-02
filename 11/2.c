//4D21 “cŒû°M
#include <stdio.h>
#include <string.h>

int main(){
    char str1[81] = "ABCDEF";
    char str2[81] = "ABcdef";
    char str3[81], str4[81];

    printf("1:[%s]\n",strcpy(str3,str1));
    printf("==%s==%s==\n\n",str3,str1);

    printf("2:[%s]\n",strcat(str3,str2));
    printf("==%s==%s==\n\n",str3,str2);

    strncpy(str4,str1,3);
    str4[3] = '\0';

    printf("==%s==%s==\n\n",str4,str1);
    if(strncmp(str1,str2,2) == 0){
        printf("ğŒ‚ğ–‚½‚µ‚Ü‚µ‚½\n");
    }else{
        printf("else‚É‚È‚è‚Ü‚µ‚½\n");
    }

    return 0;
}
