all: heaps quicks merges bubbles insertion

heaps: heap.c sort.h
	gcc heap.c sort.h -o heap

quicks: quick.c sort.h
	gcc quick.c sort.h -o heap

merges:	merge.c sort.h 
	gcc merge.c sort.h -o heap

bubbles: bubble.c sort.h
	gcc bubble.c sort.h -o heap

insertions: insertion.c sort.h
	gcc insertion.c sort.h -o heap

timers: timer.cpp
	g++ timer.cpp -o timer
