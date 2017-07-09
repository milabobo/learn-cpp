#include <string>
using namespace std;

namespace cpp_primer {
    template <typename T> int compare(const T &l, const T &r) {
        if(l < r) return -1;
        else if(l > r) return 1;
        return 0;
    }

    template <class Type> class MyQueue {
    public:
        MyQueue();
        Type &front();
        const Type &front() const;
        void push(const Type &);
        void pop();
        bool empty() const;
    };

    template <class T, size_t N> void array_init(T (&parm)[N])
    {
        for (size_t i = 0; i != N; ++i) {
            parm[i] = 0;
        }
    }
}
