#在根目录的CMakeLists.txt中仅包含依赖关系，和添加相应的模块
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.4)
#设置项目名称
PROJECT(gof_pattern)
SET(CMAKE_CXX_FLAGS  ${CMAKE_CXX_FLAGS} "-std=c++11")
# CZ根目录
SET(CZ_ROOT_PATH "${PROJECT_SOURCE_DIR}/..")
# 配置第三方库
IF (WIN32)
    OPTION (WIN64_VS2013 "windows" ON)
ELSE ()
    OPTION (UNIX_UBUNTU_16 "ubuntu16.04" ON)
ENDIF ()
INCLUDE(${CZ_ROOT_PATH}/config-cmake/option.cmake)
INCLUDE(${PROJECT_SOURCE_DIR}/cmake/3rdparty.cmake)
INCLUDE(${PROJECT_SOURCE_DIR}/cmake/config.cmake)
# 引入项目组织宏/函数
INCLUDE(${PROJECT_SOURCE_DIR}/cmake/proj_organ.cmake)
# 设置动态连接库前缀
P_LIBRARY_PREFIX(gof)
# 设置项目版本号
#P_SET_VERSION(0 1 0)
# 设置安装路径
SET(P_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/linux")
#关闭添加或者安装的模块
#P_ADD_MODULES_OPTION_OFF(dummy)
#P_INSTALL_MODULES_OPTION_OFF(dummy)
#P_ADD_SAMPLES_OPTION_OFF(dummy)
#P_INSTALL_SAMPLES_OPTION_OFF(dummy)
#P_ADD_APPS_OPTION_OFF(dummy)
#P_INSTALL_APPS_OPTION_OFF(dummy)
# 添加模块/示例/应用
ADD_SUBDIRECTORY(modules)
ADD_SUBDIRECTORY(samples)
ADD_SUBDIRECTORY(apps)
