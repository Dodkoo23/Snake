#include<iostream>
using namespace std;

int main()
{

    cout << "Zadaj cislo od 1-3" << endl;
    int cislo;
    cin >> cislo;

    switch (cislo) {
     case 1:
         cout << "Som hladny" << endl;
         break;
     case 2:
         cout << "Do zbrane" << endl;
         break;
     case 3:
         cout << "nananana" << endl;
         break;
     default:
         cout << "Toto slovo nepoznám" << endl;
         break;

         return 0;

    }
}
       