#include "iostream"
#include <cstdlib>
#include "ctime"
#include <iomanip>

using namespace std;



int main() {
//
////     1 задание
//    cout << "1 задание:" << endl;
//    for (int i = 10; i <= 20; i++) {
//         cout << i * i << " ";
//     }
//
//     cout << endl;
//     cout << endl;
//
////     2 задание
//    cout << "2 задание:" << endl;
//    for (int i = 35; i <= 87; i++) {
//        if ((i % 7 == 1) || (i % 7 == 2) || (i % 7 == 5)) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//    cout << endl;
//
////    3 задание
//    cout << "3 задание:" << endl;
//    int n, sum = 0;
//    cin >> n;
//    for (int i = 0; i <= n; i++) {
//        sum += i;
//    }
//    cout << sum << endl;
//    cout <<  endl;
//
////    4
//    cout << "4 задание:" << endl;
//    for (int i = 0; i < 100; i++) {
//        if (i % 10 + i / 10 == 15) {
//            cout << i << " ";
//        }
//    }
//    cout <<  endl;
//    cout <<  endl;
//
////    5
//    cout << "5 задание:" << endl;
//    int mul = 1;
//    cin >> n;
//    mul *= n % 10;
//    mul *= n / 100;
//    mul *= n / 10 % 10;
//    cout <<  mul << endl;
//    cout <<  endl;
//
////    6
//    cout << "6 задание:" << endl;
//    int in, chislo, max = -1;
//    cin >> in;
//
//    while (true) {
//        if (in <= 0) {
//            break;
//        }
//
//        chislo = in % 10;
//        if (chislo > max) {
//            max = chislo;
//        }
//
//        in /= 10;
//    }
//
//    cout <<  max << endl;
//    cout <<  endl;

    srand(time(NULL));

    // 0
    int a[10];
    for (int i = 1; i < 10; i++) {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }

    cout << endl;

    // 1
    int sum1 = 0;

    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            sum1 += a[i];
        }
    }

    cout << sum1 << endl;

    // 2
    int count2 = 0;

    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 != 0) {
            count2 += 1;
        }
    }

    cout << count2 << endl;

    // 3
    int count3 = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            count3 += a[i];
        }
    }

    cout << count2 << endl;


    // 4
    cout << "задание 4" << endl;
    const int l = 10;
    int mas1[l], mas2[l], mas3[l];

    for (int i = 0; i < l; i++) {
            mas1[i] = rand() % 10;
            mas2[i] = rand() % 10;

            mas3[i] = mas1[i] + mas2[i];

            cout << setw(3) << mas1[i] << " ";
        }

    cout << endl;

    for (int i : mas2) {
        cout << setw(3) << i << " ";
    }


    cout << endl;
    cout << endl;
    cout << endl;

    for (int i : mas3) {
        cout << setw(3) << i << " ";
    }

    cout << endl;

    return 0;
}