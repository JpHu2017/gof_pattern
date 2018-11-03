##### global variables #####
## common ##
# LIBRARY_PREFIX_NAME 动态链接库前缀名，如果未定义，则生成的动态库无前缀

## common/modules/samples/apps ##
# COM - 当前模块/示例/应用名，大写
# THE_${TYPE} - 当前模块/示例/应用全名，${PROJECT_NAME}_${COM}_${TYPE}
# THE_${TYPE}S - 所有模块/示例/应用全名(全局变量)
# P_${THE_${TYPE}}_DESCRIPTION 当前模块/示例/应用名描述
# P_${THE_${TYPE}}_LOCATION 当前模块/示例/应用名所在的路径
# P_${THE_${TYPE}}_HDRS/P_MODULE_${the_module}_HEADERS 当前模块/示例/应用名的头文件
# P_${THE_${TYPE}}_SRCS/P_MODULE_${the_module}_SOURCES 当前模块/示例/应用名的源文件
# P_${THE_${TYPE}}_INCLUDE_DIRS 当前模块/示例/应用名的头文件路径
# P_ADD_${THE_${TYPE}}_OPTION 当前模块/示例/应用名编译选项(ON或者OFF)
# P_INSTALL_${THE_${TYPE}}_OPTION 当前模块/示例/应用名安装选项(ON或者OFF)
# P_${THE_${TYPE}}_DEPEND_MODULES 当前模块/示例/应用名依赖的所有模块（递归查找）
# ${P_INSTALL_PREFIX} 项目安装路径
# P_${THE_MODULE}_LIBS 模块的动态链接库
# P_MODULES_LIBS 所有模块组合的动态链接库
# ${PROJECT_NAME}_VERSION 项目版本号， 通过P_SET_VERSION设置

##### Interface(接口) #####

## common ##
# P_MESSAGE("Welcome to use proj_organ.cmake") #打印消息“Welcome to use proj_organ.cmake”
# P_LIBRARY_PREFIX(po) #设置动态链接库前缀名为po
# P_SET_VERSION #设置项目版本号，放置在ADD_SUBDIRECTORY(modules)之前
# P_DETACH #将子项目从当前项目中分离
## modules ##
## 经常使用
# P_ADD_MODULES_OPTIONS_ON(mouse) #设定case模块的编译选项为ON（可添加多个模块）
# P_ADD_MODULES_OPTIONS_OFF(mouse) #设定case模块的编译选项为OFF（可添加多个模块）
# P_ADD_MODULE(core) #添加模块core到项目中，实际是否创建，则看P_CREATE_${THE_MODULE}_OPTION选项
# P_MODULE_INCLUDE_MODULES(peripheral MODULES mouse keyboard) # 将模块mouse和keyboard包含到模块peripheral中（peripheral用到这两个模块）
# P_CREATE_MODULE(case DEPENDENCY ${3rdparty}) #创建模块case的动态链接库，在DEPENDENCY之后设置第三方连接库
# P_INSTALL_MODULES_OPTIONS_ON(case) #设定case模块的安装选项为ON（可添加多个模块）
# P_INSTALL_MODULES_OPTIONS_OFF(case) #设定case模块的安装选项为OFF（可添加多个模块）
# P_INSTALL_MODULE(case) #安装模块case
# P_MODULE_CELL_TEST(case_cell_test test/case_cell_test.cpp DEPENDENCY ${3rdparty}) # 模块case的单元测试，在DEPENDENCY之后设置第三方连接库
## 很少使用
# P_GENERATE_MODULE(case) #生成case模块头文件，源文件等变量（常作为P_CREATE_MODULE的辅助函数）
# P_MODULE_INCLUDE_DIRECTORIES(case) #添加case模块的头文件路径（常作为P_MODULE_INCLUDE_MODULES的辅助函数）
# P_SET_MODULE_SOURCES(MODULES_SRCS case) #将case模块的头文件和源文件用${MODULES_SRCS}表示 （常作为P_CREATE_MODULE的辅助函数）

## samples ##
# P_ADD_SAMPLES_OPTIONS_ON(acer) #设定acer示例的编译选项为ON（可添加多个模块）
# P_ADD_SAMPLES_OPTIONS_OFF(acer) #设定acer示例的编译选项为OFF（可添加多个模块）
# P_ADD_SAMPLE(acer) #添加acer示例到项目中，实际是否创建，则看P_CREATE_${THE_SMAPLE}_OPTION选项
# P_SAMPLE_INCLUDE_MODULES(acer MODULES case peripheral screen) # 将模块case，peripheral和screen包含到示例acer中（自动递归查找子依赖模块）
# P_CREATE_SAMPLE(acer DEPENDENCY ${3rdparty}) #创建acer示例的动态链接库，在DEPENDENCY之后设置第三方连接库
# P_INSTALL_SAMPLES_OPTIONS_ON(acer) #设定acer示例的安装选项为ON（可添加多个示例）
# P_INSTALL_SAMPLES_OPTIONS_OFF(acer) #设定acer示例的安装选项为OFF（可添加多个示例）
# P_INSTALL_SAMPLE(acer) #安装acer示例
# P_SAMPLE_CELL_TEST(acer_cell_test test/acer_cell_test.cpp DEPENDENCY ${3rdparty}) # acer示例的单元测试，在DEPENDENCY之后设置第三方连接库

## apps ##
# P_ADD_APPS_OPTIONS_ON(dell) #设定dell应用的编译选项为ON（可添加多个模块）
# P_ADD_APPS_OPTIONS_OFF(dell) #设定dell应用的编译选项为OFF（可添加多个模块）
# P_ADD_APP(dell) #添加dell应用到项目中，实际是否创建，则看P_CREATE_${THE_APP}_OPTION选项
# P_APP_INCLUDE_MODULES(dell MODULES case peripheral screen) # 将模块case，peripheral和screen包含到dell应用中（自动递归查找子依赖模块）
# P_CREATE_APP(dell DEPENDENCY ${3rdparty}) #创建dell应用的动态链接库，在DEPENDENCY之后设置第三方连接库
# P_INSTALL_APPS_OPTIONS_ON(dell) #设定dell应用的安装选项为ON（可添加多个示例）
# P_INSTALL_APPS_OPTIONS_OFF(dell) #设定dell应用的安装选项为OFF（可添加多个示例）
# P_INSTALL_APP(dell) #安装dell应用
# P_APP_CELL_TEST(dell_cell_test test/dell_cell_test.cpp DEPENDENCY ${3rdparty}) # dell应用的单元测试，在DEPENDENCY之后设置第三方连接库

### end macro & fucntion ###

## 注：宏和函数定义大写形式后，同样可以使用小写
##### common #####
# 信息打印
MACRO(P_MESSAGE)
    STRING(REPLACE ";" " " __msg "${ARGN}")
    MESSAGE(STATUS "${__msg}")
ENDMACRO()
# 设置当前项目下，动态链接库的前缀名
# 在根目录的CMakeLists.txt中进行设置，需要ADD_SUBDIRECTORY(modules)之前
MACRO(P_LIBRARY_PREFIX prefix_name)
    SET(LIBRARY_PREFIX_NAME ${prefix_name} CACHE INTERNAL "library prefix name")
ENDMACRO()
# 设置项目版本号，以控制项目
FUNCTION(P_SET_VERSION MAJOR_VERSION MINOR_VERSION PATCH_VERSION)
    IF(DEFINED MAJOR_VERSION)
        SET(PROJ_LIBVERSION "${MAJOR_VERSION}")
        SET(PROJ_SOVERSION "${MAJOR_VERSION}")
    ENDIF()
    IF(DEFINED MINOR_VERSION)
        SET(PROJ_LIBVERSION "${PROJ_LIBVERSION}.${MINOR_VERSION}")
        SET(PROJ_SOVERSION "${PROJ_SOVERSION}.${MINOR_VERSION}")
    ENDIF()
    IF(DEFINED PATCH_VERSION)
        SET(PROJ_LIBVERSION "${PROJ_LIBVERSION}.${PATCH_VERSION}")
    ENDIF()
    SET(${PROJECT_NAME}_LIBVERSION ${PROJ_LIBVERSION} CACHE INTERNAL "library version")
    SET(${PROJECT_NAME}_SOVERSION ${PROJ_SOVERSION} CACHE INTERNAL "so version")
    P_MESSAGE(${${PROJECT_NAME}_LIBVERSION})
    P_MESSAGE(${${PROJECT_NAME}_SOVERSION})
ENDFUNCTION()
#项目分离
MACRO(P_DETACH detach_proj_name)
    SET(DETACH_PROJ_NAME ${detach_proj_name})
    SET(DETACH_LIBRARY_PREFIX "")
    # 区分出apps, samples, modules
    SET(DETACH_APPS "")
    SET(DETACH_MODULES "")
    SET(DETACH_SAMPLES "")
    SET(FIND_FLAG "")
    FOREACH(arg ${ARGN})
        IF(arg STREQUAL "library_prefix" OR arg STREQUAL "LIBRARY_PREFIX")
            SET(FIND_FLAG "find_lib_prefix")
            CONTINUE()
        ENDIF()
        IF(arg STREQUAL "apps" OR arg STREQUAL "APPS")
            SET(FIND_FLAG "find_app")
            CONTINUE()
        ELSEIF(arg STREQUAL "modules" OR arg STREQUAL "MODULES")
            SET(FIND_FLAG "find_module")
            CONTINUE()
        ELSEIF(arg STREQUAL "samples" OR arg STREQUAL "SAMPLES")
            SET(FIND_FLAG "find_sample")
            CONTINUE()
        ENDIF()
        IF(FIND_FLAG STREQUAL "find_lib_prefix")
            SET(DETACH_LIBRARY_PREFIX ${arg})
            SET(FIND_FLAG "") #只有跟在LIBRARY_PREFIX之后的变量是LIBRARY_PREFIX
        ELSEIF(FIND_FLAG STREQUAL "find_app")
            STRING(TOUPPER "${arg}" COM)
            SET(CURR_COM ${PROJECT_NAME}_${COM}_APP)
            #先加入依赖模块
            LIST(APPEND DETACH_MODULES ${P_${CURR_COM}_DEPEND_MODULES})
            LIST(APPEND DETACH_APPS ${arg})
        ELSEIF(FIND_FLAG STREQUAL "find_module")
            STRING(TOUPPER "${arg}" COM)
            SET(CURR_COM ${PROJECT_NAME}_${COM}_MODULE)
            #先加入依赖模块
            LIST(APPEND DETACH_MODULES ${P_${CURR_COM}_DEPEND_MODULES})
            LIST(APPEND DETACH_MODULES ${arg})

        ELSEIF(FIND_FLAG STREQUAL "find_sample")
            STRING(TOUPPER "${arg}" COM)
            SET(CURR_COM ${PROJECT_NAME}_${COM}_SAMPLE)
            #先加入依赖模块
            LIST(APPEND DETACH_MODULES ${P_${CURR_COM}_DEPEND_MODULES})
            LIST(APPEND DETACH_SAMPLES ${arg})

        ENDIF()
    ENDFOREACH()
    #去除重复元素
    LIST(REMOVE_DUPLICATES DETACH_APPS)
    LIST(REMOVE_DUPLICATES DETACH_MODULES)
    LIST(REMOVE_DUPLICATES DETACH_SAMPLES)

    P_MESSAGE("Modules of detach project: " ${DETACH_MODULES})
    P_MESSAGE("Apps of detach project: " ${DETACH_APPS})
    P_MESSAGE("Samples of detach project: " ${DETACH_SAMPLES})
    #list转为string，以便能够采用-D的形式传参
    SET(DETACH_MODULES_SRC "")
    SET(DETACH_APPS_SRC "")
    SET(DETACH_SAMPLES_SRC "")
    FOREACH(mod ${DETACH_MODULES})
        SET(DETACH_MODULES_SRC "${DETACH_MODULES_SRC}|${mod}")
    ENDFOREACH()
    FOREACH(app ${DETACH_APPS})
        SET(DETACH_APPS_SRC "${DETACH_APPS_SRC}|${app}")
    ENDFOREACH()
    FOREACH(sample ${DETACH_SAMPLES})
        SET(DETACH_SAMPLES_SRC "${DETACH_SAMPLES_SRC}|${sample}")
    ENDFOREACH()
    IF(NOT DEFINED P_ROOT_PATH)
        SET(P_ROOT_PATH ${CZ_ROOT_PATH})
    ENDIF()
    #-D将当前环境中定义的变量传入proj_organ_detach.cmake中
    ADD_CUSTOM_TARGET(detach
            COMMAND ${CMAKE_COMMAND}
            -D P_ROOT_PATH=${P_ROOT_PATH} #传入参数
            -D CURR_PROJ_PATH=${PROJECT_SOURCE_DIR}
            -D DETACH_LIBRARY_PREFIX=${DETACH_LIBRARY_PREFIX}
            -D DETACH_PROJ_NAME=${DETACH_PROJ_NAME}
            -D DETACH_APPS="${DETACH_APPS_SRC}"
            -D DETACH_MODULES="${DETACH_MODULES_SRC}"
            -D DETACH_SAMPLES="${DETACH_SAMPLES_SRC}"
            -P ${P_ROOT_PATH}/config-cmake/proj_organ_detach.cmake) #调用脚本
ENDMACRO()

## private ##
# 将一个或多个X(module/sample/app)添加至项目中的开选项，通过${ARGN}设置
# 不直接使用，作为P_ADD_MODULE_OPTION_ON等的辅助函数
MACRO(P_ADD_X_OPTION_ON type)
    STRING(TOUPPER "${type}" TYPE)
    FOREACH(com ${ARGN})
        STRING(TOUPPER "${com}" COM)
        SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
        option (P_ADD_${THE_${TYPE}}_OPTION "${com} ${type} add option" ON)
    ENDFOREACH()
ENDMACRO()
# 将一个或多个X(module/sample/app)添加至项目中的关选项，通过${ARGN}设置
# 不直接使用，作为P_ADD_MODULE_OPTION_OFF等的辅助函数
MACRO(P_ADD_X_OPTION_OFF type)
    STRING(TOUPPER "${type}" TYPE)
    FOREACH(com ${ARGN})
        STRING(TOUPPER "${com}" COM)
        SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
        option (P_ADD_${THE_${TYPE}}_OPTION "${com} ${type} add option" OFF)
    ENDFOREACH()
ENDMACRO()
# 将名为${common_name}的X(module/sample/app)添加至项目中
# 不直接使用，作为P_ADD_MODULE等的辅助函数
MACRO(P_ADD_X type common_name)
    STRING(TOUPPER "${type}" TYPE)
    STRING(TOUPPER "${common_name}" COM)
    SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
    IF(NOT DEFINED P_ADD_${THE_${TYPE}}_OPTION)
        P_ADD_X_OPTION_ON(${type} ${common_name})
    ENDIF()
    IF(P_ADD_${THE_${TYPE}}_OPTION)
        P_MESSAGE("P_ADD_${TYPE}(" ${common_name} ${ARGN} ")")
        ADD_SUBDIRECTORY(${common_name})
    ENDIF()
ENDMACRO()
# 产生名为${common_name}的X(module/sample/app)的头文件/源文件变量
# 不直接使用，作为P_GENERATE_MODULE等的辅助函数
MACRO(P_GENERATE_X type common_name)
    STRING(TOUPPER "${type}" TYPE)
    STRING(TOUPPER "${common_name}" COM)
    SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
    SET(THE_${TYPE}S ${THE_${TYPE}S} ${THE_${TYPE}} CACHE INTERNAL "all ${type}s full names")
    IF(NOT DEFINED the_description)
        SET(the_description "The ${common_name} ${TYPE} of ${PROJECT_NAME}")
    ENDIF()

    SET(P_${THE_${TYPE}}_DESCRIPTION "${the_description}" CACHE INTERNAL "Brief description of ${THE_${TYPE}} ${type}")
    SET(P_${THE_${TYPE}}_LOCATION    "${CMAKE_CURRENT_SOURCE_DIR}" CACHE INTERNAL "Location of ${THE_${TYPE}} ${type} sources")

    FILE(GLOB_RECURSE P_${THE_${TYPE}}_HDRS
            "${P_${THE_${TYPE}}_LOCATION}/include/*.h"
            "${P_${THE_${TYPE}}_LOCATION}/include/*.hpp")
    FILE(GLOB_RECURSE P_${THE_${TYPE}}_SRCS
            "${P_${THE_${TYPE}}_LOCATION}/src/*.h"
            "${P_${THE_${TYPE}}_LOCATION}/src/*.hpp"
            "${P_${THE_${TYPE}}_LOCATION}/src/*.c"
            "${P_${THE_${TYPE}}_LOCATION}/src/*.cc"
            "${P_${THE_${TYPE}}_LOCATION}/src/*.cpp")
    # 设定别名头文件的别名
    SET(P_${THE_${TYPE}}_HEADERS "${P_${THE_${TYPE}}_HDRS}" CACHE INTERNAL "${THE_${TYPE}} ${type} headers")
    SET(P_${THE_${TYPE}}_SOURCES "${P_${THE_${TYPE}}_SRCS}" CACHE INTERNAL "${THE_${TYPE}} ${type} sources")
    # 设定头文件路径
    SET(P_${THE_${TYPE}}_INCLUDE_DIRS "${P_${THE_${TYPE}}_LOCATION}/include" CACHE INTERNAL "${THE_${TYPE}} ${type} include dirs")
ENDMACRO()
# 添加一个或多个X(module/sample/app)的头文件
# 不直接使用，作为P_MODULE_INCLUDE_DIRECTORIES等的辅助函数
MACRO(P_X_INCLUDE_DIRECTORIES type)
    STRING(TOUPPER "${type}" TYPE)
    FOREACH(com ${ARGN})
        STRING(TOUPPER "${com}" COM)
        SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
        INCLUDE_DIRECTORIES(${P_${THE_${TYPE}}_INCLUDE_DIRS})
    ENDFOREACH()
ENDMACRO()
# 将一个或多个X(module/sample/app)的源文件设定到变量${COMMON_SRC}中
# 不直接使用，作为P_SET_MODULE_SOURCES等的辅助函数
FUNCTION(P_SET_X_SOURCES type COMMON_SRCS)
    STRING(TOUPPER "${type}" TYPE)
    SET(result "")
    FOREACH(com ${ARGN})
        STRING(TOUPPER "${com}" COM)
        SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
        LIST(APPEND  result "${P_${THE_${TYPE}}_HEADERS}" "${P_${THE_${TYPE}}_SOURCES}")
    ENDFOREACH()
    SET(${COMMON_SRCS} ${result} CACHE INTERNAL "${type}s sources")
ENDFUNCTION()
# 递归查找X(module/sample/app)包含的模块
# P_X_INCLUDE_MODULES的辅助函数
FUNCTION(P_X_GET_INCLUDE_MODULES _DEPEND_MODULES type common_name)
    STRING(TOUPPER "${type}" TYPE)
    STRING(TOUPPER "${common_name}" COM)
    SET(CURR_MOD ${PROJECT_NAME}_${COM}_${TYPE})
    IF((NOT DEFINED P_${CURR_MOD}_DEPEND_MODULES) OR (P_${CURR_MOD}_DEPEND_MODULES STREQUAL ""))
        RETURN()
    ELSE()
        FOREACH(mod ${P_${CURR_MOD}_DEPEND_MODULES})
            P_X_GET_INCLUDE_MODULES(RESULT module ${mod})
            LIST(APPEND RESULT ${mod})
            #去除重复元素
            LIST(REMOVE_DUPLICATES RESULT)
        ENDFOREACH()
    ENDIF()
    SET(${_DEPEND_MODULES} ${RESULT} CACHE INTERNAL "${type} ${common_name} depend modules")
ENDFUNCTION()
# 添加${common_name}依赖的模块
# 依赖模块保存在P_${THE_${TYPE}}_DEPEND_MODULES
# 不直接使用，作为P_MODULE_INCLUDE_MODULES等的辅助函数
MACRO(P_X_INCLUDE_MODULES type common_name _KEY)
    SET(KEY ${_KEY})
    # module似乎是cmake的关键字，设置为module或者MODULE会报错
    IF(NOT (KEY STREQUAL "MODULES" OR KEY STREQUAL "modules"))
        MESSAGE(FATAL_ERROR "Must have key 'MODULES' or 'modules' between ${common_name} with ARGN")
    ENDIF()
    STRING(TOUPPER "${type}" TYPE)
    STRING(TOUPPER "${common_name}" COM)
    SET(CURR_COM ${PROJECT_NAME}_${COM}_${TYPE})
    SET(DEPEND_MODULES "")
    FOREACH(mod ${ARGN})
        STRING(TOUPPER "${mod}" MOD)
        P_X_GET_INCLUDE_MODULES(${MOD}_DEPEND_MODULE module ${mod})
        #在该宏和宏P_X_GET_INCLUDE_MODULES中先加入依赖模块，再加入当前模块
        #这样在P_DETACH时调用P_${CURR_COM}_DEPEND_MODULES构建整个项目时，能确保当前模块在其依赖模块之后创建
        LIST(APPEND DEPEND_MODULES ${${MOD}_DEPEND_MODULE})
        LIST(APPEND DEPEND_MODULES ${mod})
        #去除重复元素
        LIST(REMOVE_DUPLICATES DEPEND_MODULES)
    ENDFOREACH()
    P_X_INCLUDE_DIRECTORIES(module ${DEPEND_MODULES})
    SET(P_${CURR_COM}_DEPEND_MODULES ${DEPEND_MODULES} CACHE INTERNAL "${type} ${common_name} depend modules")
ENDMACRO()

# 创建名为${common_name}X(sample/app)的可执行文件
# 和P_INSTALL_X仅适用于非modules之外的部分
# 不直接使用，作为P_SAMPLE_INCLUDE_MODULES等的辅助函数
MACRO(P_CREATE_X type common_name)
    STRING(TOUPPER "${type}" TYPE)
    STRING(TOUPPER "${common_name}" COM)
    P_MESSAGE("P_CREATE_${TYPE}(" ${common_name} ${ARGN} ")")
    P_GENERATE_X(${type} ${common_name})
    P_X_INCLUDE_DIRECTORIES(${type} ${common_name})
    SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
    P_SET_X_SOURCES(${type} THE_${TYPE}_HDR_SRCS ${common_name})
    SET(EXE_NAME ${common_name}_${type})
    # 区分出依赖库和可执行文件
    SET(_EXE_VAR "")
    SET(_RAW_DEPS "")
    SET(FIND_DEPEND_KEY false)
    FOREACH(arg ${ARGN})
        IF(arg STREQUAL "DEPEND" OR arg STREQUAL "DEPENDENCY" OR arg STREQUAL "DEPENDS")
            SET(FIND_DEPEND_KEY true)
            CONTINUE()
        ENDIF()
        IF(NOT FIND_DEPEND_KEY)
            LIST(APPEND _EXE_VAR ${arg})
        ELSE()
            LIST(APPEND _RAW_DEPS ${arg})
        ENDIF()
    ENDFOREACH()
    ADD_EXECUTABLE(${EXE_NAME} ${_EXE_VAR} ${THE_${TYPE}_HDR_SRCS})
    SET(DEPS ${_RAW_DEPS}) # ${_RAW_DEPS} 第三方依赖
    FOREACH(dep_mod ${P_${THE_${TYPE}}_DEPEND_MODULES})
        STRING(TOUPPER "${dep_mod}" DEP_MOD)
        LIST(APPEND DEPS ${P_${PROJECT_NAME}_${DEP_MOD}_MODULE_LIBS}) #链接相关的模块
    ENDFOREACH()
    #生成链接库时，依赖库必须一起进行链接
    TARGET_LINK_LIBRARIES(${EXE_NAME} ${DEPS})
ENDMACRO()

# 设定一个或多个X(module/sample/app)安装的开选项
# 不直接使用，作为P_INSTALL_MODULES_OPTION_ON等的辅助函数
MACRO(P_INSTALL_X_OPTION_ON type)
    STRING(TOUPPER "${type}" TYPE)
    FOREACH(com ${ARGN})
        STRING(TOUPPER "${com}" COM)
        SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
        OPTION (P_INSTALL_${THE_${TYPE}}_OPTION "${com} ${type} install option" ON)
    ENDFOREACH()
ENDMACRO()
# 设定一个或多个X(module/sample/app)安装的关选项
# 不直接使用，作为P_INSTALL_MODULES_OPTION_OFF等的辅助函数
MACRO(P_INSTALL_X_OPTION_OFF type)
    STRING(TOUPPER "${type}" TYPE)
    FOREACH(com ${ARGN})
        STRING(TOUPPER "${com}" COM)
        SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
        OPTION (P_INSTALL_${THE_${TYPE}}_OPTION "${com} ${type} install option" OFF)
    ENDFOREACH()
ENDMACRO()
# 安装名为${common_name}的X(sample/app)的可执行文件
# 和P_CREATE_X仅适用于非modules之外的部分
# 不直接使用，作为P_INSTALL_MODULE等的辅助函数
FUNCTION(P_INSTALL_X type common_name)
    STRING(TOUPPER "${type}" TYPE)
    STRING(TOUPPER "${common_name}" COM)
    SET(THE_${TYPE} ${PROJECT_NAME}_${COM}_${TYPE})
    IF(NOT DEFINED P_INSTALL_${THE_${TYPE}}_OPTION)
        P_INSTALL_X_OPTION_ON(${type} ${common_name})
    ENDIF()
    # 如果INSTALL_OPTION
    IF(NOT P_INSTALL_${THE_${TYPE}}_OPTION)
        RETURN()
    ENDIF()
    P_MESSAGE("P_INSTALL_${TYPE}(" ${common_name} ")")
    IF(NOT P_INSTALL_PREFIX)
        SET(P_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/linux)
    ENDIF()
    INSTALL(TARGETS ${common_name}_${type}
            RUNTIME DESTINATION ${P_INSTALL_PREFIX}/bin
            LIBRARY DESTINATION ${P_INSTALL_PREFIX}/lib
            ARCHIVE DESTINATION ${P_INSTALL_PREFIX}/lib)
#    INSTALL(DIRECTORY ${P_${THE_${TYPE}}_LOCATION}/include DESTINATION ${P_INSTALL_PREFIX}/include/${LIBRARY_PREFIX_NAME})
    IF(EXISTS ${P_${THE_${TYPE}}_LOCATION}/data)
        INSTALL(DIRECTORY ${P_${THE_${TYPE}}_LOCATION}/data DESTINATION ${P_INSTALL_PREFIX})
    ENDIF()
ENDFUNCTION()
# X(module/sample/app)单元测试
# 不直接使用，作为P_MODULE_CELL_TEST等的辅助函数
MACRO(P_X_CELL_TEST type cell_test_name)
    # 区分出依赖库和可执行文件
    SET(_EXE_VAR "")
    SET(_RAW_DEPS "")
    SET(FIND_DEPEND_KEY false)
    FOREACH(arg ${ARGN})
        IF(arg STREQUAL "DEPEND" OR arg STREQUAL "DEPENDENCY" OR arg STREQUAL "DEPENDS")
            SET(FIND_DEPEND_KEY true)
            CONTINUE()
        ENDIF()
        IF(NOT FIND_DEPEND_KEY)
            LIST(APPEND _EXE_VAR ${arg})
        ELSE()
            LIST(APPEND _RAW_DEPS ${arg})
        ENDIF()
    ENDFOREACH()
    STRING(TOUPPER "${type}" TYPE)
    P_MESSAGE("P_${TYPE}_CELL_TEST(" ${cell_test_name} ${ARGN} ")")
    # 由于单元测试，仅会出现在当前模块的CMakeLists.txt中，所以这时的THE_${TYPE}变量仍有效，可直接使用
    INCLUDE_DIRECTORIES(${P_${THE_${TYPE}}_INCLUDE_DIRS})
    SET(CELL_TEST_SRCS ${_EXE_VAR}
            ${P_${THE_${TYPE}}_HEADERS}
            ${P_${THE_${TYPE}}_SOURCES})
    ADD_EXECUTABLE(${cell_test_name} ${CELL_TEST_SRCS})
    SET(DEPS ${_RAW_DEPS}) # ${_RAW_DEPS} 第三方依赖
    FOREACH(dep_mod ${P_${THE_${TYPE}}_DEPEND_MODULES})
        STRING(TOUPPER "${dep_mod}" DEP_MOD)
        LIST(APPEND DEPS ${P_${PROJECT_NAME}_${DEP_MOD}_MODULE_LIBS}) #链接相关的模块
    ENDFOREACH()
    TARGET_LINK_LIBRARIES(${cell_test_name} ${DEPS})
ENDMACRO()
## private ##
### end common ###

##### modules #####
##[Interface]
# 设定宏参数的中模块是否添加(开选项)
# 该宏一般在根目录的CMakeLists.txt中进行设置
MACRO(P_ADD_MODULES_OPTION_ON)
    P_ADD_X_OPTION_ON(module ${ARGN})
ENDMACRO()
##[Interface]
#(关选项)
MACRO(P_ADD_MODULES_OPTION_OFF)
    P_ADD_X_OPTION_OFF(module ${ARGN})
ENDMACRO()
##[Interface]
# 编译宏参数中提到的模块
# 实际是否编译，则视是否在P_ADD_MODULES_OPTION_ON/OFF设置该模块而定
# 该宏一般在modules文件夹下的CMakeLists.txt中设置
MACRO(P_ADD_MODULE module_name)
    P_ADD_X(module ${module_name})
ENDMACRO()
# 生成当前模块头文件/源文件变量等
# 该宏通常用在modules文件夹下的某个模块的CMakeLists.txt中
# 由于模块都是独立出现的，所以不可能同时添加多个模块，故无P_GENERATE_MODULES
MACRO(P_GENERATE_MODULE module_name)
    P_GENERATE_X(module ${module_name})
ENDMACRO()
# 包含宏参数中众模块的头文件路径
# 该宏通常用在需要利用一个或多个模块的CMakeLists.txt中，故存在复数形式
# 由于INCLUDE_DIRECTORIES的原因，该宏仅对于当前作用域以及其子作用域有效
# 不作为接口适用，仅作为P_CREATE_MODULE辅助函数，其接口作用被P_MODULE_INCLUDE_MODULES替代
MACRO(P_MODULE_INCLUDE_DIRECTORIES)
    P_X_INCLUDE_DIRECTORIES(module ${ARGN})
ENDMACRO()
# 将宏参数中众模块的头文件以及源文件定义为某个变量
# 该宏通常用在需要利用一个或多个模块的CMakeLists.txt中，故存在复数形式
# 该变量全局有效
# 该函数一般用在多个模块的代码联调中，当不确定某个模块中是否存在Bug时，利用该函数将其他模块中的源码加入
# 在调试时，可一起进行错误排查
# （一般）不建议作为接口适用
FUNCTION(P_SET_MODULE_SOURCES MODULES_SRCS)
    P_SET_X_SOURCES(module COMMON_SRCS ${ARGN})
    SET(${MODULES_SRCS} ${COMMON_SRCS} CACHE INTERNAL "${type}s sources")
ENDFUNCTION()
##[Interface]
## 设置当前模块包含的模块
## 依赖模块保存在P_${THE_${TYPE}}_DEPEND_MODULES
MACRO(P_MODULE_INCLUDE_MODULES module_name _KEY)
    P_X_INCLUDE_MODULES(module ${module_name} ${_KEY} ${ARGN})
ENDMACRO()
##[Interface]
# 创建当前模块，将其编译成动态链接库（目前仅支持动态链接库的创建）
# 该宏通常用在modules文件夹下的某个模块的CMakeLists.txt中
MACRO(P_CREATE_MODULE module_name)
    STRING(TOUPPER "${module_name}" MOD)
    P_GENERATE_MODULE(${module_name})
    P_MESSAGE("P_CREATE_MODULE(" ${module_name} ${ARGN} ")")
    P_MODULE_INCLUDE_DIRECTORIES(${module_name})
    SET(THE_MODULE ${PROJECT_NAME}_${MOD}_MODULE)
    P_SET_MODULE_SOURCES(THE_MODULE_HDR_SRCS ${module_name})
    SET(LIBRARY_NAME "")
    #注，判断语句中不需要$符号
    IF(LIBRARY_PREFIX_NAME)
        SET(LIBRARY_NAME ${LIBRARY_PREFIX_NAME}_${module_name})
    ELSE()
        SET(LIBRARY_NAME ${module_name})
    ENDIF()
    # 区分出依赖库和可执行文件
    SET(_EXE_VAR "")
    SET(_RAW_DEPS "")
    SET(FIND_DEPEND_KEY false)
    FOREACH(arg ${ARGN})
        IF(arg STREQUAL "DEPEND" OR arg STREQUAL "DEPENDENCY")
            SET(FIND_DEPEND_KEY true)
            CONTINUE()
        ENDIF()
        IF(NOT FIND_DEPEND_KEY)
            LIST(APPEND _EXE_VAR ${arg})
        ELSE()
            LIST(APPEND _RAW_DEPS ${arg})
        ENDIF()
    ENDFOREACH()
    # 当是模块时，编译动态链接库；否则编译可执行文件
    ADD_LIBRARY(${LIBRARY_NAME} SHARED ${THE_MODULE_HDR_SRCS})
    SET(DEPS ${_RAW_DEPS}) # ${_RAW_DEPS} 第三方依赖
    FOREACH(dep_mod ${P_${THE_MODULE}_DEPEND_MODULES})
        STRING(TOUPPER "${dep_mod}" DEP_MOD)
        LIST(APPEND DEPS ${P_${PROJECT_NAME}_${DEP_MOD}_MODULE_LIBS}) #链接相关的模块
    ENDFOREACH()
    #生成链接库时，依赖库必须一起进行链接
    TARGET_LINK_LIBRARIES(${LIBRARY_NAME} ${DEPS})
    SET(P_${THE_MODULE}_LIBS ${LIBRARY_NAME} CACHE INTERNAL "${THE_MODULE} library")
    SET(P_MODULES_LIBS ${P_MODULES_LIBS} ${P_${THE_MODULE}_LIBS} CACHE INTERNAL "module libraries")
ENDMACRO()
##[Interface]
# 设定宏参数的中模块是否安装
# 该宏一般在根目录的CMakeLists.txt中进行设置
MACRO(P_INSTALL_MODULES_OPTION_ON)
    P_INSTALL_X_OPTION_ON(module ${ARGN})
ENDMACRO()
##[Interface]
MACRO(P_INSTALL_MODULES_OPTION_OFF)
    P_INSTALL_X_OPTION_OFF(module ${ARGN})
ENDMACRO()
##[Interface]
# 安装当前模块
# 该宏通常用在modules文件夹下的某个模块的CMakeLists.txt中
FUNCTION(P_INSTALL_MODULE module_name)
    STRING(TOUPPER "${module_name}" MOD)
    SET(THE_MODULE ${PROJECT_NAME}_${MOD}_MODULE)
    IF(NOT DEFINED P_INSTALL_${THE_MODULE}_OPTION)
        P_INSTALL_MODULES_OPTION_ON(${module_name})
    ENDIF()
    # 如果INSTALL_OPTION
    IF(NOT P_INSTALL_${THE_MODULE}_OPTION)
        RETURN()
    ENDIF()
    P_MESSAGE("P_INSTALL_MODULE(" ${module_name} ")")
    IF(NOT P_INSTALL_PREFIX)
        SET(P_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/linux)
    ENDIF()
    IF(LIBRARY_PREFIX_NAME) #注，判断语句中不需要$符号
        IF(DEFINED ${PROJECT_NAME}_LIBVERSION)
            SET_TARGET_PROPERTIES(${LIBRARY_PREFIX_NAME}_${module_name}
                    PROPERTIES VERSION ${${PROJECT_NAME}_LIBVERSION}
                    SOVERSION ${${PROJECT_NAME}_SOVERSION})
        ENDIF()
        INSTALL(TARGETS ${LIBRARY_PREFIX_NAME}_${module_name}
                RUNTIME DESTINATION ${P_INSTALL_PREFIX}/bin
                LIBRARY DESTINATION ${P_INSTALL_PREFIX}/lib
                ARCHIVE DESTINATION ${P_INSTALL_PREFIX}/lib)
    ELSE()
        IF(DEFINED ${PROJECT_NAME}_LIBVERSION)
            SET_TARGET_PROPERTIES(${module_name}
                    PROPERTIES VERSION ${${PROJECT_NAME}_LIBVERSION}
                    SOVERSION ${${PROJECT_NAME}_SOVERSION})
        ENDIF()
        INSTALL(TARGETS ${module_name}
                RUNTIME DESTINATION ${P_INSTALL_PREFIX}/bin
                LIBRARY DESTINATION ${P_INSTALL_PREFIX}/lib
                ARCHIVE DESTINATION ${P_INSTALL_PREFIX}/lib)
    ENDIF()
    # 注：最后加"/"，则不会保留文件夹include；不加"/"，则会保留文件夹include
    P_MESSAGE(${P_INSTALL_PREFIX}/${P_LIBRARY_PREFIX})
    INSTALL(DIRECTORY ${P_${THE_MODULE}_LOCATION}/include/ DESTINATION ${P_INSTALL_PREFIX}/include/${LIBRARY_PREFIX_NAME})
    IF(EXISTS ${P_${THE_MODULE}_LOCATION}/data)
        INSTALL(DIRECTORY ${P_${THE_MODULE}_LOCATION}/data DESTINATION ${P_INSTALL_PREFIX})
    ENDIF()
ENDFUNCTION()
##[Interface]
# 模块单元测试(默认添加了对应的模块头文件和源文件)
MACRO(P_MODULE_CELL_TEST cell_test_name)
    P_X_CELL_TEST(module ${cell_test_name} ${ARGN})
ENDMACRO()
### end modules ###

##### samples #####
##[Interface]
# 设定宏参数的中是否加入项目(开选项)
# 该宏一般在根目录的CMakeLists.txt中进行设置
MACRO(P_ADD_SAMPLES_OPTION_ON)
    P_ADD_X_OPTION_ON(sample ${ARGN})
ENDMACRO()
##[Interface]
# (关选项)
MACRO(P_ADD_SAMPLES_OPTION_OFF)
    P_ADD_X_OPTION_OFF(sample ${ARGN})
ENDMACRO()
##[Interface]
# 编译宏参数中提到的示例
# 实际是否编译，则视是否在P_ADD_SAMPLE_OPTION设置该模块而定
# 该宏一般在samples文件夹下的CMakeLists.txt中设置
MACRO(P_ADD_SAMPLE sample_name)
    P_ADD_X(sample ${sample_name})
ENDMACRO()
##[Interface]
## 依赖模块保存在P_${THE_${TYPE}}_DEPEND_MODULES
MACRO(P_SAMPLE_INCLUDE_MODULES sample_name _KEY)
    P_X_INCLUDE_MODULES(sample ${sample_name} ${_KEY} ${ARGN})
ENDMACRO()
##[Interface]
MACRO(P_CREATE_SAMPLE sample_name)
    P_CREATE_X(sample ${sample_name} ${ARGN})
ENDMACRO()
##[Interface]
# 设定宏参数的中模块是否安装
# 该宏一般在根目录的CMakeLists.txt中进行设置
MACRO(P_INSTALL_SAMPLES_OPTION_ON)
    P_INSTALL_X_OPTION_ON(sample ${ARGN})
ENDMACRO()
##[Interface]
MACRO(P_INSTALL_SAMPLES_OPTION_OFF)
    P_INSTALL_X_OPTION_OFF(sample ${ARGN})
ENDMACRO()
##[Interface]
FUNCTION(P_INSTALL_SAMPLE sample_name)
    P_INSTALL_X(sample ${sample_name})
ENDFUNCTION()
##[Interface]
# 模块单元测试(默认添加了对应的模块头文件和源文件)
MACRO(P_SAMPLE_CELL_TEST cell_test_name)
    P_X_CELL_TEST(sample ${cell_test_name} ${ARGN})
ENDMACRO()
### end samples ###

##### apps #####
##[Interface]
# 设定宏参数的中是否加入项目(开选项)
# 该宏一般在根目录的CMakeLists.txt中进行设置
MACRO(P_ADD_APPS_OPTION_ON)
    P_ADD_X_OPTION_ON(app ${ARGN})
ENDMACRO()
##[Interface]
# (关选项)
MACRO(P_ADD_APPS_OPTION_OFF)
    P_ADD_X_OPTION_OFF(app ${ARGN})
ENDMACRO()
##[Interface]
# 编译宏参数中提到的应用
# 实际是否编译，则视是否在P_ADD_SAMPLE_OPTION设置该模块而定
# 该宏一般在samples文件夹下的CMakeLists.txt中设置
MACRO(P_ADD_APP app_name)
    P_ADD_X(app ${app_name})
ENDMACRO()
##[Interface]
## 依赖模块保存在P_${THE_${TYPE}}_DEPEND_MODULES
MACRO(P_APP_INCLUDE_MODULES app_name _KEY)
    P_X_INCLUDE_MODULES(app ${app_name} ${_KEY} ${ARGN})
ENDMACRO()
##[Interface]
MACRO(P_CREATE_APP app_name)
    P_CREATE_X(app ${app_name} ${ARGN})
ENDMACRO()
##[Interface]
# 设定宏参数的中应用是否安装
# 该宏一般在根目录的CMakeLists.txt中进行设置
MACRO(P_INSTALL_APPS_OPTION_ON)
    P_INSTALL_X_OPTION_ON(app ${ARGN})
ENDMACRO()
##[Interface]
MACRO(P_INSTALL_APPS_OPTION_OFF)
    P_INSTALL_X_OPTION_OFF(app ${ARGN})
ENDMACRO()
##[Interface]
# 安装应用
FUNCTION(P_INSTALL_APP app_name)
    P_INSTALL_X(app ${app_name})
ENDFUNCTION()
##[Interface]
# 应用单元测试(默认添加了对应的模块头文件和源文件)
MACRO(P_APP_CELL_TEST cell_test_name)
    P_X_CELL_TEST(app ${cell_test_name} ${ARGN})
ENDMACRO()
### end apps ###