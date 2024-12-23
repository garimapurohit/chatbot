#include<bits/stdc++.h>
using namespace std;
void toLowerCase(string& inputString) {
    for (char& character : inputString) {
        character = tolower(character);  
    }
}
int main() {
    cout << "Chatbot: Hello! I'm your friendly chatbot. Ask me something or type 'bye' to exit.\n";

    string userInput;
    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        toLowerCase(userInput);

        if (userInput == "bye" ) {
            cout << "Chatbot: Goodbye! Have a nice day!"<<endl;
            break;
        }

        if (userInput == "hello" || userInput == "hi") {
            cout << "Chatbot: Hello! i am a chatbot designed using c++ :)?"<<endl;
        } 
        else if (userInput == "how are you") {
            cout << "Chatbot: I'm just a program, but I'm functioning perfectly!hehe :-) Thanks for asking."<<endl;
        } 
        else if(userInput == "tell me about yourself"){
            cout<<"chatbot: i am just a chatbot "<<endl;
            cout<<"hehe!! just kidding i am a chatbot designed using c++ .." <<endl;
            cout<<"i was designed for no purpose just my developer wants to learn c++ (or probably getting bored ),"<<endl;
            cout<<"though my usecase is limited (or i don't have any use case lol)"<<endl;
        }
        else if (userInput == " Do you have any name ?") {
            cout << "Chatbot: Noii i love to keep my identity hidden thoug u could see me through red glass (Mr.India uk :) ."<<endl;;
        } 
        else if (userInput.find("weather") != string::npos) {
            cout << "Chatbot: I'm not sure about the weather, but i am sure it's as bright as your face!"<<endl;
        } 
        else if (userInput.find("thank") != string::npos) {
            cout << "Chatbot: You're welcome! I'm here to help."<<endl;
        } 
        else if (userInput == " tell me a joke ?"){
            cout<<"chatbot: Why don’t scientists trust atoms?"<<endl;
            cout<<"Because they make up everything! lol :)  "<<endl;

        }

        else {
            cout << "Chatbot: Sorry, I don't understand that. Could you try asking something else?(as my use case is restricted )"<<endl;
        }
    }

    return 0;
}
