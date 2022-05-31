#include"Messenger.h"

Messenger m;

int main() {
    m.addNewMessage("LOL it should work!");
    m.addReply(m.getCurrentMessage(), "WOW you are fu##ingly crazy =)");
}