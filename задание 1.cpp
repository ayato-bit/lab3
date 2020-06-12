
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
void createVect(int*&X, int size)
{ srand((time(NULL)));  
for (int y = 0; y < size; y++)  
    X[y] = rand() % 20 - 10; 
}


int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int n;  
    int* pA, * pB;  
    cout << "задайте количество елементов ->";  
    cin >> n;  
    pA = new int[n];   
    createVect(pA, n);     
    view(pA, n); 
    cout << "задайте количество елементов ->";  
    cin >> n;  
    pB = new int[n];   
    createVect(pB, n);  
    view(pB, n);   
    delete[]pA;  
    delete []pB;      
    return 0; 
} 