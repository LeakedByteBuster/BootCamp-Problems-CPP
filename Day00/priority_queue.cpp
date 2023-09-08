#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    cin.ignore();
    vector <priority_queue <int>> pq(N);

    int i, j, num;
    while (K--){
        cin >> i;
        cin >> j;
        if (i == 0){
            cin >> num;
            pq[j].push(num);
        } else if (i == 1 && !pq[j].empty()){
            cout << pq[j].top() << "\n";
        } else if (i == 2 && !pq[j].empty()){
            pq[j].pop();
        }
    }
    return (0);
}