#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
    
    int a,b,c;
    bool abort = false;
    
    do
    {
    cout<< "Enter month: ";
    cin>> a;
    cout<< "Enter day: ";
    cin>> b;
    cout<< "Enter year: ";
    cin>> c;
    
    if (a == 0 ||  a>= 13 || b == 0 || b >= 32 || c == 0 || a == 4 && a == 6 && a == 9 && a == 11 && b >= 30 || a == 1 && a == 3 && a == 5 && a == 7 && a == 8 && a == 10 && a == 12 && b >=31 )
    {
        cout << "\nInvalid date" << endl;
        break;
    }
    switch(a)
    {
        case 1: if (a=1)
            cout<< "\nJanuary " << b << ", " << c << endl << endl;
            break;
        case 2: if (a=2)
        {
            cout<< "\nFebruary " << b << ", " << c << endl << endl;
            break;
        }
        case 3: if (a=3)
        {
            cout<< "\nMarch " << b << ", " << c << endl << endl;
            break;
        }
        case 4: if (a=4)
        {
            cout<< "\nApril " << b << ", " << c << endl << endl;
            break;
        }
        case 5: if (a=5)
        {
            cout<< "\nMay " << b << ", " << c << endl << endl;
            break;
        }
        case 6: if (a=6)
        {
            cout<< "\nJune " << b << ", " << c << endl << endl;
            break;
        }
        case 7: if (a=7)
        {
            cout<< "\nJuly " << b << ", " << c << endl << endl;
            break;
        }
        case 8: if (a=8)
        {
            cout<< "\nAugust " << b << ", " << c << endl << endl;
            break;
        }
        case 9: if (a=9)
        {
            cout<< "\nSeptember " << b << ", " << c << endl << endl;
            break;
        }
        case 10: if (a=10)
        {
            cout<< "\nOctober " << b << ", " << c << endl << endl;
            break;
        }
        case 11: if (a=11)
        {
            cout<< "\nNovember " << b << ", " << c << endl << endl;
            break;
        }
        case 12: if (a=12)
        {
            cout<< "\nDecember " << b << ", " << c << endl << endl;
            break;
        }
    }
  } while (!abort);
    return 0;
}
