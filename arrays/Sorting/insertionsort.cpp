#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size = ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Unsorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}