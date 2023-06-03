#include <iostream>
using namespace std;
#include <climits>
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Maxno = INT_MIN;
    int Minno = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        Maxno = max(Maxno, arr[i]);
        Minno = min(Minno, arr[i]);
    }
    cout << "maxNo=" << Maxno << endl
         << "MinNo=" << Minno << endl;
    return 0;
}