class Solution {
public:
    void reverseString(vector<char>& s) {
        char n = s.size();
        char st = 0;
        char end = n-1;

        while(st<end){
            swap(s[st],s[end]);
            st++, end--;
        }
    }
};