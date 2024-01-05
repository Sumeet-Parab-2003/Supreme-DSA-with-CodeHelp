int n,temp ;
cout << "room me kitne log hai??" << endl;
cin >> n;
int avg= 0;
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
