
#编译
add_executable(InsertionSortSample insertionSortSample.c ../src/utility.c ../src/utility.h ../src/insertion_sort.c ../src/insertion_sort.h)
add_executable(MergeSortSample MergeSortSample.c ../src/utility.c ../src/utility.h ../src/merge_sort.c ../src/merge_sort.h)
add_executable(SingleLinkListSample SingleLinkListSample.c ../src/LinkList.c ../src/LinkList.h)
add_executable(StackSample StackSample.c ../src/Stack.c ../src/Stack.h)
add_executable(CircleQueueSample CircleQueueSample.c ../src/CircleQueue.c ../src/CircleQueue.h)

install(TARGETS InsertionSortSample DESTINATION bin)
install(TARGETS MergeSortSample DESTINATION bin)
install(TARGETS SingleLinkListSample DESTINATION bin)
install(TARGETS StackSample DESTINATION bin)
install(TARGETS CircleQueueSample DESTINATION bin)