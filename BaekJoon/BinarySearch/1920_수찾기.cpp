//
//  10816_숫자카드2.cpp
//  Algoritms_Cpp
//
//  Created by 장석우 on 2023/03/22.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int M;

vector<int> vectorN;
vector<int> vectorM;

int binarySearch(int target, int low, int high) {
    
    if (low > high)  return -1;
    
    int mid = (low + high) / 2;
    
    if (vectorN[mid] == target)
        return mid;
    else if (vectorN[mid] > target)
        return binarySearch(target, low, mid-1);
    else
        return binarySearch(target, mid+1, high);
}

int main() {
    
    cin >> N;
    for (int i=0; i < N; i++){
        int n;
        cin >> n;
        vectorN.push_back(n);
    }

    cin >> M;
    for (int i=0; i < M; i++){
        int m;
        cin >> m;
        vectorM.push_back(m);
    }
    
    sort(vectorN.begin(),vectorN.end());
    
    for(int i = 0; i < M; i ++) {
        if (binarySearch(vectorM[i], 0, N - 1) != -1 ) {
            vectorM[i] = 1;
        } else {
            vectorM[i] = 0;
        }
        cout << vectorM[i] << "\n";
    }
    
}
