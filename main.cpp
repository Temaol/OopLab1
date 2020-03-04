
#include <iostream>
#include "Header.h"

using namespace std;



int main()
{
    int h, m, s;
    cout << "Введіть години"<< endl;
    cin >> h;
    while(h>24 || h<0)
    {
        cout<< "Введіть години ще раз"<< endl;
        cin >> h;
        
    }
      cout << "Введіть хвилини"<< endl;
    cin >> m;
    while(m>60 || m<0)
    {
           cout<< "Введіть хвилини ще раз"<< endl;
           cin >> m;
           
       }
    cout << "Введіть секунди"<< endl;
    cin >> s;
    while(s>60 || s<0)
    {
           cout<< "Введіть секунди ще раз"<< endl;
           cin >> s;
           
       }
    Time real;
    real.set(h, m, s);
    real.get();
    real.get1();
 
}
