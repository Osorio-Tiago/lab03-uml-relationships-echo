//
// Created by santi on 11/8/2020.
//
#ifndef BASIC_00_EXAMPLE_OBJETOBASE_H
#define BASIC_00_EXAMPLE_OBJETOBASE_H
#include<iostream>
using namespace std;


class ObjetoBase{
public:
    virtual string toString() = 0;
    virtual ~ObjetoBase() {};
};



#endif //BASIC_00_EXAMPLE_OBJETOBASE_H
