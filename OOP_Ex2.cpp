#include <iostream>
#include <string>

using namespace std;

class person {
protected:
    string name;
    int age;

public:
    string GetName() {
        return name;
    }

    int GetAge() {
        return age;
    }
};

class student : private person {
private:
    double Avg;

public:
    double GetAvg() {
        return Avg;
    }

    string GetStudentName() {
        return name;
    }
};

class teacher : public person {
private:
    double salary;

public:
    double GetSalary() {
        return salary;
    }
};

int main() {
    person p;
    student s;
    teacher t;

    // Checking access to class members
    // p.GetName();   
    // p.GetAge();    
    // p.name;        // Error: name is a protected member
    // p.age;         // Error: age is a protected member

    // s.GetName();   // Error: due to private inheritance
    // s.GetAge();    // Error: due to private inheritance
    // s.name;        // Error: private inheritance
    // s.age;         // Error: private inheritance
    // s.GetAvg();    
    // s.GetStudentName(); 

    // t.GetName();   
    // t.GetAge();    
    // t.GetSalary(); 
    // t.salary;      // Error: salary is a private member

    return 0;
}
