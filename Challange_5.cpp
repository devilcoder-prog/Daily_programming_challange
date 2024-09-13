#include <iostream>
using namespace std;

void findLeaders(int arr[], int n) {
    int leaders[n]; 
    int index = 0;

    
    int max_from_right = arr[n - 1];
    leaders[index++] = max_from_right;

    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            leaders[index++] = max_from_right;
        }
    }
    cout<<"Leaders: "<<"[";
    for (int i = index - 1; i >= 0; i--)
     {  
        cout << leaders[i] << ",";
    }
    cout<<"]";
    cout << endl;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLeaders(arr, n);
    return 0;
}
