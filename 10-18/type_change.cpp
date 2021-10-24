class Num{
    private:
        double d;
    public:
        Num(int n) : d(n){}
        Num(double n = 0.0) : d(n){}
        Num& operator=(int i){
            d = static_cast<double>(i);
            return *this;
        }
        Num& operator=(double i){
            d = i;
            return *this;
        }
        operator int(){
            return static_cast<int>(d);
        }
        operator double(){
            return d;
        }
};

int main()
{
    Num n = 2; // 解答例：int から Num への変換，変換コンストラクタ
    int i = 3; //int から int への変換、変換コンストラクタ
    int j = n; //Num から int への変換、変換関数
    Num m = i = n; //Num から int への変換、変換関数   int から Num への変換、変換コンストラクタ
    n = 10; //int から Num への変換、代入演算子
    i = n; //Num から int への変換、変換関数
}