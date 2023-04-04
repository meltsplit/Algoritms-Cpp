//
//  MergeSort.cpp
//  Algoritms_Cpp
//
//  Created by 장석우 on 2023/04/03.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    vector<int> L(n1), R(n2);
    
    for(int i=0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    
    for(int j=0; j < n2; j++) {
        R[j] = arr[mid + j + 1];
    }
    
    int i = 0, j = 0, k = left;
    
    while(i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    while (i < n1) {
        arr[k++] = L[i++];
    }
    
    while (j < n2) {
        arr[k++] = R[j++];
    }
    return ;
}

void mergeSort(vector<int>& arr,int left, int right) {
    
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;
    
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
    return ;
}



int main() {
    
    vector<int> arr = {1,7,2,3,4,5};
    mergeSort(arr,0, arr.size() - 1);
    
    for (int n: arr) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
