#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    /*
    0 = 거짓, 그외는 참
    while ( condition )
    {
        반복 실행할 명령문1;
        반복 실행할 명령문2;
        ...
        반복 실행할 명령문n;
    }    
    */
    int i = 0; 
    while (i < 5)
        printf("i = %d\n", ++i);

    char ch = 'A';
    while( ch <= 'Z' ) printf("%c", ch++);

    ch = 'z';
    while (ch >= 'a') printf("%c", ch--);

    char tmp;
    while (ch != 'x')
    {
        printf("\n아무키나 입력하세요. x키를 입력하면 종료됩니다 : ");
        scanf("%c", &ch);
        scanf("%c", &tmp);   // 비워짐

        // 대문자 입력되었다면 소문자로 변환
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
    }

    // 누적합 구하기 : 1부터 100까지의 합을 구하시오
    int total = 0;
    i = 1;
    while (i <= 100)
    {
        total += i;
        i++;
    }
    printf("total = %d\n", total);

    /*
    구구단을 출력하세요

    입출력 형식)
    단수를 입력하세요 >>> 6
    6단
    6 x 1 = 6
    6 x 2 = 12
    6 x 3 = 18
    ...
    6 x 9 = 54
    */
    int dan;
    int gop = 1;
    printf("단수를 입력하세요 >>> ");
    scanf("%d", &dan);
    printf("%d단\n", dan);
    while (gop <= 9)
    {
        printf("%d x %d = %d\n", dan, gop, dan * gop);
        gop += 1;
    }

    i = 0;
    int j = 0;
    while (i < 5)
    {
        j = 0;
        while (j < 5)
        {
            printf("#");
            j++;
        }
        i++;
        printf("\n");
    }

    // 2 ~ 9단
    /*
    2단
    2 x 1 = 2
    2 x 2 = 4
    2 x 3 = 6
    ...
    2 x 9 = 18

    3단
    3 x 1 = 2
    3 x 2 = 4
    3 x 3 = 6
    ...
    3 x 9 = 18

    ... 

    9단
    9 x 1 = 2
    9 x 2 = 4
    9 x 3 = 6
    ...
    9 x 9 = 18    
    */
    

    printf("\nwhile문이 종료됨!\n");


    return 0;
}
