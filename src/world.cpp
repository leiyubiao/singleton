#include "world.h"
shared_ptr<World> World::world_ptr_ = nullptr;
shared_ptr<World> World::GetWorldPtr()
{
    if (world_ptr_ == nullptr)
    {
        world_ptr_ = shared_ptr<World>(new World);//  make_shared<World>(); FIXME:不能用make_shared<World>()否则会报错
                                                  // 两者区别：
        return world_ptr_;
    }
    return world_ptr_;
}

void World::Initial(const int data, shared_ptr<Agent> agent_ptr)
{
    data_ = data;
    agent_ptr_ = agent_ptr;
}