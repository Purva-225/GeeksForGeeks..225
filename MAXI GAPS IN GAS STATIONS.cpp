bool Gaps(vector<int>& Stations,  double  mid,int K){
    int n = Stations.size(); 
    //int pieces =0;
    int StationsNeede = 0; 
    int pieces = 0; 
    double req = 0; 
    
    for(int i = 0; i<n-1; i++){
      int gaps = Stations[i+1] - Stations[i]; 
        pieces=(int)ceil((double)gaps/mid);
        StationsNeede = pieces -1; 
        req += StationsNeede ;
    }
   return req <= K;
}
class Solution {
  public:
    double minMaxDist(vector<int> &Stations, int K) {
        int n = Stations.size(); 
           double  low = 0; 
          double  high = 0; 
         
         for(int i = 0; i<n-1; i++){
             high = max(high,(double)(Stations[i+1]-Stations[i]));
         }
          
        while(high-low > 1e-6 /*0.000001*/){
         double  mid = low + (high - low)/2; 
        
          if(Gaps(Stations,mid,K)){
              high = mid; 
          }else{
              low = mid; 
          }
        }
        return high; 
    }
};
