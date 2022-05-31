#pragma once

#include<bits/stdc++.h>
using namespace std;


//2. Написати класс для повідомлень.
//3. Напистаи програму додавання повідомлень. Передбачити можливість прочитати поточне повідомлення.

class Message {
    
    private:
        string comment;
        Message* parent;
        vector<Message*> replies;

    public:
        Message(string comment) {
            this->parent = nullptr;
            this-> comment = comment;
        }
        
        string getCurrentComment() {
            return comment;
        }

        Message* getParent() {
            return parent;
        }

        // n - 1..replies.size
        Message* getNthReply(int n) {
            if (n>replies.size()) {
                return nullptr;
            }
            return replies[n-1];
        }

        bool addReply(Message *message) {
            replies.push_back(message);
        }
};