# C++ Algoritms

Repository containing common algorithms implemented in C++. The application is built and run inside a Docker container, as I preferred not to install a C++ compiler on my local machine.

## How to run

1.  Clone the repository `git clone https://github.com/pvictordev/cpp-algorithms`.

2.  Open a terminal and navigate to the directory containing your `Dockerfile`.

3.  Run `docker build -t cpp-algorithms` to built the docker image and tag the image with the name `cpp-algorithms`.

4.  To execute your app inside the container run `docker run --rm cpp-algorithms` which will run a new docker container, automaitically removes the container after it exists and the name of the docker image you built before `cpp-algorithms`.
