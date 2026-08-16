#include<bits/stdc++.h>
using namespace std;
int main(){
        int y;
        cin>>y;
        y++;
      while (true) {
        string s = to_string(y);
        set<char> st(s.begin(), s.end());
        if (st.size() == s.size())
            break;
        y++;
    }
    cout << y << "\n";
    return 0;
}