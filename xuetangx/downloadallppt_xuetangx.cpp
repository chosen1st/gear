#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	int count[16]={0,7,7,4,8,8,6,10,12,14,14,19,15,12,14,5};
	for (int i = 1; i < 16; ++i)
	{
		count[i]++;
		while(count[i]!=0){
			cout<<"http://www.xuetangx.com/c4x/TsinghuaX/20740084X/asset/LinuxCPP"<<setw(2)<<setfill('0')<<setiosflags(ios::right)<<i<<setw(2)<<setfill('0')<<setiosflags(ios::right)<<count[i]<<".pptx"<<endl;
			count[i]--;
		}
	}
	return 0;
}
