#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

bool smaller(int i, int j)
{
	return i*i < j*j;
}

int main()
{
	int array[] = {-9,-1,8,2,-7,-3,6,4,-5};
	vector<int>v;
	v.assign(array, array+sizeof(array)/sizeof(int));

	for ( unsigned int i=0; i < v.size(); i++)
		cout<< v[i] << " ";
	cout<< endl;
	
	sort(v.begin(), v.end(), less<int>());

	cout << "after sort using less<int>:" << endl;
	for( unsigned int i =0; i < v.size(); i++)
		cout <<v[i] << " ";
	cout << endl;

	sort(v.begin(), v.end(), smaller);
	cout<< "after sort using smaller:" << endl;
	for ( unsigned int i = 0; i< v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
