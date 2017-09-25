#include <iostream>
using namespace std;

template <typename T>

class Stack {

public:
    Stack();
    Stack(size_t s);
    size_t count() const;
    void push(T const &);
    T pop();
    ~Stack();

private:
    T* _array;
    size_t _arraysize_;
    size_t count_;
};

template <typename T>               //конструктор без параметров.
Stack <T> :: Stack() : _arraysize_(size_t(10)), _array(new T[10]), count_(0) {}


template <typename T>               //конструктор с параметрами
Stack <T> :: Stack(size_t s) : _arraysize_(s), _array(new T[s]), count_(0) {}


template <typename T>
Stack <T> :: ~Stack() {                 //деструктор
    delete[] _array;
}

template <typename T>                   //push
void Stack <T> :: push(T const &val) {
    if(count_ == _arraysize_) {
        T* new_array = new T[_arraysize_*2];
        for(int i = 0; i < _arraysize_; i++) {
            new_array[i] = _array[i];
        }
        _arraysize_ *= 2;
        delete[] _array;
        _array = new_array;
    }

    _array[count_++] = val;
}

template <typename T>                       //pop
T Stack <T> :: pop() {
    if(count_ == 0) throw runtime_error("error");
    return _array[--count_];
}

template <typename T>                       //count
size_t Stack <T> :: count() const {
    return count_;
}