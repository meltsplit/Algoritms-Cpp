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



int binarySearch(int want,int low, int high) {
    
    
    int mid = (low + high) / 2;
    
    if (vectorN[mid] == want) {  }
    
    if (low == high) { return -1;}
    if (vectorN[mid] > want) {
        binarySearch(want, mid+1, high);
    }
    
    else {
        binarySearch(want, low, mid);
    }
    
    return 0;
}


int BSearchRecursive(int target, int low, int high) {
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    
    if (vectorN[mid] == target)
        return mid;
    else if (vectorN[mid] > target)
        return BSearchRecursive(target, low, mid-1);
    else
        return BSearchRecursive(target, mid+1, high);
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
    
    sort(vectorM.begin(),vectorM.end());
    
    for(int m: vectorM) {
            cout << m << " ";
    }
    
}





//using namespace std;
//
//int N;
//int M;
//
//vector<int> vectorN;
//vector<int> vectorM;
//
//
//int main() {
//
//    cin >> N;
//
//    for (int i=0; i < N; i++){
//        int n;
//        cin >> n;
//        vectorN.push_back(n);
//    }
//
//    cin >> M;
//
//    for (int i=0; i < M; i++){
//        int m;
//        cin >> m;
//        vectorM.push_back(m);
//    }
//
//    for (int i=0; i<M; i++){
//
//        int k = vectorM[i];
//        vectorM[i] = 0;
//
//        for(int j=0; j<N; j++){
//            if (vectorN[j] == k){
//                vectorM[i]++;
//            }
//        }
//    }
//
//    for(int m: vectorM) {
//        cout << m << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
