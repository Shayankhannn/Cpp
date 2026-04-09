C++
42

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