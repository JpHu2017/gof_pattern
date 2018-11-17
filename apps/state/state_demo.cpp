#include <iostream>
#include "state.h"
int main(int argc, char* argv[]) {
    gof::TCPConn::Ptr tcpconn_ptr;
    tcpconn_ptr.reset(new gof::TCPConn(gof::TCPState::Ptr(new gof::TCPListen())));
    tcpconn_ptr->request();
    tcpconn_ptr->request();
    tcpconn_ptr->request();
    tcpconn_ptr->request();
    return 0;
}