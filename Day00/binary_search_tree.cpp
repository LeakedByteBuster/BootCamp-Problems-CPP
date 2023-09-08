#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <map>
#include <ios>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map <string, int> tr;
    int n;

    cin >> n;

    for  (int  i = 0 ; i < n ; i++)
    {
        string  s;

        cin >>  s;

        if ( tr.find(s) != tr.end())
            tr[s] += 1;
        else
            tr[s] = 0;
    }
    int i = 0;
    string l;
    map<string, int>::iterator it = tr.begin();
    for (; it != tr.end() ; it++)
    {
        if (i <= (*it).second)
        {
            i = (*it).second;
            l = (*it).first;
        }

    }
    cout << l  << " " << i +1 << "\n";
    return (0);
}

