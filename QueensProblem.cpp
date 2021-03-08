#include <iostream>
#include <unordered_set>
using namespace std;

 
int
main ()
{
  
unordered_set < short >row, col, diag1, diag2;
  
short num;
  
bool val = true;
  
cin >> num;
  
while (num--)
    {
      
short r, c, d1, d2;
      
cin >> r >> c;
      
d1 = r + c;
      
d2 = r - c;
      
 
if (row.find (r) != row.end () || col.find (c) != col.end ()
	     || diag1.find (d1) != diag1.end ()
	     || diag2.find (d2) != diag2.end ())
	{
	  
val = false;
	  
break;
	
}
      
      else
	{
	  
row.insert (r);
	  
col.insert (c);
	  
diag1.insert (d1);
	  
diag2.insert (d2);
	
}
    
}
  
 
if (val)
    {
      
cout << "CORRECT";
    
}
  
  else
    {
      
cout << "INCORRECT";
    
}
  
return 0;

}


