#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout<<"your key at position is = ";
            return i;
        }
    }
    cout<<"your key not found";
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << linearsearch(arr, n, key);

    return 0;
}