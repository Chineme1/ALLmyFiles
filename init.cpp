#include <iostream>
using namespace std;

class V
{
	public:
		int x, y, z;
};

double f[3];
int nglobal;

int main()
{
	V a;
	cout << "V a;   "<< a.x << " " << a.y << " " << a.z << endl;
	cout << "double f[3]; "<< f[0] << " " << f[1] << " " << f[2] << endl;
	cout << "int nglobal   " << nglobal << endl;
	int n;
	cout << "int n;    "<< n << endl;
	static int ns;
	cout << "static int ns; "<< ns << endl;
}
