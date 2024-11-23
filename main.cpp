#include <iostream>
#include <chrono>
#include <thread>

class Stopwatch {
private:
    std::chrono::time_point<std::chrono::steady_clock> startTime;
    std::chrono::duration<double> elapsedTime;
    bool running;

public:
    Stopwatch() : elapsedTime(std::chrono::seconds(0)), running(false) {}

    void start() {
        if (running) {
            std::cout << "Stopwatch is already running!\n";
            return;
        }
        running = true;
        startTime = std::chrono::steady_clock::now();
        std::cout << "Stopwatch started.\n";
    }

    void stop() {
        if (!running) {
            std::cout << "Stopwatch is not running!\n";
            return;
        }
        auto now = std::chrono::steady_clock::now();
        elapsedTime += now - startTime;
        running = false;
        std::cout << "Stopwatch stopped.\n";
    }

    void reset() {
        elapsedTime = std::chrono::seconds(0);
        running = false;
        std::cout << "Stopwatch reset.\n";
    }

    void display() const {
        std::cout << "Elapsed time: " << elapsedTime.count() << " seconds.\n";
    }
};

int main() {
    Stopwatch stopwatch;
    int choice;

    while (true) {
        std::cout << "\n=== Chrono Stopwatch ===\n";
        std::cout << "1. Start\n";
        std::cout << "2. Stop\n";
        std::cout << "3. Display Time\n";
        std::cout << "4. Reset\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            stopwatch.start();
            break;
        case 2:
            stopwatch.stop();
            break;
        case 3:
            stopwatch.display();
            break;
        case 4:
            stopwatch.reset();
            break;
        case 5:
            std::cout << "Exiting Chrono. Goodbye!\n";
            return 0;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}
