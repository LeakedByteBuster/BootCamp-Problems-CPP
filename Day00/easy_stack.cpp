#include <iostream>
#include <stack>
#include <vector>
#include <ios>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> in;
    int n = 0;
    int num = 0;

    cin >> n;
    while(n--){
        cin >> num;
        if (num == 1){
            cin >> num;
            in.push(num);
        }
        else if (num == 2){
            if (!in.empty())
                in.pop();
        }
        else if (!in.empty())
            cout << in.top() << "\n";
        else
            cout << "Empty!\n";
    }
    return (0);
}