class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> queue(26);

    for (int i=0;i<s.length();i++){
        ++queue[s[i] - 'a'];
    }

    for (int i = 0; i < s.length(); ++i)
      if (queue[s[i] - 'a'] == 1)
        return i;

    return -1;
    }
};