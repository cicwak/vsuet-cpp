//
// Created by kostya on 21.03.23.
//

#include "iostream"
#include <cstdlib>
#include "ctime"
#include <iomanip>
#include "math.h"
#include "utils/isNumberInMassive.h"

using namespace std;

int main() {
    srand(time(NULL));

    // 9
    {
        cout << "9 задание." << endl;
        const int l9 = 33;
        int Q[l9];

        float sum = 0;
        int c = 0;
        for (int i = 0; i < l9; i++) {
            Q[i] = rand() % 100;
            if (Q[i] % 2 == 0) {
                sum += Q[i];
                c++;
            }
        }
        cout << "Среднее арифметическое четных элементов массива: " << sum / c << endl << endl;
    }

    // 10
    {
        cout << "10 задание." << endl;
        const int l10 = 24;
        int B[l10];

        int min_index = 0;
        for (int i = 0; i < l10; i++) {
            B[i] = rand() % 100 - 50;

            if (B[i] < B[min_index]) {
                min_index = i;
            }

        }

        cout << "Минимальное значение: " << B[min_index] << endl << "Его индекс: " << min_index << endl << endl;
    }

    // 11
    {
        cout << "11 задание." << endl;
        const int l11 = 100;
        double F[l11];
        double F2[l11];

        double sum = 0;
        int c = 0;
        for (int i = 0; i < l11; i++) {
            F[i] = rand() % 100 - 50;

            if ((F[i] > 0) and (i % 2 == 0)) {
                F2[c] = F[i];
                c++;
                sum += F[i];
            }

        }

        cout << "Среднее арифмитическое: " << sum / c << endl << endl;

    }

    // 12
    {
        cout << "12 задание." << endl;

        const int l = 12;
        double LL[l];
        double LL2[l];

        double sum = 0;
        int c = 0;
        for (int i = 0; i < l; i++) {
            LL[i] = rand() % 100;

            if (LL[i] != 0) {
                LL2[c] = LL[i];
                c++;
                sum += fabs(LL[i]);
            }
        }

        cout << "Среднее арифметическое: " << sum / c << endl << endl;

    }

    // 13
    {
        cout << "13 задание." << endl;

        const int l = 11;
        double L[l];
        double L2[l];

        double sum = 0;
        int c = 0;
        for (int i = 0; i < l; i++) {
            L[i] = rand() % 100;
            cout << L[i] << " ";
        }
        cout << endl;

        int buff;
        for (int i = 0; i < l / 2; i++) {
            buff = L[i];

            L[i] = L[l - i - 1];
            L[l - i - 1] = buff;
        }
        for (int i : L) {
            cout << i << " ";
        }
        cout << endl;


    }

    return 0;
}
