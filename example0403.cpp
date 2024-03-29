#include <stdio.h>

/*
	==>
		int(4字节=4*8位)类型的无符号和有符号溢出时取值情况。
		中间量：0x80 00 00 00(0B1000 0000 0000 0000 0000 0000 0000 0000)(无符号：2147483648，有符号：-2147483648)
		最大值：0xFF FF FF FF(0B1111 1111 1111 1111 1111 1111 1111 1111)(无符号：4294967295，有符号：-1)
	<==
*/
void example0403()
{
	printf("=====example0403()=====\n");

	// int 
	// 中间量：0x80 00 00 00(0B1000 0000 0000 0000 0000 0000 0000 0000)(2147483648)
	// 最大值：0xFF FF FF FF(0B1111 1111 1111 1111 1111 1111 1111 1111)(4294967295)
	int i = 0xFF;
	unsigned int u = 0xFF;
	// i=255,u=255
	printf("i=%d,u=%d\n", i, u);

	i = 0xFFFF;
	u = 0xFFFF;
	// i=65535,u=65535
	printf("i=%d,u=%d\n", i, u);

	i = 0x7FFFFFFF;
	// i=2147483647,u=65535
	printf("i=%d,u=%d\n", i, u);
	i = i + 1;

	u = 0x80000000;
	// i=-2147483648,u=-2147483648
	printf("i=%d,u=%d\n", i, u);
	i = 0xFFFFFFF0;	//4294967295
	u = 0xFFFFFFF0;
	// i=-16,u=4294967280
	printf("i=%d,u=%u\n", i, u); //注意这一行有一个%u
}