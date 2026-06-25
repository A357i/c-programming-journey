#include <stdio.h>

int main () {

    // for loop = përsërit një pjesë të kodit një numër të kufizuar herësh
    // Deklarojmë një indeks (numërues),
    // një kusht që kontrollohet pas çdo përsëritjeje,
    // dhe një mënyrë për ta rritur ose zvogëluar indeksin.

    // for(fillimi; kushti; ndryshimi) {
        // Kodi qe perseritet
    // }

    for(int i = 10      ;                i >= 1             ; i--)
    // fillon me i = 10 ; vazhdo derisa i eshte tek numri 1 ; zvogëloje i me 1.
    {
        printf("%d\n", i);
    }

    return 0;
}