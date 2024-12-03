RestoreIPAddresses: RestoreIPAddresses.o
	g++ -g -o RestoreIPAddresses.exe RestoreIPAddresses.o -pthread    

RestoreIPAddresses.o: RestoreIPAddresses/RestoreIPAddresses.cpp
	g++ -g  -c -pthread RestoreIPAddresses/RestoreIPAddresses.cpp
