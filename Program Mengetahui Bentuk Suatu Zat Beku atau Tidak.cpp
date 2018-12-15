#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"masukkan Derajat Suhu = ";
	cin>>a;
	if (a<0)
	cout<<"suhu" <<a<< "derajat adalah zat beku";
	else if (a>0)
	cout<<"suhu" <<a<< "derajat adalah zat tidak beku";
	return 0;
}
