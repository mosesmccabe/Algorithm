/*  Moses Mccabe

    The smaller element "bubble" to 
    the top as they are interchanged 
    with larger element.
*/
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 6;
    int arry[SIZE] = {7,2,1,4,5,1};
    
    
    // Display the current array
    cout << "Here are the unsorted array\n";
    for (int n = 0; n < 6; n++)
        cout << arry[n] << " ";
        cout << "\n\n";
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            int temp;
            if (arry[i] > arry[j])
            {
                temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }
    // Display the sorted array.
    cout << "Here are the sorted array\n";
    for (int n = 0; n < 6; n++)
        cout << arry[n] << " ";
        cout << endl;
    
}