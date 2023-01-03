# Get the GCC preinstalled image from Docker Hub
FROM gcc:latest

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY ./src /usr/src/FibCalc

# Specify the working directory
WORKDIR /usr/src/FibCalc

# Use GCC to compile the FibCalc.cpp source file
RUN g++ -o FibCalc FibCalc.cpp

# Run the program output from the previous step
CMD ["./FibCalc"]