set(util_SERCS quicksort.cpp)

add_library(util ${util_SERCS})
target_link_libraries(util pthread rt)