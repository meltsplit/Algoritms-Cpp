//
//  완전제곱수.cpp
//  Algoritms_Cpp
//
//  Created by 장석우 on 2023/03/10.
//

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int M, N;
vector<int> pows;
int iSum;
int iMin;

int main() {
    
    cin >> M >> N;
    
    M = ceil(sqrt(M));
    N = floor(sqrt(N));
    
    // 제곱 값 벡터에 넣기
    for(int i=M; i<=N; i++) {
        int value = i*i;
        pows.push_back(value);
    }
    
    if (pows.size() > 0) {
        //sum
        for(int pow: pows) {
            iSum += pow;
        }
        
        //minn
        iMin = pows.front();
        
        cout << iSum << endl << iMin << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
