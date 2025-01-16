#include <iostream>
using namespace std;
int capacity = 10;
void insert_AB(int parr[], int cur, int value) {
    if (cur >= capacity)
    {
        cout << "Array is full. Cannot insert new element." << endl;
        return;
    }

    for (int i = cur - 1; i >= 0; i--)
    {
        parr[i + 1] = parr[i];
    }
    parr[0] = value;
    cur++;
}

int main() {
   
    int arr[capacity] = {10, 20, 30, 40};
    int n = 4;
    //cout<<"  "<<sizeof(arr)/4<<endl;;

    cout << "Original array elements are: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    int value = 5;
    insert_AB(arr, n, value);
    insert_AB(arr, 15, value);
    insert_AB(arr, 20, value);

    cout << "Array after insertion element : ";
    for (int i = 0; i < n+3; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}