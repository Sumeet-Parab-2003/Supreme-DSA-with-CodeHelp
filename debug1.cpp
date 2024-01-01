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
// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(n%i == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime== true){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }

//6) Print Numeric Hollow Inverted Half Pyramid 
// int main() {
//     int n;
//     cin>>n;
//     for (int row = 1; row <= n; row++) {
//         for (int col = 1; col <=  n - row + 1; col++) {
//             if (col == 1) {
//                 cout << row << " ";
//             } else if (row == 1) {
//                 cout << col << " ";
//             } else if (col == n - row + 1) {
//                 cout << n << " ";
//             } else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// 7)print this:
//           1
//         2 3 2 
//       3 4 5 4 3 
//     4 5 6 7 6 5 4 
//   5 6 7 8 9 8 7 6 5 
int main() {
  int n;
  cin>>n;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n ; j++) {
      cout << "  ";
    }
    int count = i;
    for (int k = 1; k <= i ; k++,count++) {
      cout << count << " ";
    }
    int ele = count - 2;
    for (int j = 1; j <= i - 1; j++) {
      printf("%d ", ele--);
    }
    printf("\n");
  }

}