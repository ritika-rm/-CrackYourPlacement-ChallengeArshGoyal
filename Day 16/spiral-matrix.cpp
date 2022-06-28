class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int count=0;
        int total=rows*cols;
        vector<int> vec;
        //initializing rows and cols
        int startRow=0;
        int startCol=0;
        int endRow=rows-1;
        int endCol=cols-1;
        
      
        while(count<total){
        //startingrow print
        for(int j=startCol;count<total && j<=endCol;j++)
        {
            vec.push_back(matrix[startRow][j]);
            count++;
        }
        startRow++;
        //endingcoloumn print
         for(int i=startRow;count<total && i<=endRow;i++)
         {
             vec.push_back(matrix[i][endCol]); 
             count++;
         }
        endCol--;
          //endingrow print
         for(int j=endCol;count<total && j>=startCol;j--)
         {
             vec.push_back(matrix[endRow][j]);
             count++;
         }
        endRow--;
          //startingcoloumn print
          for(int i=endRow;count<total && i>=startRow;i--)
         {
             vec.push_back(matrix[i][startCol]); 
             count++;
         }
        startCol++;  
        }    
       return vec; 
    }
};

lovebabbar soln, took alot of time. diagramatic explanation in copy, tc O(mn)
this thing "count<total && i<=endRow" added in for loop extra for checking if count excees total
