# Instrucciones de compilación y ejecución de archivos en C
Este documento proporciona instrucciones para compilar y ejecutar tres archivos en C: `master2.c` , `worker2.c` y `mpi_trapIO.c.`

## Requisitos previos

Antes de continuar con las instrucciones de compilación y ejecución, es necesario asegurarse de que se cumplan los siguientes requisitos previos:

- Tener instalado un compilador de C (por ejemplo, gcc)
- Tener instalado MPI (Message Passing Interface)

## Compilación

A continuación se muestran las instrucciones para compilar cada uno de los archivos en C:

## master2.c y worker2.c

Para compilar estos archivos, es necesario utilizar el compilador de MPI. Se puede utilizar el siguiente comando para compilar ambos archivos:

```sh
mpicc master2.c -o master
mpicc worker2.c -o worker
```

## mpi_trapIO.c
Para compilar este archivo, es necesario utilizar el compilador de MPI. Se puede utilizar el siguiente comando para compilar el archivo:

```sh
mpicc mpi_trapIO.c -o mpi_trap1
```

## Ejecución

A continuación se muestran las instrucciones para ejecutar cada uno de los archivos compilados anteriormente:

## master2.c y worker2.c

Para ejecutar estos archivos, es necesario utilizar el comando "mpirun" seguido del número de procesos que se desean ejecutar para cada archivo. El siguiente comando se puede utilizar para ejecutar ambos archivos:

```sh
mpirun -np 1 master : -np 3 worker
mpi_trapIO.c
```

Para ejecutar este archivo, es necesario utilizar el comando "mpirun" seguido del número de procesos que se desean ejecutar. El siguiente comando se puede utilizar para ejecutar el archivo:

```sh
mpirun -n 4 ./mpi_trap1
```