#include <stdio.h>

int main()
{
     printf("=== Assignment Operators ===\n\n");

     int num = 10;
     printf("Initial value: num = %d\n\n", num);

     num += 5; // num = num + 5
     printf("num += 5  =>  num = %d\n", num);

     num -= 3; // num = num - 3
     printf("num -= 3  =>  num = %d\n", num);

     num *= 2; // num = num * 2
     printf("num *= 2  =>  num = %d\n", num);

     num /= 4; // num = num / 4
     printf("num /= 4  =>  num = %d\n", num);

     num %= 3; // num = num % 3
     printf("num %%= 3  =>  num = %d\n", num);

     return 0;
}
