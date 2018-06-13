
// This is my attempt at building a basic chat bot by skratch

#include <iostream>
using namespace std;

cout << "Hey there! If you don't mind me asking, what is your name?" << endl;
string response;
cin >> response;

string currName = "90195=";
string space = " ";
if (!(response.find(space) != std::string::npos)) {
    currName = response;
}
else {
    //querry api.ai or whatever I use
    break;
}

if (currName != "90195=" && currName != shared.username && shared.username != "90195=") {
    cout << "Sorry, I thought your name was " << shared.username << ". Which name do you prefer I use for you?" << endl;
}

