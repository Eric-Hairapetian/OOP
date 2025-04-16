#include <iostream>

template<typename T>
class parent {
public:
    virtual T Add(T a, T b) {
        return a + b;
    }
};

template<typename T>
class child : public parent<T> {
public:
    T Add(T a, T b) override {
        return a * b;
    }
};

int main() {
    parent<int> parentObj;
    child<int> obj;
    
    int result1 = parentObj.Add(3, 4);
    int result2 = obj.Add(3, 4);
    
    std::cout << "Parent Add Result: " << result1 << std::endl;
    std::cout << "Child Add Result: " << result2 << std::endl;
    
    return 0;
}
