#ifndef AGENT_H_
#define AGENT_H_
#include<memory>
//#include "world.h"

//extern class World;
using namespace std;
class World;

class Agent
{
public:
    Agent(const int data);
    ~Agent() {}

public:
    int data_;
    void AgentTest( shared_ptr<World> my_world);
    void AgentTest();
};

#endif