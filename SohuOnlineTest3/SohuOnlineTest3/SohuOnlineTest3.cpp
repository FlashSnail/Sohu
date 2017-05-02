// SohuOnlineTest3.cpp : 定义控制台应用程序的入口点。
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
	string org;
	string passWord;
	vector<int> order{ 2, 1, 5, 4, 3, 7, 6, 10, 9, 8 };
	string temp;
	while (cin>>org)
	{
		cin >> passWord;
		for (int i = 0; i < passWord.length(); i++)
		{
			if (passWord[i] == 'A')
			{
				passWord[i] = 'Z';
			}
			else
			{
				passWord[i] = passWord[i] - 1;
			}			
		}
		temp = passWord;
		for (int i = 0; i < passWord.length(); i++)
		{
			temp[i] = passWord[order[i] - 1];
		}
		if (temp == org)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	system("pause");
	return 0;
}

