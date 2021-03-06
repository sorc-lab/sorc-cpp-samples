#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	// Struct example (NOTE: This is not the same as std::vector)
	struct Vector
	{
		float x;
		float y;
		float z;
	};

	Vector vector;
	vector.x = 20;
	vector.y = 30;
	vector.z = 40;

	// printf using %g to print floats without decimal places
	printf("A 3-space vector at %g, %g, %g\n", vector.x, vector.y, vector.z);

	std::string tmpStr = "Testing printf strings using C++ std::string";
	printf("%s\n", tmpStr.c_str()); // must use c_str() to print strings

	// Pointer to Vector type
	Vector* vectorPntr;
	vectorPntr = &vector;
	vectorPntr->x = 1000;
	vectorPntr->y = 666;
	vectorPntr->z = 444;

	std::cout << vector.x << vector.y << vector.z << std::endl;
	std::cout << "vector is stored at address: " << vectorPntr << std::endl;
	std::cout << std::endl;
	std::cout << "vector.x address: " << &vector.x << std::endl;
	std::cout << "vector.y address: " << &vector.y << std::endl;
	std::cout << "vector.z address: " << &vector.z << std::endl;

	// cin
	std::cout << "What is your age?" << std::endl;

	int age;
	std::cin >> age;
	std::cout << "You entered: " << age << std::endl;

	if (!std::cin)
	{
		std::cout << "Invalid age! Goodbye!" << std::endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/** IDE SETTINGS: VISUAL STUDIO COMMUNITY v16 */
// IDE font set to Liberation Mono, bold weight, 10pt size
	// Consolas can be used if Mono fonts are not available

// Git Diff Margin tools that work like IntelliJ Git integration
	// Extensions->Manage Extensions

// Remove the default "Indicator Margin" in Tools->Options->Text Editor->General
	// Untick "Indicator margin" and "Selection margin"

// Add a Column Indicator at column 120
	// Download and enable "Editor Guidlines" extension
	// Add guideline via right-click->Guidelines->Add Guideline (adds where cursor is)

/** GIT SETTINGS */
// TODO: This doc is missing the part where you set global config setting to commit with LF
// and checkout with CRLF. This seems wrong and it should be turned OFF and the IDE or text
// editor should be responsible for handling line endings. VS Code is set to LF and Visual
// Studio 2019 is set to?... some place in  .editorconfig file. This file needs to be added
// to the project and set to LF line endings and these config settings in the file will
// override global VS editor config settings and can be shared, as it exists in the code repo.

// # Remove everything from the index
// $ git rm --cached -r .

// # Re - add all the deleted files to the index
// # You should get lots of messages like : "warning: CRLF will be replaced by LF in <file>."
// $ git diff --cached --name -only -z | xargs -0 git add

// # Commit
// $ git commit - m "Fix CRLF"

// NOTE: Might make more sense to just use `git config --global core.whitespace cr-at-eol` to remove the ^M?