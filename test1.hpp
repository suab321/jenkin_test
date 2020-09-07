#include<iostream>

#ifndef TEST_HPP
#define TEST_HPP

struct Tracer{
    Tracer(){std::cout<<"O"<<std::endl;}
    ~Tracer(){ std::cout<<"Destroyed obj"<<std::endl; }
    int i=10;
    int j=20;
};

static Tracer tracer;
// Tracer t;
#endif
