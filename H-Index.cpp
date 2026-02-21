class Solution {
  public:
    int hIndex(vector<int>& citations) {
      sort(citations.begin(),citations.end(), greater<int>());
       int H = 0;
       for(int i = 0; i<citations.size(); i++){
           if( citations[i] >= i + 1){
             H = i+1; 
           }else{
               break; 
           }
       }
       return H; 
    }
};
