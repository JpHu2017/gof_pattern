SET(app facade)
P_APP_INCLUDE_MODULES(${app} MODULES def)
SET(DEPS ${GLOG_LIBRARY})
P_CREATE_APP(${app} ${app}_demo.cpp DEPENDENCY ${DEPS})
P_INSTALL_APP(${app})