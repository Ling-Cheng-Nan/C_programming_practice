/* given fixed number elements of array */
#define NODE_SIZE10   10 
#define NODE_SIZE20   20 
#define NODE_SIZE100 100

/* given fixed dimensions of array */
#define DIMEN_SIZE05 5
#define DIMEN_SIZE03 3

/* value range 1~500 */
#define MAX 50
#define MIN 1

/* given number of nodes range from 1~1000000  */
#define MIN_NODE 1
#define MAX_NODE 100

/* given array dimension range from 1~10 */
#define MIN_D 1
#define MAX_D 10




/*define struct of point*/

typedef struct Point {
	
	char[11] id;
	int value[DIMEN_SIZE03];
	int x, y, z;

} point; 
