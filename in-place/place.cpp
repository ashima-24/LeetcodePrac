#include<iostream>
#include<vector>

using namespace std;

void reverseString(vector<char>& s) {

	int n = s.size();
	for(int i = 0; i< (s.size())/2; ++i)
	{
		char temp  = s[i];
		s[i]  = s[n-i-1];
		s[n-i-1] = temp;

	}
	for(int i = 0; i< n; ++i)
	{
		cout<<s[i];
	}
	cout<<"\n";
}

int main()
{
	vector<char> u{'h', 'e', 'l', 'l', 'o'};
	reverseString(u);

}
