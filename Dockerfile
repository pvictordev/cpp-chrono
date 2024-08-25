# Use an official GCC image as the base (includes G++)
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /

# Copy the current directory contents into the container at /usr/src/myapp
COPY . .

# Compile the C++ program
RUN g++ -o main main.cpp

# Run the executable
CMD ["./main"]
