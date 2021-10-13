#include <iostream>
using namespace std;



int binarySearch(int array[], int SIZE, int searchValue)
{
    int low = 0,
        high = SIZE - 1;
    int mid;
    
  while (low <= high)
  {
    
    mid = (low + high)/2;
    
    if (searchValue == array[mid])
    {
        return mid;
    }
    else if (searchValue > array[mid])
    {
        low = mid + 1;
    }
    else if (searchValue < array[mid])
    {
        high = mid - 1;
    }
  }
    return -1;
}



int main()
{
    int a[] = {12, 22, 34, 47, 57, 58, 67, 83, 98};
    
    int userValue, result;
     cout << "Here are the element in the array\n";
    for (int n = 0; n < 9; n++)
        cout << a[n] << " ";
    cout << "\n\n";
    
    cout << "Enter a integer to be search for:  " << endl;
    cin >> userValue;
    
    result = binarySearch(a, 9, userValue);
    
    if (result >= 0)
    {
        cout << "The number " << a[result] << " was found at "
             << "element with index " << result << endl;
    }
    else
    {
        cout << "The number " << userValue << " was not found.\n";
    }
    
    return 0;
}