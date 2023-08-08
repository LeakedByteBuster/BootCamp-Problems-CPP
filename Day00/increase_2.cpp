#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> line(n);
    for (int i = 0; i < n; i++)
        getline(cin, line[i]);
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        istringstream in(line[i]);
        while (in >> num){
            num = (num >= 0) * (num + 2) + (num < 0) * num;
            cout << num << " ";
        }
        cout << endl;
    }
    return (0);
}
