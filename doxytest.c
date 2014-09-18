/*@file test doxygen
@brief test sdoxygen
*/
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<pthread.h>
#define uset __uset()__  ///< test a macro  definition 

class Test
{
 public:
  char *member(char data);
}
///fn char * Test::member(char data)
///@param data a data  
///return value that doesn't none
char *Test::member(char data)
{
  
}
///brief a struct of a list node 
///detailed his is the main process of a structure 
typedef struct  s_zlist 
{
  void *data;   ///<brief the data in this structure 

  int length;  ///<brief the length of data

  struct s_zlist *next;  ///< next node

  struct s_zlist *prev;   ///<previous node

}zlist;

/*brief a entry point of the main process
 * the entry point of this software.
 * Detailed  descrition starts here
 * 
 *
 */
void main(int argc,char argv[])
{
  int x=0; 
 
  int y=0 ;

  x=0;
     
  printf("hello world!");
  
}

