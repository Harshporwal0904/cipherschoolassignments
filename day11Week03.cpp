
/*Ques 1: You are given an array and target value. Your task is to find the target value that 
exists in the array. If it exists inside an array then print YES otherwise NO.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 7, 8};
    //int target = 6;
    int target = 5;

    int size = sizeof(arr)/sizeof(arr[0]);

    int found = 0;
    for(int i = 0; i < size; i++)
    {
       if(arr[i] == target){
            found++;
       }
    }

    if(found){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    

    return 0;


}

/*Ques 2: You are given an array and target value. You have to find the index of target value. 
If target doest exist inside the array then print -1.Assume indexing is 1 based.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;
    //int target = 5;

    int size = sizeof(arr)/sizeof(arr[0]);

    int index = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            index = i + 1;
        }
    }

    cout << index;
}