class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int n = s.size();
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++){
            a.push_back(s[i]);
        }
         for(int i=0;i<n;i++){
            b.push_back(t[i]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
};
