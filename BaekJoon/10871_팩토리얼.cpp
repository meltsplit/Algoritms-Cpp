//
//  10871_팩토리얼.cpp
//  Algoritms_Cpp
//
//  Created by 장석우 on 2023/03/22.
//

#include <stdio.h>
#include <iostream>


using namespace std;

int N;

int factorial(int k, int r) {
    
    if (k == 0) { return 1; }
    if (k == 1) { return r; }
    return factorial(k-1, r*(k-1));
}

int main() {
    
    // N을 입력 받는다
    cin >> N;
    
    cout << factorial(N, N) << '\n';
    
    return 0;
    
}

