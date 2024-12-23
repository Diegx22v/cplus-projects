#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string anagrama(string a, string b){
    sort(a.begin(), a.end());
    sort(b.begin() , b.end());
    if(a == b) 
        return "YES";
    return "NO";
}
int main() {
    cout << anagrama("pedro" , "poder") << endl;
    return 0;
}
