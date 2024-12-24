	----To build----
	1.Make .txt file in the root
	2.Write the code(*)
	3.Change .txt to .bat
	4.Open the file
	
	(*)
	mkdir build
	cd build
	cmake -G "Makefiles" ..
	cmake --build .
	mv a.exe ../
