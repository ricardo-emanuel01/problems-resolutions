# include <bits/stdc++.h>


using namespace std;

string reverseWord(string s) {
    int size = s.length();
    string temp;
    stack<string> st;
    string res;

    for (int i = 0; i < size; i++) {
        if (s[i] == ' ') {
            if (temp.empty()) continue;
            else {
                st.push(temp);
                temp = "";
            }
        } else temp += s[i];
    }
    if (!temp.empty()) st.push(temp);

    int sizeStack = st.size();
    for (int i = 0; i < sizeStack; i++) {
        temp = st.top();
        st.pop();

        if (st.empty()) res += temp;
        else res += temp + ' ';
    }

    return res;
}
