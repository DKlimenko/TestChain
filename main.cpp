#include "Blockchain.h"
#include <chrono>
#include <ctime> 

void printStartTime()
{
    auto start = std::chrono::system_clock::now();
    std::time_t start_time = std::chrono::system_clock::to_time_t(start);
    std::cout << "start computation at " << std::ctime(&start_time);

}

void printEndTime()
{
    auto end = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << "finished computation at " << std::ctime(&end_time) << "\n";
}

int main()
{
    Blockchain bChain = Blockchain();
    
    
    cout << "Mining block 1..." << endl;
    printStartTime();
    bChain.AddBlock(Block(1, "Block 1 Data"));
    printEndTime();

    printStartTime();
    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));
    printEndTime();

    printStartTime();
    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));
    printEndTime();

    return 0;
}
