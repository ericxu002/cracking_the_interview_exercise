#include <iostream>
#include <string>
using namespace std;

string solution(string input){
    string returnValue("");
    char lastValue = input[0];
    int counter(0);
    for(unsigned long i = 0; i < input.length(); i++){
        if((lastValue != input[i]) ){
            returnValue += lastValue;
            lastValue = input[i];
            returnValue += to_string(counter);
            counter = 1;
        }
        else{
            counter += 1;
        }
    }
    returnValue += lastValue;
    returnValue += to_string(counter);
    return returnValue;
}

//provided a string convert it to valueCOUNTETC
int main(){
    cout<<solution("aaabcccccaa")<<endl;
    return 0;
}