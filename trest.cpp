#include <vector>
#include <iostream>
#include <tuple>
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
static int largest =0;
/*std::tuple<bool, std::vector<unsigned>> isSubsetSum1(const std::vector<int>& itemVals, int target)
{
	std::vector<unsigned> v;
	std::vector<int> cont;
	perm1(itemVals, target, v, cont);
	//cout<<"v size: "<<cont.size()<<endl;
	int sum=0;
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

												}*/
void perm1(std::vector<int> va, int target, std::vector<unsigned> v/*,std::vector<int>&cont*/)
{
	int sum=0;
	for(unsigned int i=0; i<v.size(); i++)
	{
		sum+= v[i];
		//cout<<"sum: " <<sum <<endl;
	}
	if(sum > largest){/*cout<<"sum: "<<sum<<endl;cout <<"Eureka\n"<<endl;*/
/*int s =0; for(unsigned int k=0; k<cont.size(); k++){s+=cont[k];}if(largest > s){for(unsigned int i =0; i<v.size(); i++){cont.push_back(v[i]);}}*/largest = sum;}
	//if(sum > largest){/*cout<<"sum: "<<sum<<endl;cout <<"Eureka\n"<<endl;
	//if(cont.size()==0){for(unsigned int i =0; i<v.size(); i++){/*cout <<v[i]<<endl;cont.push_back(v[i]);}}return;}
	for(unsigned int j=0; j<va.size(); j++)
	{
		std::vector<int> remain;
		for(unsigned int k=j+1; k<va.size(); k++)
		{
			//if(k==j){continue;}
			remain.push_back(va[k]);			
		}
		std::vector<unsigned>v1 =v;
		v.push_back(va[j]);
		perm1(remain, target, v/*, cont*/);		
	}
	return;
}

std::tuple<bool, std::vector<unsigned>> isSubsetSum1(const std::vector<int>& itemVals, int target)
{
	std::vector<unsigned> v;
	std::vector<int> cont;
	perm1(itemVals, target, v/*, cont*/);
	//cout<<"v size: "<<cont.size()<<endl;
	int sum=0;
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
void perm(std::vector<int> va, int target, std::vector<unsigned>& v/*,std::vector<int>&cont*/)
{
	int sum=0;
	//static int b=0;
	//b++;
	if(v.size()== target){for(unsigned int i=0; i<v.size(); i++)
	{
		sum+= v[i];
		cout<<v[i]<<" " ;
	//	cout<< b << " should be";
	}
	cout<< endl;
	}

	if(sum ==target){/*cout<<"sum: "<<sum<<endl;cout <<"Eureka\n"<<endl;*/
	/*if(cont.size()==0){for(unsigned int i =0; i<v.size(); i++){cont.push_back(v[i]); }} return;*/}
	//cout<<"v.size(): "<<v.size()<<endl;
	for(unsigned int j=0; j<va.size(); j++)
	{
		std::vector<int> remain;
		for(unsigned int k=j+1; k<va.size(); k++)
		{
			//if(k==j){continue;}
			remain.push_back(va[k]);			
		}
		std::vector<unsigned>v1 =v;
		v1.push_back(va[j]);
		perm(remain, target, v1/*, cont*/);		
	}
	return;
}

std::tuple<bool, std::vector<unsigned>> isSubsetSum(const std::vector<int>& itemVals, int target)
{
	std::vector<unsigned> v;
	std::vector<int> cont;
	perm(itemVals, target, v/*, cont*/);
	//cout<<"v size: "<<cont.size()<<endl;
	int sum=0;
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

int main()
{
	//string str ="ABC";
	//permute(str,"");
	//std::cout <<std::boolalpha;
	//static int largest =0;
	std::vector<int>a;
	a.push_back(5);
	a.push_back(4);
	a.push_back(3);
	a.push_back(12);
	a.push_back(10);
//	a.push_back(-20);
//	a.push_back(-40);



	std::vector<int>b;
	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	b.push_back(4);
	b.push_back(5);
	/*a.push_back(8);
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
	a.push_back(400);*/
	std::vector<unsigned> a2;
	//perm(a,87,a2);
	//cout << "The largest value is: "<< largest << endl;
	auto result = isSubsetSum1(a,31);
	std::cout<< std::get<bool>(result)<< '\n';
	auto& indices3 = std::get<1>(result);
	for(auto index : indices3) std::cout<< index<< ' ';
	cout << "The largest value is: "<< largest << endl;
	auto resultw = isSubsetSum(b, 4);
        std::cout<< std::get<bool>(resultw)<< '\n';
        auto& indices3w = std::get<1>(resultw);
        for(auto index : indices3w) std::cout << index<< ' ';
}
