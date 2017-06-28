//
//  main.cpp
//  CppLearn
//
//  Created by 张久奎 on 2017/6/28.
//  Copyright © 2017年 张久奎. All rights reserved.
//

#include "Singleton.hpp"
#include <stdio.h>


int main(){
    Singleton* singleton1 = Singleton::getInstance();
    Singleton* singleton2 = Singleton::getInstance();
    
    if (singleton1 == singleton2)
        fprintf(stderr,"singleton1 = singleton2\n");
    
    return 0;
}
