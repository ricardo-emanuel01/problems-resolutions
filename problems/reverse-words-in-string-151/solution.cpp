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


// Using two pointers only
string reverseWords(string s) {
    string res;
    int end = s.size() - 1;

    while (end >= 0) {
        while (end >= 0 && s[end] == ' ') end--;
        if (end < 0) break;

        if (!res.empty()) res += ' ';

        int start = end;
        while (start >= 0 && s[start] != ' ') start--;

        for (int i = start + 1; i < end + 1; i++) res += s[i];
        end = start;
    }
    return res;
}
