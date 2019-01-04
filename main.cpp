#include <iostream>

using namespace std;

int main()
{int p;
    cout << " Program Konversi Nilai " ; cout <<endl;
    cout << " Masukan Nilai Yang Di Peroleh : ";cin>>p;cout <<endl;
    if (p>=90)
        cout<<" A ";
        else
        if(p>=80)
            cout << " B ";
        else
        if (p>=70)
            cout << " C ";
        else
        if (p>=60)
                cout<< " D ";
        else
            cout << " E ";

            return 0;
    }

