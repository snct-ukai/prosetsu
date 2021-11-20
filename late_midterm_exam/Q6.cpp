#include<iostream>
using namespace std;

template<class T>
class Vector{
    private:
        T *vec;
        size_t size;
    public:
        size_t getSize(){return size;}
        Vector(){
            size = 0;
            vec = nullptr;
        }
        Vector(size_t n){
            size = n;
            vec = new T[size];
        }
        Vector(const Vector& V){
            size = V.size;
            delete[] vec;
            vec = new T[size];
            for(size_t i = 0; i < size; i++){
                vec[i] = V.vec[i];
            }
        }
        ~Vector(){
            delete[] vec;
        }
        T& operator[](size_t t);
        Vector& operator=(const Vector& V){
            if(this != *V){
                size = V.size;
                delete[] vec;
                vec = new T[size];
                for(size_t i = 0; i < size; i++){
                    vec[i] = V.vec[i];
                }
            }
            return *this;
        }
};

template<class T>
T& Vector<T>::operator[](size_t t){
    return vec[t];
}

int main(){
    Vector<double> v1(10);
    for(size_t i = 0; i < v1.getSize(); i++){
        v1[i] = i;
    }
    Vector<double> v2 = v1;
    Vector<double> v3;
    v3 = v1;
}