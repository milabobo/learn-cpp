#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

void print_container(vector<int>::const_iterator begin, vector<int>::const_iterator end) {
    for(;begin != end; ++begin) {
        cout << *begin;
        if(begin != end - 1)
            cout << ", ";
    }
    cout << endl;
}

// comparison function to be used to sort by word length
bool isSmaller(const int &s1, const int &s2) {
    return s1 < s2;
}
// determine whether a length of a given word is 6 or more
bool GT100(const int &s) {
    return s >= 100;
}

int t_algorithm() {
    // find
    int ia[7] = {27, 210, 12, 47, 210, 109, 83};
    int ib[1] = {210};
    int search_value = 83;
    int *result = find(ia, ia + 6, search_value);

    vector<int> va(ia, ia+6);
    vector<int>::iterator it = find(va.begin(), va.end(), search_value);
    cout << "The value " << search_value
            << (result == ia + 6
            ? " is not present" : " is present")
            << endl;

    cout << "The value " << search_value
            << (it == va.end()
            ? " is not present" : " is present")
            << endl;

    // accumulate
    int sum = accumulate(va.begin(), va.end(), 0);
    cout << "Sum is " << sum << endl;

    // find_first_of (not match returns va.end())
    vector<int>::iterator vit = va.begin();
    int cnt = 0;
    while((vit = find_first_of(vit, va.end(), ib, ib + 1)) != va.end()) {
        ++cnt;
        ++vit;
    }
    cout << "Common count is " << cnt << endl;

    // fill
    //fill(va.begin(), va.end(), 156);

    // back_insert
    fill_n(back_inserter(va), 10, 1);

    // replace
    replace(va.begin(), va.end(), 1, 189);

    // sort
    sort(va.begin(), va.end());

    // unique
    vector<int>::iterator vvit = unique(va.begin(), va.end());
    va.erase(vvit, va.end());

    // stable sort
    stable_sort(va.begin(), va.end(), isSmaller);

    // count if
    vector<int>::size_type size = count_if(va.begin(), va.end(), GT100);
    cout << "Size great than 100 is " << size << endl;

    // print container
    print_container(va.begin(), va.end());

    return 0;
}