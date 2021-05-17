shelter:	main.o Identifiable.o Animal.o Client.o CriteriaArray.o Criteria.o Match.o MatchList.o MatchListByScore.o MatchListByClient.o View.o Control.o Shelter.o
	g++ -o shelter main.o Identifiable.o Animal.o Client.o CriteriaArray.o Criteria.o Match.o MatchList.o MatchListByScore.o Control.o MatchListByClient.o Shelter.o View.o

main.o:	main.cc 
	g++ -c main.cc

Identifiable.o:	Identifiable.cc Identifiable.h
	g++ -c Identifiable.cc

Animal.o:	Animal.cc Animal.h 
	g++ -c Animal.cc
	
Client.o:	Client.cc Client.h 
	g++ -c Client.cc	

Match.o:	Match.cc Match.h 
	g++ -c Match.cc	

MatchList.o:	MatchList.cc MatchList.h 
	g++ -c MatchList.cc	

MatchListByScore.o:	MatchListByScore.cc MatchListByScore.h 
	g++ -c MatchListByScore.cc

MatchListByClient.o:	MatchListByClient.cc MatchListByClient.h 
	g++ -c MatchListByClient.cc
	
Shelter.o:	Shelter.cc Shelter.h 
	g++ -c Shelter.cc
	
Control.o:	Control.cc Control.h
	g++ -c Control.cc
	
View.o:	View.cc View.h
	g++ -c View.cc	
		
clean:
	rm -f *.o shelter
