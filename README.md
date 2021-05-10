# singleton
解决以下两个问题：
1. 类world与agent相互引用的问题。
2. 单例模式中使用shared_ptr导致构造函数没有办法私有化的问题。

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
