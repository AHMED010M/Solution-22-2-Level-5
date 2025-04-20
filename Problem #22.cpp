#include <iostream>
using namespace std;

int ReadLength(string Message)
{
    int length;
    cout << Message;
    cin >> length;
    return length;
}

void ReadElementOfArray(int Length, int Arr[100])
{
    for (int i = 0; i < Length; i++) 
    {
        cout << "Element [" << i + 1 << "]: ";
        cin >> Arr[i];
    }
}

int CheckRepiterNumber(int Length, int Arr[100], int TestNumber)
{
    int counter = 0;
    for (int i = 0; i < Length; i++)
    {
        if (TestNumber == Arr[i])
            counter++;
    }
    return counter;
}

void PrintArray(int Length, int Arr[100])
{
    cout << "Array Elements: ";
    for (int i = 0; i < Length; i++)
        cout << Arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[100];
    int Length = ReadLength("Please enter array length: ");
    ReadElementOfArray(Length, arr);

    int testNumber = ReadLength("Enter the number to check: ");
    cout << "\n";
    PrintArray(Length, arr);

    int repetitions = CheckRepiterNumber(Length, arr, testNumber);
    cout << "\nThe number " << testNumber << " is repeated " << repetitions << " time(s).\n";

    return 0;
}
