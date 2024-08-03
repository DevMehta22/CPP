#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};

    int i=0;
    while(i<sizeof(arr)/sizeof(arr[0])){
        cout << arr[i] << endl;
        i++;
    }

    do{
        cout << "Hello";
    }while (i<6);
    
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout << "Helllooo" << endl;   
    }
    
    for (int num:arr){
        cout << num << endl;
    }

    char my_name[]="Dev";
    for(char *cp = my_name;*cp!=0;cp++){
        cout << "character is:" << *cp << endl;
    }

    for(char i:my_name){
        if (i == 0)
            break;
        cout << i << endl;
    }
    
    return 0;
}
