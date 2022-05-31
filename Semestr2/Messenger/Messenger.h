#pragma once

#include"message.h"

class Messenger {

private:
    vector<Message*> messages;

public:
    Messenger() = default;

    bool addNewMessage(string comment) {
        messages.push_back(new Message(comment));
        return true;
    }

    bool addReply(Message* message, string comment) {
        addNewMessage(comment);
        message->addReply(getCurrentMessage());
    }

    Message* getCurrentMessage() {
        if (messages.empty()) return nullptr;
        return messages.back();
    }
};