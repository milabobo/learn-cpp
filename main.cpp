#include <iostream>
#include <vector>
#include "source/sum.c"
#include "header/sum.h"
#include "source/t_array.c"
#include "source/t_container.cpp"
#include "source/t_map_container.cpp"
#include "source/t_algorithm.cpp"
#include "source/t_template.cpp"
#include "source/t_count_digit.cpp"

using namespace std;
using namespace cpp_primer;

int getStringValue(char* s) {
    return 0;
}

bool getTrueValue() {
    return true;
}

bool getFalseValue() {
    return false;
}

// ok: swap acts on references to its arguments
void swap(int &v1, int &v2)
{
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
}

size_t count_calls()
{
    static size_t ctr = 0; // value will persist across calls
    return ++ctr;
}

// return the greatest common divisor
int gcd(int v1, int v2)
{
    while (v2) {
        int temp = v2;
        v2 = v1 % v2;
        v1 = temp;
    }
    return v1;
}

typedef bool (*comFunc)(const string &, const string &);

bool lengthCompare(const string &s, const string &m) {
    return s.size() < m.size();
}

int main() {
    cout << "Hello, World!" << endl;
    cout << sum(1, 2) << endl;

    string s("This is a long string");
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    cout << isnumber('1') << endl;

    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);

    // iterator
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << endl;
    }

    //cout << v << end;

    bitset<32> b("1000100101");
    b.flip();
    b.reset();
    b.set();
    b.any();
    b.count();
    b.size();
    b.none();
    b.all();
    unsigned long long val = b.to_ullong();
    cout << b << endl;
    cout << val << endl;

    // array test
    array_test();
    cout << endl;

    const int *ptr = new const int[10]();
    const string *sptr  = new const string[10]();

    typedef string *pstring;
    const pstring ptrs = 0;

    const char a[] = {'a', 'b', 'c'};
    const char *c = a;
    int cnt = 0;
    while(*c) {
        ++c;++cnt;
    }
    cout << "cnt: " << cnt << endl;

    const int *m = new const int[100]();
    delete []m;

    const char *success = "Success";
    const char *fail = "Fail";
    const char *message;
    if(getTrueValue()) {
        message = success;
    } else {
        message = fail;
    }

    size_t sLength = strlen(message);

    cout << message << " " << sLength << endl;

    // const_cast, static_cast, reinterpret_cast
    void *p = new int[64];
    int *array_p = static_cast<int*>(p);

    const char *ss = "HelloWorld";
    getStringValue(const_cast<char*>(ss));
    delete array_p;

    int *bb = new int[18];
    char *cc = reinterpret_cast<char*>(bb);

    delete bb;

    bail: {

    };

//    try {
//        1 / 0;
//    } catch (runtime_error error){
//        cout << "catch error" << endl;
//    }

    cout << "Error: " << __FILE__
            << " : line " << __LINE__ << endl
            << "       Compiled on " << __DATE__
            << " at " << __TIME__ << endl
            << "      Word read was " << "HelloWorld"
            << ": Length too short" << endl;

    int k = 1, j = 2;
    swap(k, j);
    cout << k << " " << j << endl;

    for (size_t i = 0; i != 10; ++i)
        cout << "count calls: " << count_calls() << endl;

    cout << shortString("HelloWorld", "Hello") << endl;

    comFunc f1 = lengthCompare;
    cout << f1("HelloWorld", "Hello") << endl;
    cout << (*f1)("HelloWorld", "Hello") << endl;

    t_container();
    t_map_container();
    t_algorithm();

    string s1("hello"), s2("hell");
    cout << compare(s1, s2) << endl;

    //MyQueue<int> iq;
    //Queue<vector<string> > vq;
    //Queue<string> sq;
    int array_1[5];
    double array_2[19];
    array_init(array_1);
    array_init(array_2);

    t_count_digit();
    return 0;
}