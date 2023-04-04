//
//  Recusive Fibonacci.cpp
//  Algoritms_Cpp
//
//  Created by 장석우 on 2023/03/29.
//

#include <iostream>

using namespace std;

int countt = 0;
int fibonacci(int n) {
    
    countt ++;
    if (n <= 1) {
        return n;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    
    cout << fibonacci(30) << endl;
    cout << countt << endl;
    return  0;
}
