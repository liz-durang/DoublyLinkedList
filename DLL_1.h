// DLL.h

#ifndef  DLL_INC
#define  DLL_INC

#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//typedefiniendo

typedef  int Item; 
typedef Item* ItemPtr; 

typedef struct Node     
{
	Item data;          
	struct Node* next; 
	struct Node* prev; 
} Node;               

typedef Node* NodePtr; // alias NodePtr cada que refiramos a *Node

typedef struct DLL
{
	NodePtr first; 
	NodePtr last;
	NodePtr cursor;
	size_t len;
} DLL;


DLL*   DLL_New();
void   DLL_Delete(      DLL* this );
bool   DLL_InsertBack(  DLL* this, Item _data );
bool   DLL_InsertFront( DLL* this, Item _data );
bool   DLL_InsertAfter( DLL* this, Item _data );
bool   DLL_InsertBefore(DLL* this, Item _data );
bool   DLL_Remove(      DLL* this, ItemPtr _data_back );
bool   DLL_RemoveFront( DLL* this, ItemPtr _data_back );
bool   DLL_RemoveBack(  DLL* this, ItemPtr _data_back );
bool   DLL_RemoveAfter( DLL* this, ItemPtr _data_back );
bool   DLL_RemoveBefore(DLL* this, ItemPtr _data_back );
size_t DLL_Len(         DLL* this );
bool   DLL_IsEmpty(     DLL* this );
void   DLL_MakeEmpty(   DLL* this );
bool   DLL_Peek(        DLL* this, ItemPtr _data_back );
void   DLL_CursorFirst( DLL* this );
void   DLL_CursorLast(  DLL* this );
void   DLL_CursorNext(  DLL* this );
void   DLL_CursorPrev(  DLL* this );
bool   DLL_FindIf(      DLL* this, Item _key );
bool   DLL_Search(      DLL* this, Item _key );
void   DLL_Traverse(    DLL* this, Item _key ); 

#endif   /* ----- #ifndef DLL_INC  ----- */

