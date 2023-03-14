//
// Created by kostya on 14.03.23.
//
#include "iostream"
#include <cstdlib>
#include "ctime"
#include <iomanip>
#include "utils/isNumberInMassive.h"

using namespace std;

int main() {
    srand(time(NULL));

    // 4
    {
        int G[10];
        for (int i = 0; i < 10; i++) {
            G[i] = rand() % 10;
            cout << G[i] << " ";
        }

        cout << endl;

        int min_index = 0, max_index = 0;

        for (int i = 0; i < 10; i++) {
            if (G[i] < G[min_index]) {
                min_index = i;
            }

            if (G[i] > G[max_index]) {
                max_index = i;
            }

        }

        int buf = G[max_index];
        G[max_index] = G[min_index];
        G[min_index] = buf;

        for (int item: G) {
            cout << item << " ";
        }
    }

    // 5
    {
        cout << endl << endl << "5. Задание" << endl;
        for (int i = 0; i < 100; i++) {
            if (i == rand() % 100) {
                cout << i << " ";
            }
        }
    }

    // 7
    {
        cout << endl << endl << "7. Задание" << endl;
        int F[10];
        int D[40];

        for (int i = 0; i < 40; i++) {
            if (i < 10) {
                F[i] = rand() % 100;
            }
            D[i] = rand() % 100;
        }

        for (int i = 0; i < 10; i++) {
            if (isNumberInMassive(F[i], D, 40, 2)) {
                cout << F[i] << " ";
            }
        }

    }

    // 8
    {cout<<"задание 9"<<endl ;
        int Q[33];
        double avg;
        int a;
        double sum;

        for (int i = 0; i <33 ; i++) {
            Q[i]=rand() % 59;
            if (Q[i]%2==0)
            {a++;
                sum+=Q[i];
            }

        }
        avg=sum/a;
        cout<<avg<<endl;


        /*cout << endl << endl << "8. Задание" << endl;

        int A[55];
        int sum_n = 0;
        int min=A[0];

        for (int i = 0; i < 55; i++)
        {
            A[i] = rand() % 100 - 50;
            if (A[i]<0) {
                sum_n+=A[i];
            }
            if (A[i]<min) {
                min=A[i];
            }
            min=sum_n;
        }
        cout<<"сумма отрицательных элементов"<<sum_n<<endl;
        cout<<min<<endl;*/


    } // тут тима делал, не бейте за код
    return 0;
}