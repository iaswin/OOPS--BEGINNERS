#include < iostream >  
using namespace std ;   
int main ( )   
{  
float dollar ;  
float bp = ( 1 / 1 . 487 ) ;  
float frnc = ( 1 / 0 . 172 ) ;  
float deutschmark = ( 1 / 0 . 584 ) ;  
float yen = ( 1 / 0 . 00955 ) ;  
float ind = ( 1 / 0 . 013 ) ;  
cout << " enter the Dollars for Conversion : \ n " ;  
cin >> dollar ;  
cout << " Indian Rupees : " << ind * dollar << endl ;  
cout << " British Pounds : " << bp * dollar << endl ;  
cout << " French franc : " << frnc * dollar << endl ;  
cout << " German Deutschmark : " << deutschmark * dollar << endl ;  
cout << " Japanese Yen : " << yen * dollar << endl ;  
return 0 ;   
}  