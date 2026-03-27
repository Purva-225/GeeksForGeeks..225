//K'th Non-repeating Character

char kthNonRepeatingChar(string str, int k){
     int cnt = 0; 
     char result = '\0';
      
      for(int i =0; i<str.length(); i++){
       bool repeating = false; 

   // yaha check krenge ki kya vo same char puri string mai toh nai hai? 
     for(int j = 0; j<i; j++){
      if(str[j] == str[i]){
        repeating  =  true;
      }
     }
     for(int j = i+1; j<n; j++){
      if(str[i] == str[j]){
        repeating  =  true;
   }
 }
 if(!repeating){
  cnt++;
if(cnt == k){
result  = str[i];
break;
}
 }
}

return result;

}

/* #include<bits/stdc++.h>
using namespace std;
//K'th Non-repeating Character

char kthNonRepeatingChar(string str, int k){
      int cnt = 0; 
      char result = '\0';
      
      for(int i =0; i<str.length(); i++){
       bool repeating = false; 

   // yaha check krenge ki kya vo same char puri string mai toh nai hai? 
     for(int j = 0; j<i; j++){
      if(str[j] == str[i]){
        repeating  =  true;
      }
     }
     for(int j = i+1; j<str.length(); j++){
      if(str[i] == str[j]){
        repeating  =  true;
   }
 }
 if(!repeating){
  cnt++;
if(cnt == k){
result  = str[i];
break;
}
 }
}

return result;

}
int main()
{
    string str = "geeksforgeeks";
    int k = 3;
    
    char result = kthNonRepeatingChar(str, k);

    if (result == '\0') {
        cout << " no kth non-repeating character "
                "in string.\n";
    }
    else {
        cout << "The " << k
             << "th non-repeating character in the string "
                "is "
             << result << ".\n";
    }
    return 0;
} */
