
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Boy_or_Girl{
    private:
        string Name;
    public:
        Boy_or_Girl(){
            cin >> Name;
        }
        void print(){
            int i = 0, cnt = 0;
            long long int HashBits = 0;
            /* we will deal with the long integer with 64 bits as a hash table, 
               each character will have a bit indexed
               capital Characters will be from index 0 to 25
               Small Characters will be from index 26 to 51 */
            while(Name[i] != '\0'){
                /* If it's small Character */
                if(Name[i] <= 90){
                    if( (HashBits & (1 << (Name[i] - 65) ) ) & (1 << (Name[i] - 65) ) ){
                        
                    }else{
                        HashBits |= (1 << (Name[i] - 65));
                        cnt++;
                    }
                }else if(Name[i] <= 122){
                    if( (HashBits & (1 << (Name[i] - 97 + 25) ) ) & (1 << (Name[i] - 97 + 25) ) ){
                        
                    }else{
                        HashBits |= (1 << (Name[i] - 97 + 25));
                        cnt++;
                    }
                }
                i++;
            }
            if(cnt % 2){
                cout << "IGNORE HIM!";
            }else{
                cout << "CHAT WITH HER!";
            }
        }
};

int main()
{
    Boy_or_Girl p;
    p.print();
}
