#include <iostream>
using namespace std;
int main()
{
	double wages[3]={10000.0,20000.0,30000.0};
    short stacks[3]={3,2,1};
    double *pw=wages;
    short *ps=&stacks[0];
    cout<<"pw = "<<pw<<", *pw = "<<*pw<<endl;
	return 0;
}
