#include<iostream>
#include<memory>
#include "world.h"
//#include "agent.h"
using namespace std;

int main(int argc, char** argv)
{
    shared_ptr<World> my_world = World::GetWorldPtr();
    shared_ptr<Agent> my_agent;
    my_agent = make_shared<Agent>(2);
    my_world->Initial(1,my_agent);
    cout<<"my_world.data_ = "<<my_world->data_<<endl;
    cout<<my_agent->data_<<endl;
    my_agent->AgentTest(my_world);
    return 0;
}