//
//  main.cpp
//  CppLearn
//
//  Created by 张久奎 on 2017/6/28.
//  Copyright © 2017年 张久奎. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
void printElem(int& elem) {
    cout << elem << endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vec;
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i * i);
    }
    for_each(vec.begin(), vec.end(), printElem);
    return 0;
}
