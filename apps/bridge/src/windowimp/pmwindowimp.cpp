#include <glog/logging.h>
#include "windowimp/pmwindowimp.h"
namespace gof {
PMWindowImp::PMWindowImp() {}
PMWindowImp::~PMWindowImp() {}
void PMWindowImp::devDrawText() {
    LOG(INFO) << "Draw text using PMWindow painting engine.";
}
void PMWindowImp::devDrawLine() {
    LOG(INFO) << "Draw line using PMWindow painting engine.";
}
}