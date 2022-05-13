#include <iostream>
#include <bits/stdc++.h>
#include "message.h"
#include "folder.h"
using namespace std;

int main() {
    Message msg1("this is a message"), msg3;
    Message msg2(msg1); // 拷贝构造
    msg3 = msg2; // 拷贝赋值
    Folder folder1;
    msg1.save(folder1);
    return 0;
}
