#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdbool.h> // 使用bool值必须要添加的头文件


//例题









// 判断闰年

//该写法较为老套 不适合工程里的
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (year % 400 == 0) {
//		printf("YES");
//	}
//	else if (year % 4 == 0 && year % 100 != 0) {
//		printf("YES");
//	}
//	else {
//		printf("NO");
//	}
//	return 0;
//}
//升级写法 利用返回布尔值的形式
//bool Year(int year) {
//	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
//}
//
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	printf(Year(year) ? "YES" : "NO");// 当返回至为ture是输出YES
//	return 0;
//}

//日期加法
//int MonthDays[2][13] = {
//	{0,31,28,31,30,31,30,31,31,30,31,30,31},
//	{0,31,29,31,30,31,30,31,31,30,31,30,31},
//};
//
//bool Year(int year) {
//	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
//}
//void Add(int&year, int&month, int&day) {
//	day++;
//	if (day > MonthDays[Year(year)][month]) {
//		month++;
//		day = 1;
//	}
//	if (month > 12) {
//		year++;
//		month = 1;
//	}
//}
//int main()
//{
//	int year, month, day, n;
//	int i = 0;
//	scanf("%d-%d-%d", &year, &month, &day);
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		Add(year, month, day);
//
//	}
//	printf("%04d-%02d-%02d", year, month, day);
//	return 0;
//}

//日期减法
//int MonthDays[2][13] = {
//	{0,31,28,31,30,31,30,31,31,30,31,30,31},
//	{0,31,29,31,30,31,30,31,31,30,31,30,31},
//};
//bool Year(int year) {
//	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
//}
//void SUB(int& year, int& month, int& day) {
//	day--;
//	if (day < 1) { month--; }
//	if (month < 1) {
//		year--;
//		month = 12;
//	}
//	if (day < 1) {
//		day = MonthDays[Year(year)][month];
//	}
//}
//int main()
//{
//	int year, month, day, n;
//	int i;
//	scanf("%d-%d-%d", &year, &month, &day);
//	scanf("%d", &n);
//	for (i = 0;i < n;i++) {
//		SUB(year, month, day);
//	}
//	printf("%04d-%02d-%02d", year, month, day);
//	return 0;
//}
/////////////////////////////////////////////////////////
//计算天数
//int MonthDays[2][13] = {
//	{0,31,28,31,30,31,30,31,31,30,31,30,31},
//	{0,31,29,31,30,31,30,31,31,30,31,30,31},
//   };
//
//bool Year(int year) {
//	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
//}
//
//int DAYS(int& year, int& month, int& day) {
//	
//	int n;
//	int num = 0;
//	for (n = 0;n < month;n++) {
//		num = num+ MonthDays[Year(year)][n];
//	}
//	return num + day;
//}
//int main()
//{
//	int num;
//	int year, month,day;
//	scanf("%d-%d-%d", &year, &month, &day);
//	num = DAYS(year, month, day);
//	printf("%d",num);
//	return 0;
//}

///////////////////////////////////////////
//判断日期先后
bool Jug(int& year1, int& month1, int& day1, int& year2, int& month2, int& day2)
{
	if (year1 != year2) {
		return year1 < year2;
	}
	if (month1 != month2) {
		return month1 < month2;
	}
		return day1 < day2;
}

int main()
{
	int year1, month1, day1;
	int year2, month2, day2;
	scanf("%d-%d-%d", &year1, &month1, &day1);
	scanf("%d-%d-%d", &year2, &month2, &day2);
	printf(Jug(year1, month1, day1, year2, month2, day2)?"YES":"NO");
}