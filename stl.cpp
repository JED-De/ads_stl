#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> a;
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.pop_back();
	for (int i = 0; i < (int)a.size(); i++)
	{
		cout << a[i] << "_";
		cout << endl;
	}
	system("PAUSE");
	return 0;
}