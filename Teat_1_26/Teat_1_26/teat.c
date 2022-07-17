#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h> 
////复习
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//return 0;
//	 
//}

////初识C语言3
//int main()
//{
//
//	//字符串的结束标志："\0"
//	int a = 1;
//	int arr[] = { 1,2,3,4,5,6 };//4*6 
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//计算数组的大小，当位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[1]));  //计算数组元素的个数
//	return 0;
//
//}

//int main()
//{
//    //只要是整数，内存中存储的都是二进制补码
//	int a = 0; // 4个字节，32个bit位  00000000000000000000000000000000
//	int b = ~a;  // ~表示按(2进制)按位取反  b是有符号的整型
//	// 原码、反码、补码  原码转换为反码时的是:符号位不变其余为按位取反  反码转换为补码时就是反码+1  
//	//原码(2进制)最开头的一个数字代表符号 0代表+ 、 1代表-  ，此时b=11111111111111111111111111111111(补码)
//  //                                                        反码为11111111111111111111111111111110
//	//                                                        原码为10000000000000000000000000000001
//	printf("%d\n", b); //使用的，打印的就是这个数的原码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;// 后置++，先使用，再++
//	//int b = ++a;  //前置++，先++，再使用 
//	printf("a=%d b=%d\n", a, b);
//	return 0;
// }

// 条件操作符
//int main()
//{
//	int a=10;
//	int b=100;
//	int max = 0;
//	/*scanf("a=%d", &a);
//	scanf("b=%d", &b);*/
//
//	max = (a > b ? a : b); // 判断a是否大于b 若是则将a赋值给max 否则将b赋值给max
//	printf("%d\n", max);
//	return 0;
//}




//void test()
//{
//	static int a = 1;  //1.static修饰局部变量 局部变量的生命周期变长  
//	                   //2.static修饰全局变量 改变了变量的作用域-让静态的全局变量只能再自己所在的源文件内部使用
//	                   // 出了源文件就没法使用了
//	a++;
//	printf("a= %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//	    i++;
//	}
//
//	return 0;
//}





//int Max(int x, int y) //函数
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y)  (X>Y?X:Y)   // 宏的定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max= %d\n", max);
//	//宏的方式
//	 max = MAX(a, b);
//	printf("max= %d\n", max);
//	return 0;
//}




//指针
int main()
{
	int a = 10;
	int* p = &a;//取地址
	*p = 20;//* -- 解引用操作符
	//printf("%p\n", p);
	printf("%d\n", a);
	 
	return 0;

	/*char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	return 0;*/

}