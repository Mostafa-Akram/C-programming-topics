# Session 5 Tasks

### Task 1

    find the smallest value of 3 input intgers.

### Task 2

#### what will happen in division by **Zero** and why??

# Answer

## first Observation (what happened is)

##### int data type

to do that with diffrent way and in diffrent compilers first in the local machine using **int** data type the output was **arithmetic exception** aslo that mean that file **compiled successfully** without any errors. as shown in next fig. :

![Alt text](Screenshot%20from%202023-06-02%2003-42-12.png)

##### float/Double data type in local machine

when the Data type changed to **float or double** in my local machine the output **was** the same, when the program repeat the code **9 time** trying to see many samples the output stored in the memory was **NAN** (Not a number) then if we used print statment to print it value, first the value was a number after that the remaining 8 valuse was another number.

![Alt text](Screenshot%20from%202023-06-02%2003-58-39.png)

##################################################################

##### float/Double data type in online compiler

when the Data type changed to **float or double** in online compiler the output **was not** the same in each compliation, when the program repeat the code **9 time** trying to see many samples the output stored in the memory,  if we used print statment to print it value, first the value was a number after that the remaining 8 valuse was another number.

![Alt text](Screenshot%20from%202023-06-02%2003-58-01.png)

#####################################################################
#####################################################################

## Second Debugging process

when trying to debug code step by step at the point of storing the value of num/0 in the memory the output stored in the memory was **NAN**  then if I tried to **step into** print the value it stuck in it even if Clicking **step into** many times and if I click continue to make CPU continue to the nearest output the output will be like the observation in float and double data type.

![Alt text](Screenshot%20from%202023-06-02%2003-53-36.png)
