#include <iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    string s ="())";
    stack <char> brackets ;
    for(int i =0; i<s.size(); i++){
        if (s[i]=='(' ||s[i]=='[' || s[i]=='{' )
        {
            brackets.push(s[i]);
        }
        if (s[i]==')' ||s[i]==']' || s[i]=='}' )
        {
            if (brackets.empty()) {
                cout<< "false";
                return 0;
            }
            char t = brackets.top();
            if ((s[i]==')' && t=='(') || (s[i]==']' && t=='[') || (s[i]=='}' && t=='{')) {
                brackets.pop();
            } else {
                cout<< "false";
                return 0;
            }

        }


    }
    cout<< (brackets.empty() ? "true" : "false");
    return 0;


}
