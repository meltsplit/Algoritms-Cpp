//
//  SequentialSearch.cpp
//  Algoritms_Cpp
//
//  Created by 장석우 on 2023/03/29.
//

#include <iostream>
#include <vector>

using namespace std;

int sequentialSearch(vector<int> arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,4,5,3};
    int location = sequentialSearch(arr, 0);
    
    if (location != -1) {
        cout << location << endl;
    } else {
        cout << "404 Not Found" << endl;
    }
}

//시간 복잡도 O()
