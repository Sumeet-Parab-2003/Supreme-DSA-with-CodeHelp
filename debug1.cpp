#include<iostream>
using namespace std ;

//1) The below code snippet has some errors. Let’s debug it and make it compile & run successfully.
// int main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i where i=i+1 */
// 	cout<<++i;
// }

// 2) Below code should print the sum of ‘i’ and ‘j’.
// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<-(i+j);

// }

// 3) Find perimeter of a rectangle.
// int main() {
// 	float l=8, b=6;
// 	float P = 2*(l+b);
// 	cout << "Perimeter = "<< P;

// }

// 4) Print solid square pattern.
// int main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
    
// }

// 5) Check given number is Prime or not.
int main(){
	int n;
	cin >> n;
	bool isPrime = true;
  for(int i=2;i<n;i++){
      if(n%i == 0){
          isPrime = false; break;
      }
  }
	if(isPrime== true){
		cout<<"Prime"<<endl;	
	}
	else{
		cout<<"Not Prime"<<endl;	
	}
  return 0;
}