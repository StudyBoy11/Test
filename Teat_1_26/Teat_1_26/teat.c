#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h> 
////��ϰ
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

////��ʶC����3
//int main()
//{
//
//	//�ַ����Ľ�����־��"\0"
//	int a = 1;
//	int arr[] = { 1,2,3,4,5,6 };//4*6 
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));//��������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[1]));  //��������Ԫ�صĸ���
//	return 0;
//
//}

//int main()
//{
//    //ֻҪ���������ڴ��д洢�Ķ��Ƕ����Ʋ���
//	int a = 0; // 4���ֽڣ�32��bitλ  00000000000000000000000000000000
//	int b = ~a;  // ~��ʾ��(2����)��λȡ��  b���з��ŵ�����
//	// ԭ�롢���롢����  ԭ��ת��Ϊ����ʱ����:����λ��������Ϊ��λȡ��  ����ת��Ϊ����ʱ���Ƿ���+1  
//	//ԭ��(2����)�ͷ��һ�����ִ������ 0����+ �� 1����-  ����ʱb=11111111111111111111111111111111(����)
//  //                                                        ����Ϊ11111111111111111111111111111110
//	//                                                        ԭ��Ϊ10000000000000000000000000000001
//	printf("%d\n", b); //ʹ�õģ���ӡ�ľ����������ԭ��
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;// ����++����ʹ�ã���++
//	//int b = ++a;  //ǰ��++����++����ʹ�� 
//	printf("a=%d b=%d\n", a, b);
//	return 0;
// }

// ����������
//int main()
//{
//	int a=10;
//	int b=100;
//	int max = 0;
//	/*scanf("a=%d", &a);
//	scanf("b=%d", &b);*/
//
//	max = (a > b ? a : b); // �ж�a�Ƿ����b ������a��ֵ��max ����b��ֵ��max
//	printf("%d\n", max);
//	return 0;
//}




//void test()
//{
//	static int a = 1;  //1.static���ξֲ����� �ֲ��������������ڱ䳤  
//	                   //2.static����ȫ�ֱ��� �ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	                   // ����Դ�ļ���û��ʹ����
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





//int Max(int x, int y) //����
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y)  (X>Y?X:Y)   // ��Ķ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max= %d\n", max);
//	//��ķ�ʽ
//	 max = MAX(a, b);
//	printf("max= %d\n", max);
//	return 0;
//}




//ָ��
int main()
{
	int a = 10;
	int* p = &a;//ȡ��ַ
	*p = 20;//* -- �����ò�����
	//printf("%p\n", p);
	printf("%d\n", a);
	 
	return 0;

	/*char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	return 0;*/

}