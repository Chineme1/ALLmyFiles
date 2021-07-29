#include <iostream>
using namespace std;

class C; class G; class T; class A;

class Nucleotide
{
	public:
		virtual char name(void) = 0;
		virtual bool binds(Nucleotide& n) = 0;
		virtual bool binds(C& n) = 0;
		virtual bool binds(G& n) = 0;
		virtual bool binds(T& n) = 0;
		virtual bool binds(A& n) = 0;

};

class C : public Nucleotide
{
	public:
		virtual char name(void) {return 'C';}
		virtual bool binds(Nucleotide& n) {return n.binds(*this);}
		virtual bool binds(C& n) {return false;}
		virtual bool binds(G& n) {return true;}
		virtual bool binds(T& n) {return false;}
		virtual bool binds(A& n) {return false;}
};

class G : public Nucleotide
{
	public:
		virtual char name(void) {return 'G';}
		virtual bool binds(Nucleotide& n) {return n.binds(*this);}
		virtual bool binds(C& n) {return true;}
		virtual bool binds(G& n) {return false;}
		virtual bool binds(T& n) {return false;}
		virtual bool binds(A& n) {return false;}
};
class T : public Nucleotide
{
	public:
		virtual char name(void) {return 'T';}
		virtual bool binds(Nucleotide& n) {return n.binds(*this);}
		virtual bool binds(C& n) {return false;}
		virtual bool binds(G& n) {return false;}
		virtual bool binds(T& n) {return false;}
		virtual bool binds(A& n) {return true;}
};

class A : public Nucleotide
{
	public:
		virtual char name(void) {return 'A';}
		virtual bool binds(Nucleotide& n) {return n.binds(*this);}
		virtual bool binds(C& n) {return false;}
		virtual bool binds(G& n) {return false;}
		virtual bool binds(T& n) {return true;}
		virtual bool binds(A& n) {return false;}
};


int main()
{
	Nucleotide *n1 = new A;
	Nucleotide *n2 = new C;
	Nucleotide *n3 = new G;
	Nucleotide *n4 = new T;

	cout << n1->name() << " binds to " << n2->name() <<" ? " << boolalpha << n1->binds(*n2) <<endl;

	cout << n3->name() << " binds to " << n4->name() <<" ? " << boolalpha << n3->binds(*n4) <<endl;

	cout << n2->name() << " binds to " << n3->name() <<" ? " << boolalpha << n2->binds(*n3) <<endl;

}
