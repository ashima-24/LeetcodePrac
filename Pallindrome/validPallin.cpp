#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

bool isPallindrome(string s)
{
	string valid = "";
        
        for(int i = 0; s[i] != '\0'; ++i)
        {
            if(isalnum(s[i]))
            {
		char c = tolower(s[i]);
                valid += c;
            }
        }
       cout<<valid<<"\n"; 
        for(int i = 0, l = valid.length() -1; valid[i] != '\0'; ++i, --l)
        {
            cout<<valid[i]<<" "<<valid[l]<<"\n";
		if(valid[i] != valid[l])
            {
                return false;
            }
        }
        
        return true;
}

int main()

{
	
	string s = "A man, a plan, a canal: Panama"; 
	bool res = isPallindrome(s);
	cout<<res<<"\n";

}
