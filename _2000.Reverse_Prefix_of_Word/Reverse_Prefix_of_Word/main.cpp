#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ss;
    string sss;
    char ch;
    cin>>ch;
    int n=s.size();
    for(int i=0;i<s.size();i++)
    {
        if(ch==s[i])
        {

            ss = s.substr(0, i+1);
            sss=s.substr(i+1,n-1);
            reverse(ss.begin(),ss.end());
          cout<<ss<<sss<<endl;
          return 0;

        }

    }
    cout<<s<<endl;


    return 0;
}



//another simple solution



class Solution {
public:
    string reversePrefix(string word, char ch) {
      int i=word.find(ch);
      if(i!=-1)
      {
        reverse(word.begin(),word.begin()+i+1);
      }
        return word;
    }
};
