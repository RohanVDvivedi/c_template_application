#include<stdio.h>
#include<stdlib.h>

#include<capp/capp.h>
#include<capp/print_temp.h>

int main()
{
	temp t;
	init_temp(&t, 20, "Hello World!!");
	print_temp_test(t);
	return 0;
}