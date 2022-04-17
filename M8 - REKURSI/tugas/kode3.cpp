#include <iostream>
#include <string>
using namespace std;
string rekursif(string kata)
{
     static int j = 1, nilai = kata.length(), akhir = nilai;
     if (nilai >= j)
     {
          cout << kata[nilai - 1];
          nilai--;
          return rekursif(kata);
     }
     return "\n";
}
main()
{
     int n;
     string kalimat;
     cout << "Berikan sebuah kalimat:";
     getline(cin, kalimat);
     string kata(kalimat);
     cout << "Kata yang Anda berikan:" << kata << endl;
     cout << "Panjangnya : " << kata.length() << " karakter" << endl;
     cout << "Dibalikkan menjadi : ";
     string hasil = rekursif(kalimat);
     cout << hasil;
}
