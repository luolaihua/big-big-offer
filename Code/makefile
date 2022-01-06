OBJ = main.o ListNode.o func.o
main:$(OBJ)
	g++ -o main $(OBJ)
main.o: ListNode.h headers.h func.h
ListNode.o:headers.h ListNode.h
func.o:func.h headers.h

.PHONY:clean
clean:
	rm -rf main $(OBJ)
