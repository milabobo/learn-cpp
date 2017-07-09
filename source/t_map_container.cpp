#include <set>
#include <map>
#include <string>
#include <iostream>

using namespace std;

void print_container(map<string, int>::const_iterator begin, map<string, int>::const_iterator end) {
    while(begin != end) {
        cout << begin->first << ", " << begin->second << endl;
        ++begin;
    }

    cout << endl;
}

int t_map_container() {

    map<string, int> mp;
    // auto sort
    mp["tianyu"] = 1;
    mp["wangziyi"] = 3;
    mp["wanglu"] = 2;
    mp.insert(map<string, int>::value_type("wangzixuan", 5));
    mp.insert(make_pair("wangruiyang", 4));

    string s;
//    while(cin >> s && s != "eof") {
//        ++mp[s];
//    }

    print_container(mp.begin(), mp.end());

    typedef multimap<string, string>::size_type sz_type;
    multimap<string, string> mmp;
    mmp.insert(make_pair("tianyu", "cool"));
    mmp.insert(make_pair("tianyu", "nice"));

    sz_type entries = mmp.count("tianyu");
    multimap<string, string>::const_iterator mmpit = mmp.find("tianyu");
    for (sz_type cnt = 0 ; cnt != entries; ++cnt, ++mmpit) {
        cout << mmpit->first << ", " << mmpit->second << endl;
    }

    return 0;
}