# fibonacci-benchmark

How to run:

Open the "Fibonacci-Benchmark" folder in WSL with Make installed

Available Makefile commands:
    
    time (default) = Compile and run all main_b_time files -> generates all dataIterative and dataRecursive files
    timei = Compile and run main_b_time_iterative.c -> generates a pair of dataIterative files
    timer = Compile and run main_b_time_recursive.c -> generates a pair of dataRecursive files
    spacei = Compile and run main_b_space_iterative.c
    spacer = Compile and run main_b_space_recursive.c
    clear = Clears all generated files (*.o *.out *.exe *.dat)
    
    
Instructions for time commands:

After using the "time" commands, a pair of .dat files are generated for each function
(For example: dataIterative.dat and dataIterativeMagnified.dat)
    
    data*.dat = stores actual runtime up to 40 steps
    data*Magnified.dat = stores magnified values of actual runtime (Only for time-complexity graph visualization)
    
    Note: in the case of dataIterativeMagnified.dat, the data is generated every 1000 steps up to the 50000th step.
    
Copy all the values from the Magnified.dat files (delete the last comma) and paste it in desmos.com. A scatter plot graph will be generated that shows the shape of the runtime against step-number curve.
    
By running "make time", and extracting the data from the magnified.dat files, this is the scatter plot that I got:


![desmos complexity](https://user-images.githubusercontent.com/114067350/203760893-b5481804-7e9c-451c-bc2f-414e4d579598.png)

In this case, Iterative = Blue,  Recursive = Red.


By matching the scatter plots with its respective curves:

![desmos-time-complex](https://user-images.githubusercontent.com/114067350/203910421-890cf6ba-5d34-4824-91ea-b0c5d1ddde50.png)


We can conclude that the iterative method has O(n) complexity, as the complexity increases linearly with step number. 
While the recursive method has O(2^n) complexity, as the complexity increases exponentially with step number.
