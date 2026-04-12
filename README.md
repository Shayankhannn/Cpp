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
auto -- its a keyword -- let the compiler deduce the type

--------------------- int float -  double modifiers -------

. remember tthe suffix when initializing floating point variable 
otherwise the default will be double 
. double works well in many situation , so you will see it used alot 

. eg for float float num {1.234553345334f} -- add f 
. for long add l at the end 

---------------- boolean ----------
they take 1 byte in memory

if you write std::boolalpha; - you will see actualm values of boolean like true and false instead of 0 and 1

--------- char 

char occupies 1 byte in memory 

------- precedence and association -----

precedence -- which operation to do first

association -- which direction or which order
