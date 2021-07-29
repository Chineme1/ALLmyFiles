#include <iostream>
#include <cstring>
#include <cstring>

using namespace std;

int main()
{
	string str("abcdefghijkl");

	char * cstr = new char [str.length()+1];
	strcpy (cstr, str.c_str());


	cout << " original: " << str << endl;
	cout << " c-string: " << cstr << endl;

	str.replace(0,5,"mnopq");
	cout << "after replace:" << endl;

	cout << " original: " << str << endl;
	cout << " c-string: " << cstr << endl;
}
