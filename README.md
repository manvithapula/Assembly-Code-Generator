# Assembly-code-generator 
c code to generate assembly code from given prefix code

The goal of this project is to develop a C program that can convert mathematical expressions in prefix notation into equivalent assembly code. 
Prefix notation, also known as Polish notation, represents mathematical expressions in a way that eliminates the need for parentheses and clarifies operator precedence. The program will take prefix expressions as input and produce the corresponding assembly code as output.  
 
The code generation phase of a compiler translates the intermediate form into the target language. Given the information contained in the syntax tree, generating correct code is usually not a difficult task . To generate assembly or machine language, the code generator traverses the symbol table to assign locations to variables, and then traverses the intermediate representation of the program, generating loads and stores for variable references, interspersed with appropriate arithmetic operations, tests, and branches. Naive code for our GCD example appears in x86 assembly language. It was generated automatically by a simple pedagogical compiler. 

