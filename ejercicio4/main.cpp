include <iostream>

using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  unsigned long long N;
  cin >> N;
  
  int r = N % 10;
  int m = ((r*(r+1))/2)%9;
  if (m == 0)
  {
    m = 9;
  }
  cout << m;
  
  return 0;
}
