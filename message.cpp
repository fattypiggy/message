//
// Created by William on 2022/5/13.
//

#include "message.h"

void Message::save(Folder &f) {
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f) {
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message &m) {
    for (auto f : m.folders)
        f->addMsg(this);
}

void Message::remove_from_Folders() {
    for (auto f : folders)
        f->remMsg(this);
}
// 拷贝构造函数
Message::Message(const Message &m):
    contents(m.contents), folders(m.folders) {
    add_to_Folders(m);
}

Message::~Message() {
    remove_from_Folders();
}

Message &Message::operator=(const Message &rhs) {
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

void swap(Message& lhs, Message& rhs) {
    using std::swap; // 严格来说不需要，但是是好习惯。C++ Primer说的
    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);
    swap(lhs.contents, rhs.contents);
    swap(lhs.folders, rhs.folders);
    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
}