#include <iostream> 
using namespace std;

int main(){

    int sum = 0;
    int size;

    cout << "Enter a size of array: ";
    cin >> size;

    int* numbers = new int[size]; // dynamically allocate memory for the array after getting size

    cout << "" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "" << endl;
    cout << "The finite sum of the series is " << sum << endl; 
    cout << "" << endl; 

    delete[] numbers; // don't forget to deallocate the memory

    return 0;
}