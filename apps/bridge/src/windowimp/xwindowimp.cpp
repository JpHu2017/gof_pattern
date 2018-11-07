#include <glog/logging.h>
#include "windowimp/xwindowimp.h"
namespace gof {
XWindowImp::XWindowImp() {}
XWindowImp::~XWindowImp() {}
void XWindowImp::devDrawText() {
    LOG(INFO) << "Draw text using XWindow painting engine.";
}
void XWindowImp::devDrawLine() {
    LOG(INFO) << "Draw line using XWindow painting engine.";
}
}