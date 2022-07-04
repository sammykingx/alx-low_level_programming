#include <stdio.h>
#include "0-object_like_macro.h"
#include "1-pi.h"
#include "3-function_like_macro.h"
#include "4-sum.h"
/**
 * main - program compilation starts from main
 * Description: testing all macros used if all is in order
 * author: sammykingx
 * Return: 0 (success) 1 (fail)
 */
int main(void)
{
	int a;

	a = 10 + SIZE;
	printf("adding macro( SIZE ) to 10 is :%d:\n", a);
	printf("value of macro PI is:%.11f:\n", PI);
	a = ABS(-10) * 10;
	printf("a is:%d:\n", a);
	a = SUM(20, 20);
	printf("macro SUM:%d:\n", a);
	printf("the compiled file is - %s\n", __FILE__);
	return (0);
}
