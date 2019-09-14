# Parallel Programming



<!-- todo -->

The `threading` module uses threads, the `multiprocessing` module uses processes. The difference is that threads run in the same memory space, while processes have separate memory. This makes it a bit harder to share objects between processes with multiprocessing. Since threads use the same memory, precautions have to be taken or two threads will write to the same memory at the same time. This is what the global interpreter lock is for.

Spawning processes is a bit slower than spawning threads. Once they are running, there is not much difference.



## Threading

### thread pool

```python
pool = multiprocessing.pool.ThreadPool()
```

#### apply

```python
pool.apply(func[, args[, kwds]])
```

- return what is defined in the function
- call function with arguments and keywords
- synchronous execution, block until gets result

#### apply_async

```python
pool.apply_async(func[, args[, kwds[, callback[, error_callback]]]])
```

- return a result object
- call function with arguments, keywords, callback function, error_callback function
  - if the function completes, the callback is applied
  - if the function fails, the error_callback is applied
- asynchronous execution, do not block

#### map

```python
pool.map(func, iterable[, chunksize])
```

- return what is defined in the function
- parallel version of built-in function map()
- only support one iterable argument
- block until gets result
- chop the iterable object into chunks, submit them to the thread pool as separate tasks

#### map_async

```python
pool.map_async(func, iterable[, chunksize[, callback[, error_callback]]])
```

- return a result object.
- call function with arguments, keywords, callback function, error_callback function
  - if the function completes, the callback is applied
  - if the function fails, the error_callback is applied
- asynchronous execution, do not block

#### close

```python
pool.close()
```

- prevent any more tasks from being submitted to the pool
- once all the tasks have been completed the worker threads will exit.

#### terminate

```python
pool.terminate()
```

- stop the worker threads immediately without completing work
- terminate() will be called if the pool object is collected by garbage collector

#### join

```python
pool.join()
```

- wait for the worker threads to exit
- must call close() or terminate() before calling join()



## MultiProcessing

### process pool

```python
pool = multiprocessing.Pool()
```

- the same as threading



## MPI

- MPI: Message Passing Interface
- OpenMP: one implementation of the MPI specification

### Launch

- mpiexecu: defined in the MPI standard 
- mpirun: a command implemented by many MPI implementations

### Environment

- MPI_INIT
    - initialize MPI environment
    - implemented 

### COMM (Communicator)

- Intercomm

- Intracomm
    - COMM_WORLD: contains all processes
    - COMM_SELF: contains the process itself

#### COMM_WORLD

- Get_rank(): get the ID of current process

- Get_size(): get the total number of processes

##### Point-To-Point Communication

###### Blocking Communication

- send(), recv(), sendrecv()
- Send(), Recv(), Sendrecv()

- send and receive Python object / class asynchronized

###### Nonblocking Communication

- isend(), irecv()
- Isend(), Irecv()

- return a MPI.Request instance
    - MPI.Request.Test()
    - MPI.Request.Wait()
    - MPI.Request.Cancel()