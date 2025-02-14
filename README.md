-------------------------------------------------------------------
Roll Number: [220001021]
Name: [vinay cherupally]
Course: [ complier techinques]
Assignment: LEX Tools Assignment
Submission Date: [ 14/02/2025 ]
-------------------------------------------------------------------

Description:
------------
This submission contains the following components:
1. Code Files:
   - **wordcount.l**: A Lex program that counts the number of words. 
     (A word consists of one or more uppercase letters, lowercase letters, or digits.)
   - **commentcount.l**: A Lex program that counts the number of comments in a C program file.
     (This program counts both single-line comments (//) and multi-line comments (/* ... */).)
2. Documentation:
   - **README.txt**: This file.
   - **question1_handwritten.jpg** (or **question1_handwritten.pdf**): A scanned copy of the handwritten answer for Question 1.

Questions:
----------
1. **Question 1 [10 Marks]:** What is LEX Tool in Compiler? Discuss the structure of a LEX program.
   - *Note:* The answer is handwritten. Please see the attached scanned document (`question1_handwritten.jpg` or `question1_handwritten.pdf`) for the complete answer.
2. **Question 2 [10 Marks]:** Write a LEX program to count the number of words.
   - Refer to `wordcount.l` for the code.
3. **Question 3 [10 Marks]:** Write a LEX program to count the number of comments in a given C program file.
   - Refer to `commentcount.l` for the code.

Compilation and Execution Instructions:
------------------------------------------
1. **Install Flex:**
   - Ensure Flex is installed on your Linux system. For Debian/Ubuntu, open a terminal and run:
     ```bash
     sudo apt-get update
     sudo apt-get install flex
     ```
   - Also ensure that GCC is installed for compiling the generated C code.

2. **Compiling and Running the Word Count Program (`wordcount.l`):**
   - Open a terminal in the directory containing `wordcount.l`.
   - Generate the C source code from the Lex file:
     ```bash
     flex wordcount.l
     ```
     (This will generate a file named `lex.yy.c`.)
   - Compile the generated code with GCC:
     ```bash
     gcc lex.yy.c -lfl -o wordcount
     ```
   - Run the program. For example, if you have an input file named `input.txt`:
     ```bash
     ./wordcount < input.txt
     ```

3. **Compiling and Running the Comment Count Program (`commentcount.l`):**
   - Open a terminal in the directory containing `commentcount.l`.
   - Generate the C source code from the Lex file:
     ```bash
     flex commentcount.l
     ```
   - Compile the generated code with GCC:
     ```bash
     gcc lex.yy.c -lfl -o commentcount
     ```
   - Run the program. For example, if you have a C program file named `program.c`:
     ```bash
     ./commentcount < program.c
     ```

Additional Notes:
-----------------
- Ensure that all the files are in the same directory when compiling and running.
- If you encounter any errors such as "file not found," verify that the file names and paths are correct.
- The handwritten answer for Question 1 is attached as a scanned image (`note.png`)

Thank you!
