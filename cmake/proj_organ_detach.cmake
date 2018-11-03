##先删除，再创建项目文件夹##
MESSAGE(${DETACH_PROJ_NAME})
FILE(REMOVE_RECURSE ${P_ROOT_PATH}/${DETACH_PROJ_NAME}) # 删除文件夹
FILE(MAKE_DIRECTORY ${P_ROOT_PATH}/${DETACH_PROJ_NAME})
##
# --- 将'-'转化为'_' --- #
STRING(REPLACE "-" "_" DETACH_PROJECT_NAME "${DETACH_PROJ_NAME}")
STRING(REPLACE "-" "_" DETACH_LIBRARY_PREFIX "${DETACH_LIBRARY_PREFIX}")
# --- --- #
#顶层项目CMakeLists.txt内容
SET(TOP_CMAKELISTS_CONTENT
"#在根目录的CMakeLists.txt中仅包含依赖关系，和添加相应的模块
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.4)
#设置项目名称
PROJECT(${DETACH_PROJECT_NAME})
#设置链接库的前缀
SET(CMAKE_CXX_FLAGS  \${CMAKE_CXX_FLAGS} \"-std=c++11\")
# CZ根目录
SET(CZ_ROOT_PATH \"\${PROJECT_SOURCE_DIR}/..\") # ROOT DIR

# 配置第三方库
IF (WIN32)
    OPTION (WIN64_VS2013 \"windows\" ON)
ELSE ()
    OPTION (UNIX_UBUNTU_16 \"ubuntu16.04\" ON)
ENDIF ()
# 引入项目组织宏/函数
INCLUDE(\${CZ_ROOT_PATH}/config-cmake/option.cmake)
INCLUDE(\${PROJECT_SOURCE_DIR}/cmake/3rdparty.cmake)
INCLUDE(\${CZ_ROOT_PATH}/config-cmake/proj_organ.cmake) # FIND MODULE FUNCTION
INCLUDE(\${PROJECT_SOURCE_DIR}/cmake/config.cmake)
# 设置动态连接库前缀
P_LIBRARY_PREFIX(${DETACH_LIBRARY_PREFIX})
SET(P_INSTALL_PREFIX \"\${PROJECT_SOURCE_DIR}/linux\")
#关闭添加或者安装的模块
#P_ADD_MODULES_OPTION_OFF(case screen)
#P_INSTALL_MODULES_OPTION_OFF(case)

# 存在先后顺序
ADD_SUBDIRECTORY(modules)
ADD_SUBDIRECTORY(samples)
ADD_SUBDIRECTORY(apps)")
#创建顶层项目CMakeLists.txt
FILE(WRITE ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/CMakeLists.txt ${TOP_CMAKELISTS_CONTENT})
##
## 创建modules文件夹下的CMakeLists.txt
FILE(MAKE_DIRECTORY ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/modules)
# 构建modules
IF(NOT(DETACH_MODULES STREQUAL ""))
    SET(MODULES_CMAKELISTS_CONTENT "")
    #以字符串的形式传入，为了还原list，采用;替换|
    STRING(REPLACE "|" ";" DETACH_MODULES ${DETACH_MODULES})
    FOREACH(mod ${DETACH_MODULES})
        MESSAGE("Detach module: " ${mod})
        #复制分离的模块
        FILE(COPY ${CURR_PROJ_PATH}/modules/${mod}/ DESTINATION ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/modules/${mod})
        LIST(APPEND MODULES_CMAKELISTS_CONTENT "P_ADD_MODULE(${mod})\n")
    ENDFOREACH()
    #创建modules文件夹下的CMakeLists.txt
    FILE(WRITE ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/modules/CMakeLists.txt ${MODULES_CMAKELISTS_CONTENT})
ELSE()
    FILE(WRITE ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/modules/CMakeLists.txt "")
ENDIF()
##
## 创建apps文件夹下的CMakeLists.txt
FILE(MAKE_DIRECTORY ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/apps)
# 构建apps
IF(NOT(DETACH_APPS STREQUAL ""))
    SET(APPS_CMAKELISTS_CONTENT "")
    STRING(REPLACE "|" ";" DETACH_APPS ${DETACH_APPS})
    FOREACH(app ${DETACH_APPS})
        MESSAGE("Detach app: " ${app})
        #复制分离的app
        FILE(COPY ${CURR_PROJ_PATH}/apps/${app}/ DESTINATION ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/apps/${app})
        LIST(APPEND APPS_CMAKELISTS_CONTENT "P_ADD_APP(${app})\n")
    ENDFOREACH()
    #创建apps文件夹下的CMakeLists.txt
    FILE(WRITE ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/apps/CMakeLists.txt ${APPS_CMAKELISTS_CONTENT})
ELSE()
    FILE(WRITE ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/apps/CMakeLists.txt "")
ENDIF()
##
## 创建samples文件夹下的CMakeLists.txt
FILE(MAKE_DIRECTORY ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/samples)
# 构建samples
IF(NOT(DETACH_SAMPLES STREQUAL ""))
    SET(SAMPLES_CMAKELISTS_CONTENT "")
    STRING(REPLACE "|" ";" DETACH_SAMPLES ${DETACH_SAMPLES})
    FOREACH(sample ${DETACH_SAMPLES})
        MESSAGE("Detach sample: " ${sample})
        #复制分离的sample
        FILE(COPY ${CURR_PROJ_PATH}/samples/${sample}/ DESTINATION ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/samples/${sample})
        LIST(APPEND SAMPLES_CMAKELISTS_CONTENT "P_ADD_SAMPLE(${sample})\n")
    ENDFOREACH()
    #创建samples文件夹下的CMakeLists.txt
    FILE(WRITE ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/samples/CMakeLists.txt ${SAMPLES_CMAKELISTS_CONTENT})
ELSE()
    FILE(WRITE ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/samples/CMakeLists.txt "")
ENDIF()
##
#创建samples文件夹下的CMakeLists.txt
FILE(MAKE_DIRECTORY ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/cmake)
#复制cmake文件夹
FILE(COPY ${CURR_PROJ_PATH}/cmake/ DESTINATION ${P_ROOT_PATH}/${DETACH_PROJ_NAME}/cmake)
