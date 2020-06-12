
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

void createVect1(int*& X, int size)
{ srand((time(NULL)));  

for (int y = 0; y < size; y++)  
    X[y] = 1 + rand() % 30; 
}

void createVect2(int*& X, int size)
{
    srand((time(NULL)));
    for (int  y= 0; y < size; y++)
        X[y] = 1 + rand() % 12;
}
void createVect3(int*& X, int size)
{
    srand((time(NULL)));
    for (int y = 0; y < size; y++)
        X[y] =  rand() % 4+1999;
}



int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int n=10;  
    int* pA, * pB, *pK;  
    pA = new int[n];   
    createVect1(pA, n);     
    view(pA, n); 
    pB = new int[n];   
    createVect2(pB, n);  
    view(pB, n);   
    pK = new int[n];
    createVect3(pK, n);
    view(pK, n);
    delete[]pA;  
    delete []pB;   
    delete[]pK;
    return 0; 
} 