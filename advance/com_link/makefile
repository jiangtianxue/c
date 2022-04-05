.PHONY: precom, com, assm, link

PROJECT="foo"

precom:
	gcc -E $(PROJECT).c -o $(PROJECT).i

com:
	gcc -S $(PROJECT).c -o $(PROJECT).s

assm:
	gcc -c $(PROJECT).c -o $(PROJECT).o

