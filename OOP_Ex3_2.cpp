#include <iostream>

template <typename T>
class parent {
public:
    virtual T Add(T a, T b) {
        return a + b;
    }
    virtual ~parent() {}
};

class child : public parent<float> {
public:
    float Add(float a, float b) override {
        float c = parent<float>::Add(5.6f, 10.6f);
        return c + 20.0f;
    }
};

int main() {
    child obj;
    float result = obj.Add(3.0f, 4.0f);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
