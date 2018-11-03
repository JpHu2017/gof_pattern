SET(sample dummy)
#设定包含的模块
P_SAMPLE_INCLUDE_MODULES(${sample} MODULES dummy)
# 依赖库之间能够自己解决依赖问题（找到直接依赖的模块即可）
P_CREATE_SAMPLE(${sample} dummy_sample_demo.cpp)
P_SAMPLE_CELL_TEST(dummy_sample_cell_test test/dummy_sample_cell_test.cpp)
P_INSTALL_SAMPLE(${sample})