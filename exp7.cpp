#include<iostream>
using namespace std;
class son;
class father{
	int f_inc;
	public:
		father(int a)
		{
			f_inc=a;
		}
		friend void avg(father f,son s);
};
class son{
	int s_inc;
	public:
		son(int b)
		{
			s_inc=b;
		}
		friend void avg(father f,son s);
};
void avg(father f,son s)
{
	cout<<"total income of the family is="<<f.f_inc +s.s_inc;
}
int main()
{
	int a1,b1;
	cout<<"enter the father income=";
	cin>>a1;
	cout<<"enter the son income=";
	cin>>b1;
	father f(a1);
	son s(b1);
	avg(f,s);
}

