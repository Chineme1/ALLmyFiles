#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

unsigned int index(string s)
{
	unsigned int i=0, j =0;
	do 
	{
		i = i *26 + s[j++] - 'a' +1;
	}
	while( j < s.size() );
	return i;
}

int main()
{
	const int n = 50000;
	vector<map<string, int>> table(n);
	cout << "table size: " << table.size() << endl;

	string s;
	int i;
	ifstream infile("names.txt");
	while (infile >> s >> i)
	{
		int ind = index(s);
		int hash = ind % table.size();
		table[hash][s] = i;
	}

	
}
