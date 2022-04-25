#include <stdio.h>

int main(void)
{
   int number1 , number2 ;
    printf('Saisissez deux entiers\n');
    scanf("%d %d" , &number1 ,&number2);
    int prod = number1 * number2;
    printf('%d', prod);

    return 0;
}
