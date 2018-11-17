#include "state.h"
#include <glog/logging.h>
#include <iostream>
namespace gof {
TCPConn::TCPConn(const std::shared_ptr<TCPState>& state_ptr) {
    _state_ptr = state_ptr;
    _this_ptr.reset(this);
}
void TCPConn::setTCPState(const std::shared_ptr<TCPState>& state_ptr) {
    _state_ptr = state_ptr;
}
void TCPConn::request() {
    _state_ptr->handle(_this_ptr);
}

TCPState::TCPState() {}
TCPState::~TCPState() {}

TCPClose::TCPClose() {
    // _this_ptr.reset(this);
}
TCPClose::~TCPClose() {}
void TCPClose::handle(const TCPConn::Ptr& tcpconn_ptr) {
    LOG(INFO) << "TCP State Close.";
    tcpconn_ptr->setTCPState(TCPState::Ptr(new TCPListen()));
}

TCPListen::TCPListen() {
    // _this_ptr.reset(this);
}
TCPListen::~TCPListen() {}
void TCPListen::handle(const TCPConn::Ptr& tcpconn_ptr) {
	LOG(INFO) << "TCP State Listening";
	tcpconn_ptr->setTCPState(TCPState::Ptr(new TCPAccepted()));
}

TCPAccepted::TCPAccepted() {
    // _this_ptr.reset(this);
}
TCPAccepted::~TCPAccepted() {}
void TCPAccepted::handle(const TCPConn::Ptr& tcpconn_ptr) {
    LOG(INFO) << "TCP State Accepted";
	tcpconn_ptr->setTCPState(TCPState::Ptr(new TCPConnected()));
}

TCPConnected::TCPConnected() {
    // _this_ptr.reset(this);
}
TCPConnected::~TCPConnected() {}
void TCPConnected::handle(const TCPConn::Ptr& tcpconn_ptr) {
    LOG(INFO) << "TCP State Connected";
	tcpconn_ptr->setTCPState(TCPState::Ptr(new TCPClose()));
}
}