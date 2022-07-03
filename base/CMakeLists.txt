set(base_SERCS
        ThreadPool.cpp
        Thread.cpp)

add_library(base ${base_SERCS})
target_link_libraries(base pthread rt)