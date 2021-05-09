#include "world.h"
shared_ptr<World> World::world_ptr_ = nullptr;
shared_ptr<World> World::GetWorldPtr()
{
    if (world_ptr_ == nullptr)
    {
        world_ptr_ = make_shared<World>();
        return world_ptr_;
    }
    return world_ptr_;
}

void World::Initial(const int data, shared_ptr<Agent> agent_ptr)
{
    data_ = data;
    agent_ptr_ = agent_ptr;
}