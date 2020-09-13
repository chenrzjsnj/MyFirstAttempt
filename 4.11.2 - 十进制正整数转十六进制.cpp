#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int inPut=0;int maxpower=0;
	printf("请输入十进制正整数：");cin>>inPut;
	cout<<'\n';printf("相应的十六进制数为："); 
	for(;pow(16,maxpower)<=inPut;maxpower++);
	for(maxpower=maxpower-1;maxpower>=0;maxpower--)	
		{
		switch(inPut/(int(pow(16,maxpower))))
			{case 10:cout<<"A";break;
			case 11:cout<<"B";break;
			case 12:cout<<"C";break;
			case 13:cout<<"D";break;
			case 14:cout<<"E";break;
			case 15:cout<<"F";break;
			default:cout<<inPut/(int(pow(16,maxpower)));}
		
		if(inPut/(int(pow(16,maxpower)))!=0)
			{inPut=inPut%(int(pow(16,maxpower)));}
		}
	cout<<'\n'<<'\a';//Make a sound
	system("PAUSE");//Console
	return 0;
}
