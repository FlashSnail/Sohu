// SohuOnlineTest1.cpp : 定义控制台应用程序的入口点。
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
	int target;
	int num;
	int s;
	int sum = 0;
	vector<int> set;
	while (cin>>target)
	{
		cin >> num;
		for (int i = 0; i < num; i++)
		{
			cin >> s;
			set.push_back(s);
		}
		sort(set.begin(), set.end());
		vector<int>::iterator iter = set.begin();
		while (sum != target)
		{
			if ((sum += *iter) <= target )
			{
				cout << *iter << " ";
			}
			else
			{
				iter += 1;
			}
		}
	}
	system("pause");
	return 0;
}

