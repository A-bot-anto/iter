#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char str[10];
    const char s[2] = " ";
    char * token;
    char * ftoken [3];


    printf("Enter a string: ");
    fgets(str,10,stdin);
    printf("Here's your string: %s\n", str);

    token = strtok(str, s);

    int i = 0;

    while( token != NULL ) {
        ftoken[i] = token;
        token = strtok(NULL, s);
        i++;
    }

    float primoNum = strtof(ftoken[0],NULL);
    float secondoNum = strtof(ftoken[2],NULL);

    if(ftoken[1][0] == '+'){
        printf("somma = %.2f",primoNum+secondoNum);
    }else if(ftoken[1][0] == '-'){
        printf("sottrazione = %.2f",primoNum-secondoNum);
    }else if(ftoken[1][0] == 'x'){
        printf("moltiplicazione = %.2f",primoNum*secondoNum);
    }else if(ftoken[1][0] == '/'){
        printf("divisione = %.2f",primoNum/secondoNum);
    }else{
        printf("il segno inserito non è un operatore");
    }

    return 0;
}
