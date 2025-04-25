all:
	gcc main.c -o main.exe
	gcc test_main.c -o test_main.exe

run:
	main.exe

test: all
	test_main.exe

clean:
	del main.exe test_main.exe output.txt
