#include <stdio.h> 
#include <string.h> 
 
void generateAssemblyCode(char *expression) { 
	char operator; 
	int operand1, operand2; 
     
	if (sscanf(expression, " %c", &operator) == 1) { 
    	if (operator == '+' || operator == '-' || operator == '*' || operator == '/') { 
        	sscanf(expression + 2, "%d %d", &operand1, &operand2); 
             
        	switch (operator) { 
            	case '+': 
                	printf("add eax, %d\n", operand1); 
                	printf("add eax, %d\n", operand2); 
                	break; 
            	case '-': 
                	printf("sub eax, %d\n", operand1); 
                	printf("sub eax, %d\n", operand2); 
                	break; 
            	case '*': 
                	printf("mov ebx, %d\n", operand1); 
                	printf("imul ebx, %d\n", operand2); 
                	printf("mov eax, ebx\n"); 
                	break; 
            	case '/': 
                	printf("mov eax, %d\n", operand1); 
                	printf("cdq\n"); 
                	printf("idiv %d\n", operand2); 
                	break; 
            	default: 
                	printf("Invalid operator: %c\n", operator); 
                	break; 
        	} 
    	} 
    	else { 
        	printf("Invalid operator: %c\n", operator); 
    	} 
	} 
	else { 
    	printf("Invalid input\n"); 
	} 
} 
 
int main() { 
	char expression[100]; 
     
	printf("Enter a prefix expression: "); 
	fgets(expression, sizeof(expression), stdin); 
     
	generateAssemblyCode(expression); 
     
	return 0; 
} 
 
 
 
