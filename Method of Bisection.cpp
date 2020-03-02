// Method of Bisection.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<iostream>
#include <stdio.h>
#include <Windows.h>
#include <math.h>
/****************
author:WANG_zibi
time:2020/2/25
title:二分法求方程近似值
course:数值计算方法
****************/
/*
using namespace std;
const int N = 1e6 + 5;
typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;
#define f(i, a, b) for (int i = (a); i <= (b); ++i)
const double eps = 1e-4;//精度
double func(double x) //函数
{
	return x * x * x + 4 * x * x - 10.0;
}
int main()
{
	double left, right, mid, answer, sum;//左右区间，答案等变量生命
	left = 1, right = 2;
	mid = (left + right) / 2.0;
	sum = func(mid);//
	answer = mid;
	while (abs(sum) > eps)
	{
		if (sum > 0)
		{
			right = mid;
			mid = (right + left) / 2.0;
			sum = func(mid);
			answer = mid;
		}
		else {
			left = mid;
			mid = (right + left) / 2.0;
			sum = func(mid);
			answer = mid;
		}
	}

	cout << "最终的答案为：" << answer << '\n';
	return 0;
}*/

#include <stdio.h>
#include <Windows.h>
#include <math.h>

#define WUCHA (0.0005)

double f_x(double x);
double erfenfa();

int cnt = 0;

int main()
{
	// 二分法
	printf("二分法：%lf\n", erfenfa());
	printf("计算次数%d\n", cnt);

	system("pause");
	return 0;
}


// f(x)
double f_x(double x)
{
	return (x*x*x+4.0*x*x-10.0);
}

// f'(x)


// 二分法
double erfenfa()
{
	cnt = 0;
	double left = 1;
	double right =2;
	double x = (left + right) / 2;
	double ret = f_x(x);

	while (fabs(ret - 0) <= WUCHA)
	{
		cnt++;
		if (ret > 0)
		{
			right = x;
		}
		if (ret < 0)
		{
			left = x;
		}
		x = (left + right) / 2;
		ret = f_x(x);
	}
	return x;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
