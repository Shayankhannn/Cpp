C++
42
2 49
3 40


downloaded gcc + minggw from winlibs without llvm and clang 

add some changes in args in task.json 
"args": [
				// "-fdiagnostics-color=always",
				"-g",
				"-std=c++20",
				// "${file}",
				"${workspaceFolder}\\*.cpp",
				"-o",
				// "${fileDirname}\\${fileBasenameNoExtension}.exe"
				"${fileDirname}\\rooster.exe"
			],


------------            -------------------------------------

spaceship operator -- threeway comparison operator <=>

    auto result = (10 <=> 20) > 0 ;

            compares two values and returns:

negative → if left < right
0 → if equal
positive → if left > right

-----------------------------

auto -- type interface -- lets compiler figure the type


---------------------

doing intellisense config in edit config UI 

selected c++20 in c++ standard




-------- programs ---

-- first program --

PS D:\Projects\c++\first-cpp-program> g++ first.cpp -o first
PS D:\Projects\c++\first-cpp-program> .\first.exe
hello

--- cin cout ---
sometime user write their name with space cin can get into errors for this we have getline

use cin.ignore() - before getline  if using cin above getline it will ignore empty space 


----- data types -----
int -- stores decimal -- 4byte memory or more
void --  its typeless type -- will learn in detail later
auto -- its a keyword 