//
// Created by kostya on 07.03.23.
//
#include "iostream"
#include <cstdlib>
#include "ctime"
#include <iomanip>

using namespace std;



int main() {

    srand(time(NULL));

    // 2

    const int l = 10;
    int a[l], n[l], p[l];
    int n_ind = 0, p_ind = 0;
    int count_n = 0, count_p = 0;
    for (int i = 1; i < l; i++) {
        a[i] = rand() % 10 - 5;

        if (a[i] > 0) {
            p[p_ind] = a[i];
            p_ind++;
        } else {
            n[n_ind] = a[i];
            n_ind++;
        }

        cout << a[i] << " ";
    }

    cout << endl;

    for (int i : n) {
        cout << i << " ";
    }

    cout << endl;

    for (int i : p) {
        cout << i << " ";
    }

    cout << endl;

    cout << (l - n_ind - 1) << endl;
    cout << (l - p_ind - 1) << endl;



    // 1

    return 0;
}