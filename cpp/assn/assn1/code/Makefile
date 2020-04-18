run: main.o helper.o
	g++ -o program main.o helper.o

main.o: main.answer.cpp
	g++ -c main.answer.cpp

helper.o: helper.cpp helper.h
	g++ -c helper.cpp

clean:
	rm program
	rm *.o
	rm picture.txt

cleanPic:
	rm picture.txt
