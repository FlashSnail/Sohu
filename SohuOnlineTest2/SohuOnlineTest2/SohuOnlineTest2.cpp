// SohuOnlineTest2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num;
	while (cin>>num)
	{
		if (num%2 == 0 || num%5 == 0)
		{
			continue;
		}
		unsigned long long i;
		unsigned long long sum = 0;
		unsigned long long ans = 0;
		for (i = 1; ; i *= 10)
		{
			sum += i;
			ans++;
			if (sum % num == 0)
			{
				break;
			}			
		}
		cout << ans << endl;
	}
	system("pause");
	return 0;
}

