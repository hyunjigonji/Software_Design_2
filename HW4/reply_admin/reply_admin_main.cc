#include <iostream>
#include <string>
#include <list>
#include "reply_admin.h"

using namespace std;

bool replyOperation(ReplyAdmin *_replyAdmin){
    
    string inputs;
    getline(cin, inputs);
    
    if(inputs == "#quit") return false;
    
    else if(inputs.find("#remove") != string::npos){
        
        inputs.erase(0, 8);
        
        int start = -1;
        int end = -1;
        int number = -1;
        
        list<int> numbers;
        int numbersCount = 0;
        
        bool isRemoveValid = false;
        
        for(int i=0; i<inputs.size(); ++i){
            
            char c = inputs[i];
            
            if(isdigit(c) == true){
                
                int num = (int)c - (int)'0';
                if(number < 0) number = num;
                else number = number * 10 + num;
            }
            else{
                
                if(c == ','){
                    numbers.push_back(number);
                    numbersCount++;
                }
                else if(c == '-') start = number;
                number = -1;
            }
        }
        
        if(start >= 0) end = number;
        
        if(end >= start && start >= 0) isRemoveValid = _replyAdmin->removeChat(start, end);
        else if(numbersCount > 0){
            
            numbers.push_back(number); // final number
            numbersCount++;
            
            isRemoveValid = _replyAdmin->removeChat(numbers);
        }
        else if(number >= 0) isRemoveValid = _replyAdmin->removeChat(number);
        
        if(isRemoveValid == true) _replyAdmin->printChat();
        
    }
    else if(_replyAdmin->addChat(inputs)) _replyAdmin->printChat();
    
    return true;
}

int main(void){
    
    ReplyAdmin *replyAdmin = new ReplyAdmin();
    
    while(replyOperation(replyAdmin)) {  }
    
    delete replyAdmin;
    
    return 0;
}
