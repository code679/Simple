/***************************************************************************
Symbol Table Module
***************************************************************************/
/*=========================================================================
DECLARATIONS
=========================================================================*/
/*-------------------------------------------------------------------------
SYMBOL TABLE RECORD
-------------------------------------------------------------------------*/
struct symrec
{
<<<<<<< HEAD
char *name; /* name of symbol */
int offset; /* data offset */
struct symrec *next; /* link field */
=======
char *name; /* name of symbol
*/
int offset; /* data offset
*/
struct symrec *next;
/* link field
*/
>>>>>>> 0fcb9c5c8cbfb0c02c2a3fc4e5dcd6da82f9d688
};
typedef struct symrec symrec;
/*-------------------------------------------------------------------------
SYMBOL TABLE ENTRY
-------------------------------------------------------------------------*/
symrec *identifier;
/*-------------------------------------------------------------------------
SYMBOL TABLE
Implementation: a chain of records.
------------------------------------------------------------------------*/
symrec *sym_table = (symrec *)0; /* The pointer to the Symbol Table */
/*========================================================================
Operations: Putsym, Getsym
========================================================================*/
symrec * putsym (char *sym_name)
{
symrec *ptr;
ptr = (symrec *) malloc (sizeof(symrec));
ptr->name = (char *) malloc (strlen(sym_name)+1);
strcpy (ptr->name,sym_name);
ptr->offset = data_location();
ptr->next = (struct symrec *)sym_table;
sym_table = ptr;
return ptr;
}
symrec * getsym (char *sym_name)
{
symrec *ptr;
for ( ptr = sym_table;
ptr != (symrec *) 0;
ptr = (symrec *)ptr->next )
if (strcmp (ptr->name,sym_name) == 0)
return ptr;
return 0;
}
/************************** End Symbol Table **************************/
