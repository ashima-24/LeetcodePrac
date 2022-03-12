#include<iostream>
#include<string>

using namespace std;

bool isPalin(int x)
{

	string pack = "";

	int rem = 0;

	while(x>0 || x<0)
	{
		rem  = x % 10;
		x = x/10;
	//	cout<<"x = "<<x<<"\n";
		int g = rem;
	//	cout<<"g = "<<g<<"\n";
		string s = to_string(g);
		pack += s;
		
	//	cout<<"pack = "<<pack<<"\n";		
	}
 	
	for(int i = 0, l = pack.length()-1; i< pack.length()/2; ++i, --l)
	{
	//	cout<<"val = "<<pack[i]<<" "<<pack[l]<<"\n";

		if(pack[i] != pack[l])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int x = -121;

	bool val = 	isPalin(x);

	cout<<"val = "<<val;
}
