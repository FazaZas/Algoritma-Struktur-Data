#include <iostream>
#include <conio.h>

using namespace std;

int fromnull(int k);

main()
{
  int n;
  cout << "Masukkan nilai N = ";
  cin >> n;
  fromnull(n);
}
int fromnull(int k)
{
  for (int i = 0; i <= k; i++)
  {
    cout << " " << i << " ";
  }
}
