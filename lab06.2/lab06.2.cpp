#include <iostream>
#include <ctime>

using namespace std;

int FindAverage(int arr[], int size);

int main()
{
    int n = 0;

    srand(time(NULL));

    cout << "Input size of array: " << "\n";
    cin >> n;

    int* arr = new int[n];

    cout << "Created array: ";
    for (int k = 0; k < n; k++) //k <= n - 1
    {
        arr[k] = (rand() % 100) - 49;
        cout << arr[k];
        if (k != n - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << "\n\n";
        }
    }

    cout << "Even index array element :" << endl;
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            cout << "arr[" << i << "]= " << arr[i] << "\n";
        }
    }
    cout << "\nResult:" << FindAverage(arr, n) << endl;

    delete[] arr;
    system("pause");
}

int FindAverage(int arr[], int size)
{
    double summ = 0;
    int count = 0;
    cout << "Even index array element :" << endl;
    for (int i = 0; i < size; i++)
    {

        if (i % 2 == 0)
        {
            cout << "arr[" << i << "]= " << arr[i] << "\n";
            summ += arr[i];
            count++;
        }
    }
    return summ / count;
}
