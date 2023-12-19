#include<iostream>
using namespace std;
int main(){
     // cout << "Hello World" << endl;

     //Taking Input
    //  int a;
    //  cout << "Enter a number" << endl;
    //  cin >> a;
    //  cout<< " you entered " << a << " number"<< endl;

    //Data types
//     int a = 5;
//     cout << "value of a is: " << a << endl;

//     char ch = 'a';
//     cout << "value of ch is: " << ch << endl;

//     bool b = true;
//     cout << "value of b is: " << b << endl;

//     float c = 1.322;
//     cout << "value of c is: " << c << endl;

//     double d = 1.3434455353509;       // dounle has more range than float
//      cout << "value of d is: " << d << endl;

     //For Loops

     // for(int i=0 ; i<=10 ;i++ ){
     //      cout << "2*"<<i<<"=" <<2*i << endl;
     // }

     // for(int i=1 ; i<=100; i= i*2){
     //      cout << i << endl;
     // }

     // for(int i=1000 ; i>0 ; i= i/2 ){
     //      cout << i << endl;
     // }


     //Patterns

     //Solid rectangle
     // for(int  i=0 ; i<3 ; i++){
     //      for( int j=0 ; j<5 ; j++){
     //           cout << "* ";
     //      }
     //      cout << endl;
     // }


     //solid Square
     // for (int i = 0 ; i<4 ;i++){
     //      for(int j=0 ; j<4 ;j++){
     //           cout << "* ";
     //      }
     //      cout << endl; 
     // }
              
     //User input Solid Square
     int n;
     cout << "Enter value of n: " ;
     cin >> n;
     for(int i =0; i<n ;i++ ) {
          for(int j = 0 ; j<n ;j++ ){
               cout<<" * ";
          }
          cout << "\n";
     }        
}
   
