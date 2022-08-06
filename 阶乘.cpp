#include<iostream>
#include<iomanip>
using namespace std;
long Fac(int n)
{
	if(n==0)
		return 1;
	else
		return n*Fac(n-1); 
}
int main()
{
	int n;
	long f;
	cout << "Please input a number " << endl;
	cin >> n;
	f = Fac(n);
	cout << "Result:" << f << endl;
}
