#include <iostream>
#include <vector>

using namespace std;

vector<int> wait(int arr[], int n) {
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        int jump = 0;
        res[i]=-1;
        for (int j = i + 1; j < n; j++) {
            jump++; 
            if (arr[j] <arr[i]) {
                res[i] = jump;
                break;
            }
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> ans = wait(arr.data(), n);
    cout << "The wait array is: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
