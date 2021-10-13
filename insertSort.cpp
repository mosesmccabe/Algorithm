/*  
    Example of Insertion-Sort
*/
#include <iostream>
using namespace std;

int main()
{
    int j, temp;
    const int SIZE = 6;
    int A[SIZE] = {31, 41, 59, 26, 41, 58};
    
    for (int n = 1; n < SIZE; n++)
    {
        j = n;
        
        while ((j > 0) && (A[j - 1] > A[j]))
        {
            temp = A[j];
            A[j] = A[j-1];
            A[j-1] = temp;
            j--;
        }
        
    }
    for (int i = 0; i < SIZE; i++)
        cout << A[i] << "  ";
    
    cout << endl;
    
    return 0;
}