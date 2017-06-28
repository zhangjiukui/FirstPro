//
//  Singleton.hpp
//  CppLearn
//
//  Created by 张久奎 on 2017/6/28.
//  Copyright © 2017年 张久奎. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp
#include <stdio.h>

class Singleton{
public:
    static Singleton* getInstance();
    
private:
    Singleton();
    //把复制构造函数和=操作符也设为私有,防止被复制
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);
    
    static Singleton* instance;
};

#endif /* Singleton_hpp */
