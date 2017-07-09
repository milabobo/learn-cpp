#include <iostream>
#include <vector>
#include <string>
#include <string>
#include <map>
#include <list>

using namespace std;

void print_container_digit(map<int, int>::const_iterator begin, map<int, int>::const_iterator end) {
    while(begin != end) {
        cout << begin->first << ", " << begin->second << endl;
        ++begin;
    }

    cout << endl;
}

void deleven(int a[], vector<int> l1, size_t size)
{
    int i = 0;

    while (size--) {
        l1.push_back(a[i++]);
    }

    auto c = l1.begin();

    while (c != l1.end())
    {
        if (*c % 2 == 0) {
            c = l1.erase(c);
        }
        else
        {
            ++c;
        }
    }
    cout << l1.size() << endl;
    for (auto c : l1)
    {
        cout<<c<<" ";
    }

}

// count every digit counts of input digits
int t_count_digit() {
    map<int, int> a;
    int i = -1;
    while (cin >> i && i != -1) {
        ++a[i];
    }

    print_container_digit(a.begin(), a.end());

    int c[] = {3,2,3,4,5,5,2,3,17};
    vector<int> d;
    deleven(c, d, 9);
    return 0;
}