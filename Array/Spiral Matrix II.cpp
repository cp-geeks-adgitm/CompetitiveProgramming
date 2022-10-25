class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n));
        int m=arr[0].size();
        // vector<int> ans;
        int rmin=0,rmax=n-1,cmin=0,cmax=m-1,count=0;
        while(count < (n*m)){
            for(int i=cmin;i<=cmax && count < (n*m);i++){
                arr[rmin][i]=count+1;
                count++;
            }
            rmin++;
            
            for(int i=rmin;i<=rmax && count < (n*m);i++){
                arr[i][cmax]=count+1;
                count++;
            }
            cmax--;
            for(int i=cmax;i>=cmin && count < (n*m);i--){
                arr[rmax][i]=count+1;
                count++;
            }
            rmax--;
            for(int i=rmax;i>=rmin && count < (n*m);i--){
                arr[i][cmin]=count+1;
                count++;
            }
            cmin++;
            
        }
        return arr;
    }
};
