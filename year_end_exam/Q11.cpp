#include <iostream>
#include <stdexcept>
using namespace std;

class difference_size_error : public logic_error{
    public:
    difference_size_error(const string& str = "") : logic_error(str){}
};

class Vector{
    int *vec;
    size_t size;
public:
    Vector(){
        vec = nullptr;
        size = 0;
    }
    Vector(size_t n){
        vec = new int[n];
        size = n;
    }
    Vector operator+(const Vector& v){
        if(size != v.size){
            throw difference_size_error("2つのベクトルのサイズが違います。");
        }
        Vector tmp(size);
        for(size_t i = 0; i < size; i++){
            tmp.vec[i] += v.vec[i];
        }
        return tmp;
    }
};