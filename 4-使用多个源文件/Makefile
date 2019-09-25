message_hider: message_hider.o encrypt.o
	gcc message_hider.o encrypt.o -o message_hider
message_hider.o: message_hider.c encrypt.h
	gcc -c message_hider.c
encrypt.o: encrypt.h encrypt.c
	gcc -c encrypt.c