#include <stdio.h>


int main(){
    char input[30];
    printf("Please enter what you want to say: ");
    scanf("%30s", &input);
    printf("Hello this is %s\n", input);
    return 0;
}
