// 제어 문자를 사용한 출력
// \n(개행, new line) : 다음 줄로 이동
// \b(백스페이스, backspace) : 한 칸 왼쪽으로 이동
// \r(캐리지 리턴, carriage return) : 맨 앞으로 이동
// \a(알럿 경보, alert) : 

#include <stdio.h>

int main(void) {
    
    // "Hello World!"를 출력하고 줄을 바꿈(\n)
    printf("Hello World!\n");

    // 화면에 숫자를 출력하고 줄을 바꿈(\n) 
    printf("1234567890\n");

    // "Hello"를 출력하고 탭 위치로 이동(\t) 후에 "World!"를 출력하고 줄을 바꿈(\n)
    printf("Hello\tWorld!\n");

    // "Hellp"를 출력하고 한 칸 왼쪽으로 이동(\b)해 p를 o로 바꾸고 탭 위치로 이동(\t) 후에 "World!"를 출력하고 줄을 바꿈(\n)
    printf("Hellp\bo\tWorld!\n");

    // 맨 앞으로 이동(\r)해 G를 H로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)
    printf("Gello\rH\a\n");

    return 0;
}
