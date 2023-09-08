#include <iostream>
#include <set>

using namespace std;

int main()
{
  multiset<int> input;
  int n; cin >> n;
  int num = 0;

  for (int i = 0; i < n; i++){
    cin >> num;
    input.insert(num);
  }
  auto it = input.begin();
  while (it != input.end()){
    cout << *(it) << " ";
    ++it;
  }
  return (0);
}
