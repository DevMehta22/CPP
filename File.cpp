#include<iostream>
#include<string>

constexpr int maxbuffer = 1024;

using namespace std;

int main(){

    const char * filename = "mythisfile.txt";
    const char * info = "lorem epsum dolor sit amet\n";
    
    // FILE * file = fopen(filename, "a");
    // if(file == NULL){
    //     cout << "Error opening file" << endl;
    //     return 1;
    //     }
    //     else{
    //         cout << "File opened successfully" << endl;
    //         for(int i = 0;i<50;++i){
    //             fputs(info,file);
    //         }
    //     }

    char buffer[maxbuffer];
    FILE * file = fopen("mythisfile.txt","r");
    if(file == NULL){
        cout << "Error opening file" << endl;
        return 1;
        }
        else{
            cout << "File opened successfully" << endl;
            while(fgets(buffer,maxbuffer,file)){
                cout << buffer;
                }
            fclose(file);
                }
    return 0;
}