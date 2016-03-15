
#编译
add_executable(insertionSortSample insertionSortSample.c ../src/utility.c ../src/utility.h ../src/insertion_sort.c ../src/insertion_sort.h)

install(TARGETS insertionSortSample DESTINATION bin)