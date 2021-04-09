#include <iostream>
#include "h.h"

using namespace std;
void menu();

void menu() {
    cout << "1. Zadanie 1 summ(int n)\n";
    cout << "2. Zadanie 2 summ2(double eps)\n";
    cout << "3. Zadanie 3 print(int n ,int k)\n";
    cout << "4. Zadanie 4 findFirstElement(double eps)\n";
    cout << "5. Zadanie 5 findFirstNegativeElement(double eps)\n";
    cout << "6. Vihod\n";
}

int main()
{
    int n, k, p;
    double eps;
    do {
        menu();
        cout << "vvedite nomer zadaniya" << endl;
        cin >> p;
        system("cls");
        switch (p) {
        case 1:
            cout << "vvedite n\n";
            cin >> n;
            cout << "Sum = " << sum(n) << endl;
            break;
        case 2:
            cout << "vvedite eps\n";
            cin >> eps;
            cout << "Sum = " << summ2(eps) << endl;
            break;
        case 3:
            cout << "vvedite n i k\n";
            cin >> n;
            cin >> k;
            print(n, k);
            break;
        case 4:
            cout << "vvedite eps\n";
            cin >> eps;
            cout << "nomer pervogo chlena s tocnhostiu = " << findFirstElement(eps) << endl;
            break;
        case 5:
            cout << "vvedite eps\n";
            cin >> eps;
            cout << "nomer pervogo otricatelnogo chlena s tocnhostiu = " << findFirstNegativeElement(eps) << endl;
            break;
        case 6:
            system("cls");
            p = 7;
            break;
        default:
            cout << "Wrong task";
        }
    } while (p>0 && p<7);
    return 0;
}



