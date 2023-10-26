#include<iostream>
#include<time.h>
#include<vector>
 using namespace  std;
 int main(){
    srand(time(0)); //  randomizing the rand() every time
   vector <int> a; // intialising the input dynamic array
   int n = 10; // number of iterations
    int b[n]={};
   cout<<n<<'\n'; //  printing the value for iterations
   for(int i=0;i<n;++i){
    a.push_back(rand()%100+1);
   }
   cout << "The generated numbers are : ";
   for(int i=0;i<n;++i){
    cout<< a[i]<<","; // printing the vector value 
   }

   for(int i=0;i<n;i++){
    b[i]= rand()%100+1;
   }
   cout<<"\n";
    cout<<"values of the array :";
   for (int j=0;j<n;j++){
  
    cout<< b[j] <<',';
   }
// now bubble sorting the values in vector
int temp=0;
for(int i=0;i<n;++i){
    for(int j=0;j<n;++j)
    {
        if(a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
int temp2=0;
for(int i=0;i<n;i++){
    for(int j =i+1;j<n;j++){
        if(b[i]>b[j]){
            temp2 = b[i];
            b[i]=b[j];
            b[j]=temp2;
        }
    }
}
cout << "\n";
cout<<"Sorted values of Vector : ";
for(int i =0;i<n;i++){
    cout<< a[i]<<",";
}
cout<<'\n';
cout<< "Sorted values of array : ";
for(int i=0;i<n;i++){
    cout<< b[i]<<',';
}

 }