#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string str ("Please split this sentence into tokens");

	char * cstr = new char[str.length()+1];
	strcpy(cstr, str.c_str());

	char * p = strtok (cstr, " ");
	while(p!=0)
	{
		cout << p << '\n';
		p = strtok(0," ");
	}
	delete[] cstr;
}
