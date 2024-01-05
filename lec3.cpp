#include<iostream>
using namespace std;
//Conditional statements
int main(){
    
    string palcement;

    // // if statement
    // cout<<"Placement lagi ki nahi??"<<endl;

    // cin >> palcement;

    // if(palcement == "ha"){
    //     cout << "Kya baat hai bhai!!" <<endl;
    // }
    // cout << "Nahi bhai abhi bhi Berozgaar hu :(" << endl;


    // if else 
    //  cout<<"Placement lagi ki nahi??"<<endl;

    // cin >> palcement;

    // if(palcement == "ha"){
    //     cout << "Kya baat hai bhai!!" <<endl;
    // }
    //  else{//nah(palcement == "nahi")
    //     cout << "Nahi bhai abhi bhi Berozgaar hu :(" << endl;
    //  }
            
    //if else-if if
//     int marks;
//     cout << "Enter Marks" <<endl;
//     cin >> marks;
        
//     if(marks>=90){
//         cout << "your grade is A";
//     }
//     else if (marks>=80)
//     {
//         cout << "your grade is B";
//     }
//     else if (marks>=70)
//     {
//         cout << "your grade is C";
//     }
//     else if (marks>=60)
//     {
//         cout << "your grade is D";
//     }
//     else if (marks>=50)
//     {
//         cout << "your grade is E";
//     }
//     else
//         cout << "You are Failed";
    
    // int bro_num;
    // cout << "Enter no. of brothers"<< endl;
    // cin>> bro_num;
    
    // if(bro_num==0){
    //     cout << "Baat banjayegi";
    // }
    // else 
    //  cout << "me maar khalunga";
    //int n;
    // if(cin >> n)
    //     cout << "sumeet";


    // if( cout << "sumeet")
    //     cout << "love"

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
     // int n;
     // cout << "Enter value of n: " ;
     // cin >> n;
     // for(int i =0; i<n ;i++ ) {
     //      for(int j = 0 ; j<n ;j++ ){
     //           cout<<" * ";
     //      }
     //      cout << "\n";
     // }        

    //  //   hollow rectangle/square
    //  for( int i=0 ; i<5 ; i++){
    //       if(i==0 || i ==4){
    //            for(int j=0 ; j<7 ;j++){
    //                 cout << "* ";
    //            }
    //       }
    //       else{
    //            cout<<"* ";
    //            for(int i=0 ; i<5 ; i++){
    //                 cout << "  ";
    //            }
    //            cout << "* " ;
    //       }
    //       cout << endl;
    //  }

    //   hollow rectangle/square
    // int n,k;
    // cout << "enter no. of rows: " << endl;
    // cin >>n;
    // cout << "enter no. of columns: " << endl;
    // cin >>k;
    //  for( int i=0 ; i<n ; i++){
    //       if(i==0 || i ==n-1){
    //            for(int j=0 ; j<k ;j++){
    //                 cout << "* ";
    //            }
    //       }
    //       else{
    //            cout<<"* ";
    //            for(int i=0 ; i<k-2; i++){
    //                 cout << "  ";
    //            }
    //            cout << "* " ;
    //       }
    //       cout << endl;
    //  }

    // Half Pyramid
    // int n,k;
    // cout << "enter no. of rows: " << endl;
    // cin >>n; 
    // for(int i=0; i<n ;i++){
    //     for(int j=0; j<i+1 ; j++){
    //         cout<<"* ";
    //     }
    //     cout<< endl;
    // }

    // Inverted half Pyramid
    // int n,k;
    // cout << "enter no. of rows: " << endl;
    // cin >>n;
    // for (int i = 0; i<n ; i++ ){
        // for (int j=0; j< n-i ; j++){
        //     cout << "* ";
        // }
    //     cout << endl;
    // }

   // Numeric Half Pyramid
    // int n,k;
    // cout << "enter no. of rows: " << endl;
    // cin >>n; 
    // for(int i=0; i<n ;i++){
    //     for(int j=0; j<i+1 ; j++){
    //         cout<<j+1 <<" ";
    //     }
    //     cout<< endl;
    // }

   // Numeric Inverted half Pyramid
    // int n,k;
    // cout << "enter no. of rows: " << endl;
    // cin >>n;
    // for (int i = 0; i<n ; i++ ){
        // for (int j=0; j< n-i ; j++){
        //     cout << j+1 << " ";
        // }
    //     cout << endl;
    // }

    //Full Pyramid trial    
        //     *
        //    * *
        //   * * *
        //  * * * *
        // * * * * *

    // int n,k;
    // cout << "enter no. of rows: " << endl;
    // cin >>n;
    // for (int i = 0; i<n ; i++ ){
    //     for (int k=n-i-1; k> 0 ; k--){
    //         cout << " ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         cout<<"* ";
    //     }

    //     cout << endl;
    // }
// }

//Inverte full pyramid
    //  * * * * * *
    //   * * * * *
    //    * * * *
    //     * * * 
    //      * *
    //       *
// int n,k;
//     cout << "enter no. of rows: " << endl;
//     cin >>n; 
//     for(int i=0; i<n ;i++){
//         for(int j=0; j<i+1 ; j++){
//             cout<<" ";
//         }
//         for (int j=0; j< n-i ; j++){
//             cout << "* ";
//         }
//         cout<< endl;
//     }

// Hollow inverted half pyramid

    // int n;
    // cin >> n;
    // for(int i=0 ;i<n;i++){
    //     for(int j=0 ; j<n-i;j++){
    //         if( j==0 || i==0 || j==n-i-1){
    //             cout << "* " ;
    //         }
    //         else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<< endl;
    // }
    

// int n,k,a,b;
// cout << "Family me kitne log hai??" << endl;
// cin >> n;

// cout << "Kitne log Behgaye" << endl;
// cin >> k;
// int sum = n - k;

// cout << "kitne log wapis aaye??"<< endl;
// cin >> a;

// if(a==0){
//     cout << "bachi hui famiy = " << sum << endl;
// }
// else{
//     cout << " jo wapis aaye vo apne sathe aur kitne laye??" << endl;
//     cin >> b;

//     int total = sum + a + b;
//     cout << "Toatal family members = " << total <<endl;
// }

float n,temp ;
cout << "room me kitne log hai??" << endl;
cin >> n;
float avg= 0;
for (int i=0; i<n; i++){
    cout << "enter the temperature!" << endl;
    cin >> temp;
    
    if (i == 0){
        cout << "Avegrage temperature is :" << temp << endl;
    }
    else{
        avg = (avg+temp)/2;
        cout << "Avegrage temperature is : " << avg << endl;
    }
}

}




   

   


