#include "list.h"

using namespace std;

int main(){
    List L;
    createList(L); // membuat list baru

    int x;
    address p;

    cout << "Masukkan angka pertama: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);
    printInfo(L);

    cout << "Masukkan angka kedua: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);
    printInfo(L);

    cout << "Masukkan angka ketiga: ";
    cin >> x;
    p = allocate(x);
    insertFirst(L, p);
    printInfo(L);

    return 0;
}
