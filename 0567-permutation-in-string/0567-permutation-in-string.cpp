class Solution { 
private:
    bool checkEqual(int a[26], int b[26]){
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }

public: 
    bool checkInclusion(string s1, string s2) { 
        if(s1.length() > s2.length()){
            return 0;
        }

        int cnt1[26] = {0};

        for(int i = 0; i < s1.length(); i++){
            int idx = s1[i] - 'a';
            cnt1[idx]++;
        }

        int i = 0;
        int windowSize = s1.length();
        int cnt2[26] = {0};

        while(i < windowSize){
            int idx = s2[i] - 'a';
            cnt2[idx]++;
            i++;
        }

        if(checkEqual(cnt1, cnt2)){
            return 1;
        }

        while(i < s2.length()){
            char newChar = s2[i];
            int idx = newChar - 'a';
            cnt2[idx]++;

            char oldChar = s2[i - windowSize];
            idx = oldChar - 'a';
            cnt2[idx]--;

            i++;

            if(checkEqual(cnt1, cnt2)){
                return 1;
            }
        }

        return 0;
    } 
};