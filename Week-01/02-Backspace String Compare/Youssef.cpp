#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "ab#c", t = "ad#c";
    vector<char> sStack ,tStack;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!='#')
        {
            sStack.push_back(s[i]);
        }else{
            sStack.pop_back();
        }

    }
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i]!='#')
        {
            tStack.push_back(t[i]);
        }else{
            tStack.pop_back();
        }
    }
    if (sStack.size()!=tStack.size())
    {
        return false;
    }else{
        for (int i = 0; i <sStack.size() ; i++)
        {
            if(sStack[i]!=tStack[i]){
             cout<<"false";
                return false;
        }
        cout<<"ttt";
        return true;

    }
}
}
