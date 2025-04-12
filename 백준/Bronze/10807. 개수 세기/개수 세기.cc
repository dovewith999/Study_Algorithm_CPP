#include <iostream>

using namespace std;

 int n;
 int arr[101];
 int v;

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for(int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }
  cin >> v;

  int res = 0; 
  for(int i = 0; i < n; ++i) 
  {
    if(arr[i] == v) 
      res++;
  }

  cout << res;
    
  return 0;
}