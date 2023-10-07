#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int length;
    cin >> length;
    int arr[length];
    
    for (int i = length - 1; i >= 0; i--) {
        cin >> arr[i];
    }
    
    for (int ele : arr) {
        cout << ele << " ";
    }
    
    return 0;
}
