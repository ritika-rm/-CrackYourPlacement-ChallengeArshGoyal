https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

string encode(string src)
{     
  //Your code here 
   string str = "";
  for(int i=0;i<src.length();i++)
  {   
     
      int j=1;
      while(src[i+1]==src[i])
      {
          j++;
          i++;
      }
      str+=src[i];
      str+=to_string(j);
  }
  return str ;
}  


rhlp
