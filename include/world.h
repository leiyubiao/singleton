#ifndef WORLD_H_
#define WORLD_H_
#include "agent.h"
#include<vector>
#include<memory>
#include<iostream>
using namespace std;

class World
{
    public:
    static shared_ptr<World> GetWorldPtr();
       ~World(){} 
        World(){};

    private:

     
        static shared_ptr<World> world_ptr_;

        
        shared_ptr<Agent> agent_ptr_;
    public:
        void Initial(const int data, shared_ptr<Agent> agent_ptr);
        int data_;
};


#endif