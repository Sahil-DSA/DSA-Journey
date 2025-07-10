
int main(){
    int arr[567],size;
    cout<<"Enter the size of array => ";
    cin>>size;
    arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index => ";
        cin>>arr[i];
    }
    max_array(arr,size);