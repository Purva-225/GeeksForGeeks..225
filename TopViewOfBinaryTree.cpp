class Solution {
  public:
  
    bool valid(string s){
        
        if(s.size() == 0 || s.size() > 3)
            return false;
       
        if(s.size() > 1 && s[0] == '0')
            return false;

        int num = stoi(s);

        return num >= 0 && num <= 255;
    }

    vector<string> generateIp(string &s) {
    
        vector<string> ans;
        int n = s.size();

        if(n < 4 || n > 12)
            return ans;

        for(int i = 1; i <= 3 && i < n; i++){
            for(int j = i+1; j <= i+3 && j < n; j++){
                for(int k = j+1; k <= j+3 && k < n; k++){

                    string a = s.substr(0, i);
                    string b = s.substr(i, j-i);
                    string c = s.substr(j, k-j);
                    string d = s.substr(k);

                    if(valid(a) && valid(b) && valid(c) && valid(d)){
                        ans.push_back(a + "." + b + "." + c + "." + d);
                    }
                }
            }
        }

        return ans;
    }
};
