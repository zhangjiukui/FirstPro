//
//  Singleton.cpp
//  CppLearn
//
//  Created by 张久奎 on 2017/6/28.
//  Copyright © 2017年 张久奎. All rights reserved.
//

#include "Singleton.hpp"

Singleton::Singleton(){
    
}

Singleton::Singleton(const Singleton&){
    
}

//在此处初始化
Singleton* Singleton::instance = new Singleton();
Singleton* Singleton::getInstance(){
    return instance;
}

