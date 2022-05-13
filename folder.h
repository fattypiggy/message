//
// Created by William on 2022/5/13.
//

#ifndef MESSAGE_FOLDER_H
#define MESSAGE_FOLDER_H
#include <bits/stdc++.h>

using namespace std;

class Message;

class Folder {
private:
    set<Message*> msg;
public:
    void addMsg(Message *pMessage);
    void remMsg(Message *pMessage);
};

#endif //MESSAGE_FOLDER_H
