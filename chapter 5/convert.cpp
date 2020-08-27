#include <iostream>  
#include<string>
#include <algorithm>
using namespace std;  
int main(void)  
{  
    int a[10], n, i , ocnum=0,answer=0,set=1;  
     int j, ocno=0,dn;
     string hex;
  unsigned long l;
     
    cout<<"Enter Decimal : ";    
    cin>>n; 
    dn=n;
    l=n;    
     
    for(i=0; n>0; i++)    
    {    
        a[i]=n%2;    
        n= n/2;  
    }    
    cout<<"Binary is ";    
    for(i=i-1 ;i>=0 ;i--)    
    {    
        cout<<a[i];    
    }    
    cout<<endl;

   
     i=1;

      for(j=dn;j>0;j=j/8)
       {
        ocno=ocno+(j % 8)*i;
        i=i*10;
        n=n/8;
       }
     
     cout<<"Octal is "<<ocno<<endl;


     
  

  if ( l == 0 )
    hex = "0";
  else
  {
    while (l)
    {
      unsigned char c = l & 0x0F;
      hex += static_cast<char>( c < 10 ? c + '0' : c - 10 + 'A' );
      l >>= 4;
    }
    reverse( hex.begin(), hex.end());
  }
  cout<<"Hex is " << hex << endl;

    system("pause");
}  