/*
     YILDIZ ★
*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
   /* vector<int> v = {10,20,30,40};
    for (vector<int>::const_reverse_iterator it=v.crbegin();it!=v.crend(); it++)
    {
        cout << *it << "\n";
    } */
   
   // auto x = "xxx";
    vector<int> v = { 10,20,30,40 };
    auto it = v.begin();
    for (it; it!=v.end(); it++)
    {
        cout << *it << "\n";
    }

}

