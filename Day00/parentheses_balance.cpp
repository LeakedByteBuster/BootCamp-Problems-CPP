#include <iostream>
#include <string>
#include <stack>
#include <ios>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    cin.ignore();

    while (n--){
        string  str;
        stack<char>  s;

        cin >> str;
        for (char c: str){
            if (s.empty()){
                s.push(c);
            } else if ((c == ')' && !s.empty() && s.top() == '(') \
                    || ( c == ']' && !s.empty() && s.top() == '[')){
                s.pop();
            } else{
                s.push(c);
            }
        }
        if (s.empty())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return (0);
}