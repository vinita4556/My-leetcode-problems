class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end());

        int n = s.size();
        int i = 0;
        int j = 0;

        while(i < n) {

            // Skip extra spaces
            while(i < n && s[i] == ' ') {
                i++;
            }

            if(i >= n) break;

            // Add space between words
            if(j > 0) {
                s[j++] = ' ';
            }

            int start = j;

            // Copy current word
            while(i < n && s[i] != ' ') {
                s[j++] = s[i++];
            }

            // Reverse current word
            reverse(s.begin() + start, s.begin() + j);
        }

        s.resize(j);
        return s;
    }
};