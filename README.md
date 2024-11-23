# C++ Chrono

This repository contains a simple stopwatch app implemented in C++. The application is built and run inside a Docker container, as I preferred not to install a C++ compiler on my local machine.

## How to run

1.  Clone the repository `git clone https://github.com/pvictordev/cpp-chrono`.

2.  Open a terminal and navigate to the directory containing your `Dockerfile`.

3.  Run `docker build -t cpp-chrono` to built the docker image and tag the image with the name `cpp-chrono`.

4.  To execute your app inside the container run `docker run --rm cpp-chrono` which will run a new docker container, automaitically removes the container after it exists and the name of the docker image you built before `cpp-chrono`.
