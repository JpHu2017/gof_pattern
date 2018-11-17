#ifndef GOF_PATTERN_STATE_H
#define GOF_PATTERN_STATE_H
#include <memory>
#include "cz_def.h"
namespace gof {
class TCPState;
class CZ_EXPORTS TCPConn {
public:
    typedef std::shared_ptr<TCPConn> Ptr;
    TCPConn(const std::shared_ptr<TCPState>& state_ptr);
    void setTCPState(const std::shared_ptr<TCPState>& state_ptr);
    void request();
private:
    std::shared_ptr<TCPState> _state_ptr;
    TCPConn::Ptr _this_ptr;
};

class CZ_EXPORTS TCPState {
public:
    typedef std::shared_ptr<TCPState> Ptr;
    TCPState();
    virtual ~TCPState();
    virtual void handle(const TCPConn::Ptr& tcpconn_ptr) = 0;
private:
};

class TCPClose : public TCPState {
public:
    typedef std::shared_ptr<TCPClose> Ptr;
    TCPClose();
    virtual ~TCPClose();
    virtual void handle(const TCPConn::Ptr& tcpconn_ptr);
private:
    // TCPClose::Ptr _this_ptr;
};

class TCPListen : public TCPState {
public:
    typedef std::shared_ptr<TCPListen> Ptr;
    TCPListen();
    virtual ~TCPListen();
    virtual void handle(const TCPConn::Ptr& tcpconn_ptr);
private:
    // TCPListen::Ptr _this_ptr;
};

class TCPAccepted : public TCPState {
public:
    typedef std::shared_ptr<TCPAccepted> Ptr;
    TCPAccepted();
    virtual ~TCPAccepted();
    virtual void handle(const TCPConn::Ptr& tcpconn_ptr);
private:
    // TCPAccepted::Ptr _this_ptr;
};

class TCPConnected : public TCPState {
public:
    typedef std::shared_ptr<TCPConnected> Ptr;
    TCPConnected();
    virtual ~TCPConnected();
    virtual void handle(const TCPConn::Ptr& tcpconn_ptr);
private:
    // TCPConnected::Ptr _this_ptr;
};
}
#endif //GOF_PATTERN_STATE_H