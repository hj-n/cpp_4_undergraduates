run: main.o helper.o district.o election.o party.o
	g++ -o program main.o helper.o district.o election.o party.o

main.o: main.answer.cpp
	g++ -c main.answer.cpp
	mv main.answer.o main.o

helper.o: helper.cpp helper.h
	g++ -c helper.cpp

district.o: district.cpp district.h
	g++ -c district.cpp

election.o: election.cpp election.h
	g++ -c election.cpp

party.o: party.cpp party.h
	g++ -c party.cpp


clean:
	rm program
	rm *.o

