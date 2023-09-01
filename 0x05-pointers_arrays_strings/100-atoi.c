#include "main.h"

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
	{
	s++;
	}
	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	else if (*s == '+')
	{
	s++;
	}
	while (*s >= '0' && *s <= '9')
	{
	if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (*s - '0' > (INT_MAX % 10))))
	{
	return ((sign == 1) ? INT_MAX : INT_MIN);
	}
	result = result * 10 + (*s - '0');
	s++;
	}
	return (result * sign);
}

int main(void)
{
	char str[] = "   -12345";
	int num = _atoi(str);
	_putchar('A');
	printf("Converted integer: %d\n", num);
	return (0);
}
