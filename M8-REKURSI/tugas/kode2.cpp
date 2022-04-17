#include <iostream>
#include <conio.h>

using namespace std;

int kenull(int k);
main()
{
  int n;
  cout << "Masukkan nilai N =";
  cin >> n;
  kenull(n);
}
int kenull(int k)
{

  for (int i = k; i >= 0; i--)
  {
    cout << " " << i << " ";
  }
}