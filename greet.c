#include<stdio.h>

int main() {
    char ch[7];
    scanf("%c", &ch);
    greet(ch);
    return 0;
}

void greet(char ch[]) {
    printf("hello %c",ch);
}