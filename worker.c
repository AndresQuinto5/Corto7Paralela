/*
 ============================================================================
 To build use  : mpicc worker.c -o worker
 ============================================================================
 */
#include <mpi.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // Para usar getpid()

#define MAXLEN 100
char *greetings[] = { "Hello", "Hi", "Awaiting your command" };
char buff[MAXLEN];

int main (int argc, char **argv)
{
  srand (time (0) ^ (getpid()<<16)); // Semilla basada en el tiempo y el PID
  MPI_Init (&argc, &argv);
  int grID = rand () % 3;
  int rank;
  MPI_Comm_rank (MPI_COMM_WORLD, &rank);
  int pid = getpid(); // Obtenemos el PID
  sprintf (buff, "Node %i (PID: %i) says %s", rank, pid, greetings[grID]);
  
  MPI_Send (buff, strlen (buff), MPI_CHAR, 0, 0, MPI_COMM_WORLD);
  MPI_Finalize ();
}
