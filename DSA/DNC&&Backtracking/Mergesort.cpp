#include<iostream>
using namespace std;

void merge(int arr[], int start, int end, int mid) {
    int lenleft = mid - start + 1;
    int lenright = end - (mid + 1) + 1;
    int* leftarray = new int[lenleft];
    int* rightarray = new int[lenright];
    int k = start;
    for (int i = 0; i < lenleft; i++) {
        leftarray[i] = arr[k];
        k++;
    }
    k = mid + 1;
    for (int i = 0; i < lenright; i++) {
        rightarray[i] = arr[k];
        k++;
    }
    int leftindex = 0;
    int rightindex = 0;
    int mainindex = start;

    while (leftindex < lenleft && rightindex < lenright) {
        if (leftarray[leftindex] < rightarray[rightindex]) {
            arr[mainindex] = leftarray[leftindex];
            leftindex++;
            mainindex++;
        }
        else {
            arr[mainindex] = rightarray[rightindex];
            rightindex++;
            mainindex++;
        }
    }
    while (rightindex < lenright) {
        arr[mainindex] = rightarray[rightindex];
        rightindex++;
        mainindex++;
    }
    while (leftindex < lenleft) {
        arr[mainindex] = leftarray[leftindex];
        leftindex++;
        mainindex++;
    }
    delete[] leftarray;
    delete[] rightarray;
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, end, mid);
    }
}

int main() {
    int arr[] = { 20, 60, 55, 15, 49, 30, 72 };
    int n = 7;
    int start = 0;
    int end = n - 1;
    cout << "Before merge sort" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    mergeSort(arr, start, end);
    cout << "\nAfter merge sort" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}




// #include<iostream>
// using namespace std;

// void mergeSort(int arr[],int start,int end){
// //  base cases
// if(start=end){
//     return;
// }
// if(start > end){
//     return ;
// }

//     int mid=start+(end-start)/2;
//     while(start < end){
//         // break in two parts 
//         // left part
//         mergeSort(arr,start,mid);
//         // right part
//         mergeSort(arr,mid+1,end);
//         // calling merge function
//         merge(arr,start,end,mid);
//     }

// }

// void merge(int arr[],int start,int end,int mid){
//     int lenleft=mid-start+1;
//     int lenright=end-(mid+1)+1;
//     int * leftarray=new int [lenleft];
//     int * rightarray=new int [lenright];
//     int k=start;
//     for(int i=0;i<lenleft;i++){
//         leftarray[i]=arr[k];
//         k++;
        
//     }
//     k=mid+1;
//     for (int i=0;i<lenright;i++){
//         rightarray[i]=arr[k];
//         k++;
//     }
//     int leftindex=0;
//     int rightindex=0;
//     int mainindex=start;

//     while(leftindex<lenleft && rightindex<lenright){
//         if(leftarray[leftindex]<rightarray[rightindex]){
//             arr[mainindex]=leftarray[leftindex];
//             leftindex++;
//             mainindex++;
//         }
//         else{
//             arr[mainindex]=rightarray[rightindex];
//             rightindex++;
//             mainindex++;
//         }
//     }
//     while(rightindex<leftindex){
//         arr[mainindex]=rightarray[rightindex];
//         rightindex++;
//         mainindex++;
//     }
//     while(leftindex<rightindex){
//         arr[mainindex]=leftarray[leftindex];
//         leftindex++;
//         mainindex++;
//     }
//     delete [] leftarray;
//     delete [] rightarray;
    
// }




// int main(){
//     int arr[]={20,60,55,15,49,30,72};
//     int n=7;
//     int start=0;
//     int end=n-1;
//     cout<<"Before merge sort"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     mergeSort(arr,start,end);
//       cout<<"After merge sort"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
    
// }