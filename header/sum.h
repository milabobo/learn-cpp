using namespace std;

#ifndef SUM_H
#define SUM_H
//int sum(int x, int y);
inline const string & shortString(const string &s1, const string &s2) {
    return s1.size() < s2.size() ? s1 : s2;
}
#endif