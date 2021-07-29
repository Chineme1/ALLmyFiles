#include <iostream>

using namespace std;

int main()
{
	char a;
	cin >> a;
	while(cin)
	{
		if(a =='C')
		{
			//std::cout<<"It works" <<std::endl;
			int x1, x2, x3;
			cin >> x1>> x2>> x3;
			cout<< "<circle cx=\""<< x1<< "\" cy=\""<<x2 <<"\" r=\""<<x3 <<"\""<< endl;

		}
		if(a == 'R')
		{
			int y1, y2, y3, y4;
			cin >> y1>> y2>> y3>> y4;
			cout<< "<id=rect x=\>";
			//cout<< "<rect x=\""<< y1<<"\" y=\""<<y2<<"\" width=\"" << y3 <<"\" height=\""<<y4<<"\"/>"; 
		}
		cin >> a;
	}
}

