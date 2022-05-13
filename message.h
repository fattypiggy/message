//
// Created by William on 2022/5/13.
//

#ifndef MESSAGE_MESSAGE_H
#define MESSAGE_MESSAGE_H
#include <bits/stdc++.h>
#include "folder.h"
using namespace std;

class Message {
    friend class Folder;
    friend void swap(Message&, Message&);
public:
    explicit Message(const string& str = ""):
        contents(str) {}
    // 拷贝控制成员
    Message(const Message&); // 拷贝构造函数
    Message& operator=(const Message&); // 拷贝赋值
    ~Message();
    void save(Folder&);
    void remove(Folder&);

private:
    string contents;
    set<Folder*> folders;
    void add_to_Folders(const Message&);
    void remove_from_Folders();
};

#endif //MESSAGE_MESSAGE_H
