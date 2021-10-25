#include<cstddef>

class Vector{
    private:
        double* vec;
        size_t _size;

    public:
        Vector(){
            vec = nullptr;
            _size = 0;
        }
        Vector(const Vector& Vec){
            _size = Vec._size;
            vec = new double[_size];
            for(size_t i = 0; i < _size; i++){vec[i] = Vec.vec[i];}
        }
        Vector(size_t size){
            _size = size;
            vec = new double[_size];
        }
        size_t size(){return _size;}
        double& operator[](size_t i){return vec[i];}
        Vector& operator=(const Vector& Vec){
            if(this != &Vec){
                delete[] vec;
                _size = Vec._size;
                vec = new double[_size];
                for(size_t i = 0; i < _size; i++){vec[i] = Vec.vec[i];}
            }
            return *this;
        }
        ~Vector(){
            delete[] vec;
        }
};

int main(){
    Vector vec1(10);
    for(size_t i = 0; i < vec1.size(); i++){
        vec1[i] = i;
    }

    Vector vec2 = vec1;
    Vector vec3;
    vec3 = vec1;

    return 0;
}