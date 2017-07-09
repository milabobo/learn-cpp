#include <list>
#include <vector>
#include <deque>
#include <string>
using namespace std;

void print_container(vector<string>::const_iterator begin, vector<string>::const_iterator end) {
    for(;begin != end; ++begin) {
        cout << *begin << endl;
    }
    cout << endl;
}

void print_container(list<string>::const_iterator begin, list<string>::const_iterator end) {
    for(;begin != end; ++begin) {
        cout << *begin << endl;
    }
    cout << endl;
}

void print_container(deque<string>::const_iterator begin, deque<string>::const_iterator end) {
    for(;begin != end; ++begin) {
        cout << *begin << endl;
    }
    cout << endl;
}

int t_container() {
    vector<string> m(5);
    vector<string> a;
    a.push_back("Hello");
    a.push_back("Tian");
    a.push_back("Yu");
    a.push_back("World");
    vector<string> b(a);

    list<string> slist(a.begin(), a.end());

    vector<string>::iterator it = a.begin() + a.size() / 2;

    deque<string> front(a.begin(), it);
    deque<string> back(it, a.end());

    vector<string> d(6, "Mimi");

    string s[] = { "Apple", "Pine", "Pitch", "Banana" };
    cout << "sizeof s " << sizeof(s) << endl;
    cout << "sizeof char * " << sizeof(char *) << endl;
    list<string> sslist(s, s + 4);

    vector< vector<string> > vvector;

    print_container(m.begin(), m.end());
    print_container(a.begin(), a.end());
    print_container(b.begin(), b.end());
    print_container(slist.begin(), slist.end());
    print_container(front.begin(), front.end());
    print_container(back.begin(), back.end());
    print_container(d.begin(), d.end());
    print_container(sslist.begin(), sslist.end());

    return 0;
}