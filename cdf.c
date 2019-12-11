
#include<stdio.h>
#include<Windows.h>
int get_max(int x, int y)
{
	return (x > y) ? (x) : (y);
}
int main()
{
	int num1 = 10;
	int num2 = 10;
	int max =get_max(num1, num2);
	printf(" max = %d\n", max);
	system("pause");
	return 0;
}