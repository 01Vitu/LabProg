#include <stdio.h>


int main (void){
    _Bool igualdadeStrings (char s1[], char s2[]);
    char s1[20];
    char s2[20];

    printf("Entre com a primeira string: ");
    scanf("%s", s1);

    printf("Entre com a segunda string: ");
    scanf("%s", s2);


    if (igualdadeStrings(s1,s2))
    {
        printf("Sao iguais\n");
    }
    else {
        printf("Nao sao iguais\n");
    }

    system("pause");
    return 0;
}

_Bool igualdadeStrings (char s1[], char s2[]){
    int i=0;

    while (s1[i] == s2[i] && s1[i] !='\0' && s2[i] != '\0')
    {
        i++;
    }
    if(s1[i] == '\0' && s2 [i] =='\0'){
        return 1;
    }
    else{
        return 0;
    }

}
