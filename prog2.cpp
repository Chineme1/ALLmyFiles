#include <vector>
#include <iostream>
#include <tuple>
#include "prog2.hpp"

using namespace std;
/*
void permute(string str, string out)
{
	if(str.size()==0){cout<< out<<endl; return;}
	cout<< out << endl;
	for(int i=0; i<str.size(); i++)
	{
		permute(str.substr(1), out+str[0]);
//		cout<< "str[1]:" << str[1]<<endl;
	//	cout<<"str[0]:" <<str[0] <<endl;
		rotate(str.begin(),str.begin()+1,str.end());
	}


}
*/
void perm(std::vector<int> va, int target, std::vector<int>& v,std::vector<int>&cont)
{
	int sum=0;
	for(unsigned int i=0; i<v.size(); i++)
	{
		sum+= v[i];
		//cout<<"sum: " <<sum <<endl;
	}

	if(sum ==target){/*cout<<"sum: "<<sum<<endl;cout <<"Eureka\n"<<endl;*/
	if(cont.size()==0){for(unsigned int i =0; i<v.size(); i++){/*cout <<v[i]<<endl;*/cont.push_back(v[i]);}}return;}
	//cout<<"v.size(): "<<v.size()<<endl;
	for(unsigned int j=0; j<va.size(); j++)
	{
		std::vector<int> remain;
		for(unsigned int k=j; k<va.size(); k++)
		{
			if(k==j){continue;}
			remain.push_back(va[k]);			
		}
		std::vector<int>v1 =v;
		v1.push_back(va[j]);
		perm(remain, target, v1, cont);		
	}
	return;
}

std::tuple<bool, std::vector<unsigned>> isSubsetSum(const std::vector<int>& itemVals, int target)
{
	std::vector<int> v;
	std::vector<int> cont;
	std::vector<unsigned>vtemp;
	perm(itemVals, target, v, cont);
	//cout<<"v size: "<<cont.size()<<endl;
	int sum=0;
	int s=0;
	for(unsigned int i=0; i<itemVals.size(); i++)
	{
		s+=itemVals[i];
		vtemp.push_back(i);
	}
	if(s==target){return std::tuple<bool, std::vector<unsigned>>{true, vtemp};}
	std::vector<unsigned> final;
	if(cont.size()!= 0){for(unsigned int j=0,i=0; i<itemVals.size();i++)
	{
		//cout<<"i "<<i<<endl;
		if(cont[j]==itemVals[i])
		{
			sum+=cont[j];
			j+=1;
			final.push_back(i);
			i=0;
		//	cout<<"sum: "<<sum <<endl;
		//	cout << cont[j] <<" is cont"<<endl;
		}
		//cout<<"cont[2] "<<cont[3]<<endl;
		if(target == sum){break;}
	}}
	//cout<<"sum: " <<sum<<endl; 
	if(final.size()==0){return std::tuple<bool, std::vector<unsigned>>{false,final};}
	else{ return std::tuple<bool, std::vector<unsigned>>{true, final};}

}
/*
int main()
{
	//string str ="ABC";
	//permute(str,"");
	//std::cout <<std::boolalpha;
	std::vector<int>a;
	a.push_back(5);
	a.push_back(4);
	a.push_back(-3);
	a.push_back(12);
	a.push_back(10);
	//a.push_back(8);
	a.push_back(17);
	a.push_back(2);
	a.push_back(9);
	a.push_back(20);
	a.push_back(15);
	a.push_back(-5);
	a.push_back(-8);
	a.push_back(6);
	a.push_back(101);
	a.push_back(200);
	a.push_back(300);
	a.push_back(400);
	std::vector<unsigned> a2;
	//perm(a,87,a2);
	auto result = isSubsetSum(a,6);
	std::cout<< std::get<bool>(result)<< '\n';
	auto& indices3 = std::get<1>(result);
	for(auto index : indices3) std::cout<< index<< ' ';
	return 0;

}*/
void perm2(std::vector<int> va,  int target, std::vector<int>& v, std::vector<int>&cont,std::vector<int>&cont2)
{
	int sum=0;
	for(unsigned int i=0; i<v.size(); i++)
	{
		sum+= v[i];
		//cout<<"sum: " <<sum <<endl;
	}
	

	if(sum ==target){/*cout<<"sum: "<<sum<<endl;cout <<"Eureka\n"<<endl;*/
	if(cont.size()==0)
	{for(unsigned int i =0; i<v.size(); i++){cont.push_back(v[i]);}}
	if(1==1)
	{	for(unsigned int i=0; i<v.size();i++){cont2.push_back(v[i]);}}return;}
	//if(cont.size()==0)
        //{for(int i =0; i<v.size(); i++){cout <<"v[i]="<<v[i]<<endl;cont.push_back(v[i]);}}
	//cout<<"v.size(): "<<v.size()<<endl;
	for(unsigned int j=0; j<va.size(); j++)
	{
		std::vector<int> remain;
		//std::vector<int> remain2;
		for(unsigned int k=j; k<va.size(); k++)
		{
			if(k==j){continue;}
			remain.push_back(va[k]);			
		}
		std::vector<int>v1 =v;
		//std::vector<unsigned>vf =v;
		//vf.push_back(va[va.size()-1-j]);
		v1.push_back(va[j]);
		perm2(remain, target, v1, cont, cont2);		
	}
	return;
}
/*
std::tuple<bool, std::vector<unsigned>, std::vector<unsigned>> isSetPartionable(const std::vector<int>& vals)
{
	std::vector<int>b;
	std::vector<int>a1;
	std::vector<unsigned>a4;
	std::vector<unsigned>a3;
	std::vector<int> a2;
	int num=0;
	for(unsigned int i=0; i <vals.size(); i++)
	{
		num+=vals[i];
	}
	if(num%2==1){return std::tuple<bool, std::vector<unsigned>, std::ve*/

std::tuple<bool, std::vector<unsigned>, std::vector<unsigned>> isSetPartionable(const std::vector<int>& vals)
{
	std::vector<int>b;
	std::vector<int>a1;
	std::vector<unsigned>a4;
	std::vector<unsigned>a3;
	std::vector<int> a2;
	int num=0;
	for(unsigned int i=0; i <vals.size(); i++)
	{
		num+=vals[i];
	}
	//std::cout <<"num " <<num <<" is odd"<<std::endl;
	//std::cout <<"num%2 " << num%2 << " is ?"<<std::endl;
	//std::cout<<" num is: " << -24%2<<std::endl;
	if(num%2!=0){return std::tuple<bool, std::vector<unsigned>, std::vector<unsigned>>{false,a3,a4};}
	num = num/2;
	perm2(vals,num,a2,b,a1);
	int blu=0;
	if(b.size()!=0){for(unsigned int i=0,j=0;i<vals.size(); i++)
	{
		if(vals[i]==b[j])
		{
			j+=1;
			blu+=b[j];
			a4.push_back(i);
			i=0;
		}
		if(blu==num){break;}
	}}

	int sum=0;
	if(a1.size()!=0){for(unsigned int i=0, j=b.size(); i<vals.size();i++)
	{
		if(vals[i] == a1[j])
		{
			j+=1;
			sum +=a1[j];
			a3.push_back(i);
			i=0;
		}
		if(sum ==num)
		{
			break;
		}
	}}
	if(b.size()!=0&&a1.size()!= 0){return std::tuple<bool, std::vector<unsigned>, std::vector<unsigned>>{true, a4, a3};}
	else{return std::tuple<bool, std::vector<unsigned>, std::vector<unsigned>>{false, a3, a4};}
//	perm2(vals,num,a2,b,a1);//b is good
}
