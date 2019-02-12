source.cpp
Last week
Thu 5:24 PM
A
You edited an item
C++
source.cpp
Thu 4:31 PM
A
You uploaded an item
C++
source.cpp

#include <iostream>
using namespace std;


void reverseArray(int array[], int size)
{
  int j = size - 1;
  int revArray[size];

  //first print the Array
  for(int i = 0; i < size; i++)
  {
    cout << array[i] << endl;
  }
    cout << "\n";

  // now reverse the array
  for(int i = 0; i < size; i++)
  {
      revArray[i] = array[j];
      cout << revArray[i] << endl;
      j--;
  }
}

int main()
{
  int size;


  cout << "Enter the array size" << endl;
  cin >> size;

  int myArray[size];

  cout << "Enter array integers" << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> myArray[i];
  }
  cout << "\n";

  reverseArray(myArray, size);

  return 0;
}
