
#ifndef __hw03__reply_admin__
#define __hw03__reply_admin__

#define NUM_OF_CHAT 200

#include <iostream>
#include <string>
#include <list>

using namespace std;

class ReplyAdmin
{
private:
    list<string> chats;
    
public:
    ReplyAdmin();
    ~ReplyAdmin();
    
    bool addChat(string _chat);
    bool removeChat(int _index);                // #remove #
    bool removeChat(list<int> _indices); // #remove #,#,#,#
    bool removeChat(int _start, int _end);      // #remove #-#
    void printChat();
};

#endif

/********************* WARNING! ************************

You MUST add these following functions in ReplyAdmin():

 addChat("Hello, Reply Administrator!");
 addChat("I will be a good programmer.");
 addChat("This class is awesome.");
 addChat("Professor Lim is wise.");
 addChat("Two TAs are kind and helpful.");
 addChat("I think male TA looks cool.");

*******************************************************/

#ifndef __hw03__reply_admin__
#define __hw03__reply_admin__

#define NUM_OF_CHAT 200

#include <iostream>
#include <string>
#include <list>

using namespace std;

class ReplyAdmin
{
private:
    list<string> chats;
    
public:
    ReplyAdmin();
    ~ReplyAdmin();
    
    bool addChat(string _chat);
    bool removeChat(int _index);                // #remove #
    bool removeChat(list<int> _indices); // #remove #,#,#,#
    bool removeChat(int _start, int _end);      // #remove #-#
    void printChat();
};

#endif

/********************* WARNING! ************************

You MUST add these following functions in ReplyAdmin():

 addChat("Hello, Reply Administrator!");
 addChat("I will be a good programmer.");
 addChat("This class is awesome.");
 addChat("Professor Lim is wise.");
 addChat("Two TAs are kind and helpful.");
 addChat("I think male TA looks cool.");

*******************************************************/

