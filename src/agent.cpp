#include "agent.h"
#include "world.h"

Agent::Agent(const int data)
{
    data_ = data;
}

void Agent::AgentTest(shared_ptr<World> my_world)
{
   
    //my_world = World::GetWorldPtr();
    cout<<my_world->data_;
}

