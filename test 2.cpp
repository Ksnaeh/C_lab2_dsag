#include <stdio.h> /* Include header file for printf */
#define maxV 100 /* Define a constant */
int V, E, x, y; /* Declare variables */
int a[maxV][maxV]; /* Declare a two dimensional array */
int count = 0; /* Declare and initialize variable */
void read_graph(void); /* Function prototype */
void print_graph(void);
void main() /* Main program. */
{
read_graph(); /* call function to input graph adjacency matrix */
print_graph(); /* call function to output graph adjacency matrix */
 }
 void read_graph( void ) /* Function to read graph adjacency matrix */
{
int edge, x;
printf("\nInput number of vertices :");
scanf("%d", &V);
if (V > maxV)
printf("Exceed the maximum number of vertices permitted");
else
{
for (x=1; x <= V; x++)
 for (y=1; y <= V; y++)
 a[x][y] = 0;
for (x=1; x <= V; x++)
 for (y=x; y <= V; y++)
 {
printf("\na[ %d ][ %d ]=", x, y);
scanf("%d", &edge);
a[x][y] = edge;
a[y][x] = edge;
 }
 }
}
void print_graph(void) /* Function to print graph adjacency matrix */
 {
 int x,y;
 for (x=1; x <= V; x++)
 for (y=1; y <= V; y++)
 printf("a[ %d ][ %d ]= %d", x, y, a[x][y]);
 }