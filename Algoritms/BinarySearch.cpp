//
//  BinarySearch.cpp
//  Algoritms_Cpp
//
//  Created by 장석우 on 2023/03/29.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> vNums;

int binarySearch(int target,int low,int high) {
    
    if (low > high) { return -1; }
    
    int mid = (low + high) / 2;
    
    if (vNums[mid] == target) {
        return  mid;
    } else if (vNums[mid] < target) {
        return binarySearch(target, mid + 1, high);
    } else {
        return binarySearch(target, low, mid - 1);
    }
    
    
}

int main() {
    vNums = {1,2,3,4,5,6,7,8};
    int location = binarySearch(8, 0, vNums.size()-1);
    
    if (location != -1) {
        cout << location << endl;
    } else {
        cout << "404 Not Found" << endl;
    }
    
}
