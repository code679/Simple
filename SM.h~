/***************************************************************************
Stack Machine
***************************************************************************/
/*=========================================================================
DECLARATIONS
=========================================================================*/
/* OPERATIONS: Internal Representation */
enum code_ops { HALT, STORE, JMP_FALSE, GOTO,
DATA, LD_INT, LD_VAR,
READ_INT, WRITE_INT,
LT, EQ, GT, ADD, SUB, MULT, DIV, PWR };
/* OPERATIONS: External Representation */
char *op_name[] = {"halt", "store", "jmp_false", "goto","data", "ld_int", "ld_var", "in_int", "out_int","lt", "eq", "gt", "add", "sub", "mult", "div", "pwr" };

struct instruction
{
enum code_ops op;
int arg;
};

/* CODE Array */
struct instruction code[999];

/* RUN-TIME Stack */
int stack[999];


/*-------------------------------------------------------------------------
Registers
-------------------------------------------------------------------------*/
int pc= 0;
struct instruction ir;
int ar = 0;
int top = 0;
char ch;

/*=========================================================================
Fetch Execute Cycle
=========================================================================*/
void fetch_execute_cycle()
{
do { /*printf( "PC = %3d IR.arg = %8d AR = %3d Top = %3d,%8d\n",
pc, ir.arg, ar, top, stack[top]); */
/* Fetch
*/
ir = code[pc++];
/* Execute
*/
switch (ir.op) {
case HALT
: printf( "halt\n" );
break;
case READ_INT : printf( "Input: " );
scanf( "%ld", &stack[ar+ir.arg] ); break;
case WRITE_INT : printf( "Output: %d\n", stack[top--] ); break;
case STORE
: stack[ir.arg] = stack[top--];
break;
case JMP_FALSE : if ( stack[top--] == 0 )
pc = ir.arg;
break;
case GOTO
: pc = ir.arg;
break;
case DATA
: top = top + ir.arg;
break;
