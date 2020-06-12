
#include <iostream>
#include <time.h> 

using namespace std;

void view(const int*, int);
void createVect(int*&, int);

void view(const int* X, int size)
{
    cout << "масив " << endl;
    for (int y = 0; y < size; y++) {

        cout << X[y] << '\t';
    }
    cout << endl << endl;
}

void createVect(int*& X, int size)
{
    srand((time(NULL)));
    for (int y = 0; y < size; y++)
        X[y] = rand() % 20 - 10;
}

void MinElem(const int* X, int size)
{
    int min=0;
    for (int y = 0; y < size; y++) {
        if (X[y] < min) {
            min = X[y];
        }
    }
    cout << min << endl;;

}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int n;
    int* pA, * pB ,*pC;
    cout << "задайте количество елементов ->";
    cin >> n;
    pA = new int[n];
    createVect(pA, n);
    view(pA, n);
    MinElem(pA, n);
    cout << "задайте количество елементов ->";
    cin >> n;
    pB = new int[n];
    createVect(pB, n);
    view(pB, n);
    MinElem(pB, n);
    cout << "задайте количество елементов ->";
    cin >> n;
    pC = new int[n];
    createVect(pC, n);
    view(pC, n);
    MinElem(pC, n);
    delete[]pC;
    delete[]pA;
    delete[]pB;
    return 0;
}