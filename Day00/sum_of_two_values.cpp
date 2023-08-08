#include <iostream>
#include <ios>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int N, K, in, i;
    cin >> N >> K;
    map <int, int> map;
    i = 1;
    while (N--){
        cin >> in;
        int needed = K - in;
        if (map.count(needed)){
            cout << map[K - in] << " " << i << "\n";
            return (0);
        }
        map[in] = i;
        i++;
    }
    cout << "IMPOSSIBLE\n";
    return (0);
}