# include <iostream>
# include <vector>

using namespace std;

int main()
{
 vector < vector<int> > table;
 table.resize(12);
 
  for(int row =0; row < 12; row++)
   {
    table[row].resize(12);
   } 
    
    for(int row = 0; row < table.size(); row++)
      {  
        for(int column = 0; column < table[row].size(); column++) 
          {
           table[row][column] = (row+1)*(column+1);
          } 
      }    
           for(int row = 0; row < 12; row++)
           {
            for(int column = 0; column < 12; column++)
             {
              cout<<table[row][column]<<" | ";
             }
             cout<<endl;
           }
            
return 0;

}
