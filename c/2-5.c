// 10진수를 8진수, 16진수로 출력 

#include <stdio.h>

int main(void) {
    printf("%o\n", 12);     // 10진수를 8진수로 출력
    printf("%x\n", 12);    // 10진수를 16진수 소문자로 출력
    printf("%X\n", 12);    // 10진수를 16진수 대문자로 출력

    return 0;
}
