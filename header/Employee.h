using namespace std;

class Employee {
public:
    inline bool isYoung() const {
        return this -> age < 24;
    };
    inline bool isTall const {
        return this -> height > 180;
    };
    Employee():name(""), age(0), height(0.0), salary(0.0) {}
    Employee(const Employee &rhs);
    Employee& operator=(const Employee &rhs);
private:
    string name;
    int age;
    double height; // cm
    double salary;
};