#include<cstddef>
using namespace std;

class Vector{
    private:
        double* vec;
        size_t _size;
    public:
        Vector(){
            vec = nullptr;
            _size = 0;
        }
        Vector(size_t size){
            vec = new double[size];
            _size = size;
        }
        Vector(const Vector& V){
            _size = V._size;
            vec = new double[_size];
            for(size_t i = 0; i < _size; i++){
                vec[i] = V.vec[i];
            }
        }
        double& operator[](size_t i){return vec[i];}
        size_t size(){
            return _size;
        }
        Vector& operator=(const Vector& V){
            if(this != &V){
                delete[] vec;
                _size = V._size;
                vec = new double[_size];
                for(size_t i = 0; i < _size; i++){
                    vec[i] = V.vec[i];
                }
            }
            return *this;
        }
        ~Vector(){
            delete[] vec;
        }
};

int main(void){
    Vector vec1(10);//Vector vec1 = 10;
    for(size_t i = 0; i < vec1.size(); i++)
        vec1[i] = i;

    Vector vec2 = vec1;//Vector vec2(vec1 : Vector);
    Vector vec3;

    vec3 = vec1;
}