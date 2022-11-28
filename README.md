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
    
    
# Instructions for checking time complexity:

After using the "time" commands, a pair of .dat files are generated for each function
(For example: dataIterative.dat and dataIterativeMagnified.dat)
    
    data*.dat = stores actual runtime up to 40 steps
    data*Magnified.dat = stores magnified values of actual runtime 
    (Only for time-complexity graph visualization)
    
    Note: in the case of dataIterativeMagnified.dat, the data is generated every 1000 steps up to the 50000th step.
    
Copy all the values from the Magnified.dat files (delete the last comma) and paste it in desmos.com. A scatter plot graph will be generated that shows the shape of the runtime against step-number curve.
    
By running "make time", and extracting the data from the magnified.dat files, this is the scatter plot that I got:

![desmos complexity](https://user-images.githubusercontent.com/114067350/203760893-b5481804-7e9c-451c-bc2f-414e4d579598.png)

In this case, Iterative = Blue,  Recursive = Red. Keep in mind that this is not a direct comparison of actual runtime values,
this is just to show how the runtime changes as steps increase:


By matching curves to the scatter plot of each method:

![desmos-time-complex](https://user-images.githubusercontent.com/114067350/203910421-890cf6ba-5d34-4824-91ea-b0c5d1ddde50.png)


We can conclude that the iterative method has O(n) complexity, as the runtime increases linearly with step number. 
While the recursive method has O(2^n) complexity, as the runtime increases exponentially with step number.

# Checking for space complexity:

In the main_b_space_*.c files are a "forever" loop using while(1). By running those files using spacei (iterative) and spacer (recursive), these files are executed 3 times with different input values (n = 50000 (top), n = 30000, n = 10000 (bottom)).
I get these processes in the task manager: 

![space-complexity multiple times](https://user-images.githubusercontent.com/114067350/204207340-58510cff-0120-4e2f-b5eb-0f6658b903a4.PNG)

We get 2 sets of files, one corresponding to the iterative method, and the other one the recursive method. with the aforementioned input values (n = 50000 (top of the set), n = 30000, n = 10000 (bottom of the set)), we get different memory values (in K/kilobytes)

We can see that, for the iterative method the memory usage does not change much going from n=10000 to n=50000, which shows that the iterative method has a space complexity of O(1)

For the recursive method, the memory usage increases linearly (for example, memory usage is tripled when n goes from 10000 to 30000)
Therefore, the recursive method has a space complexity of O(n).
