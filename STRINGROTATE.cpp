class Solution {
public:
    bool areRotations(string s1, string s2) {
        if (s1.length() != s2.length()) return false;

        string temp = s1 + s1;

        return (temp.find(s2) != string::npos);
    }
};
/* HUME ISMAI YAHI CHECK KRNA THA KI KYA HUMARI JO S1 STRING 
HAI VO = HAI S2 STRING SE LIKE ROTATE HOTE HE AGAR HUME HUMARI
S1 MIL JAYE S2 SE TOH TRUE HOGA RETURN YA TO FALSE; */ 

