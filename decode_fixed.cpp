#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char* argv[])
{
	//string file;
	//cin >> file;
	fstream myfile;
	myfile.open(argv[1]);
	string t;
	signed int i=0;
	signed int f=0;
	signed int s=0;
	signed int count=0;
	while(getline(myfile,t))
	{
		count+=1;
		if(t[0]=='i'){ i =t[4]-'0';}
		//cout << t <<endl;
		if(t[0]=='f'){ f =t[5]-'0';}
		if(t[0]=='s'){s=count;}
	}
	myfile.close();
	//cout<< "int is: "<< i<<endl;
	//cout<< "frac is: "<< f <<endl;
	//cout <<"count is: " << s<<endl;
	string inp;
	cout <<"Enter bit string: ";
	cin>> inp;
	int bro =inp.length();	
	while((f+i+1)!= bro)
	{
		cout <<"Wrong number of bits.\n";
		cout <<"Enter bit string: ";         	
		cin>> inp;
		bro = inp.length();
	}
//	cout <<"inp.length: " << inp.length()<<endl;
	//string is inp
	// value is i
	if(s==1)
	{
		double c;
		double sum=0;
		for(signed int k =1; k<bro;k++)
		{
			c = inp[k] -'0';
			sum += pow(2,i-k)*c;		
		}
		if(inp[0] == '1')
		{
			cout<<"Value: " << sum*-1 <<endl;
		}
		else
		{
			cout <<"Value: " << sum <<endl;
		}
	}
	else if(s==2)
	{
		int c;
		double sum=0;
		for(signed int k =0; k<bro;k++)
		{
			if(k==i){k+=1;i+=1;}
			c = inp[k] -'0';
			sum += pow(2,i-k-1)*c;
			
		}
		if(inp[i-1] == '1')
		{                                         		
			cout<<"Value: " << sum*-1 <<endl;
		}
		else
		{
			cout <<"Value: " << sum <<endl;
		}
	}
	else
	{
		int c;
		signed int d =i;
		double sum=0;
		for(signed int k =0; k<bro-1;k++)
		{                                                 	
			c = inp[k] -'0';
			//cout<<"c is: "<< c<<endl;
			//cout<< "sum is: "<< sum <<endl;
			//cout<< " pow is " << pow(2,i-k-1)<<endl;
			sum += pow(2,d-k-1)*c;
			//cout<< i-k-1 <<" is a num" << endl;
			//cout << d-k-1 <<" is a num2" <<endl;
			//cout << k << " is k"<< endl;
			//cout << i <<" is i" << endl;
			//cout<< pow(2,-4)* c<<" is pow" <<endl;
		}
		if(inp[i+f] == '1')
		{                                         	  
			cout<<"Value: " << sum*-1 <<endl;
		}
		else
		{                                                 	
			cout <<"Value: " << sum <<endl;
		}

	}
}
