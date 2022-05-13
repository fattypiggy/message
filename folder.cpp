//
// Created by William on 2022/5/13.
//

#include "folder.h"

void Folder::addMsg(Message *pMessage) {
    msg.insert(pMessage);
}
void Folder::remMsg(Message *pMessage) {
    msg.erase(pMessage);
}
