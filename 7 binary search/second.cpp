// first array ko sort krna pdega,
// left -  end= mid-1;
//roght  - start= mid+1;
// time complexit

# include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
int start=0,end=n-1,mid;

while(start<=end){
    //mid find karo
mid= (start+end)/2;
if(arr[mid]==key){
    return mid;
}

else if(arr[mid]<key){
     end=mid-1;
    
}

else{
   start= mid+1;

}

    
}
// if  jo hme seaarch krna h vo array me hi na ho to
return -1;

}


int main(){
int arr[1000];
int n;
cout<<"enter the number of element in array";
cin>>n;
cout<<"Enter Elements";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    int key;
    cout<<"Enter the key";
    cin>>key;


cout<<BinarySearch(arr,n,key)<<endl;
return 0;
}