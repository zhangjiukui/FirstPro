//
//  main.cpp
//  CppLearn
//
//  Created by 张久奎 on 2017/6/28.
//  Copyright © 2017年 张久奎. All rights reserved.
//

#include<iostream>
#include <string>
#include <vector>
using namespace std;
void replaceTableToSpace(string str)
{
    vector<string>words;
    string::iterator p = str.begin();
    string sepword;
    while (p != str.end())
    {
        if (*p == '\t')
        {
            words.push_back (sepword);
            sepword.clear();
        }
        else
        {
            sepword += *p;
        }
        p++;
        if (*p == '\0')
        {
            words.push_back (sepword);
            break;
        }
    }
    for (string result : words)
    {
        cout << result;
        cout << "    ";
    }
    return;
}

int main(){
    string tab = "\t";
    string str = "Hello" + tab + "Everyone!";
    replaceTableToSpace(str);
    return 0;
}
