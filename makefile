
compile: main.c 
	 gcc main.c -o ming 

run: ming
	 ./ming $(var)

clean: ming
	 rm ming
