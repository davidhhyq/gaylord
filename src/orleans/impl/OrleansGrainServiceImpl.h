#pragma once

#include <orleans/core/orleans_service.gayrpc.h>
#include <orleans/core/ServiceOrleansRuntime.h>

namespace orleans { namespace impl {
    
    using namespace orleans::core;

    // 节点通信服务
    class OrleansGrainServiceImpl : public orleans::core::OrleansServiceService
    {
    public:
        OrleansGrainServiceImpl(gayrpc::core::ServiceContext context, ServiceOrleansRuntime::Ptr serviceOrleansRuntime)
            :
            orleans::core::OrleansServiceService(context),
            mServiceOrleansRuntime(serviceOrleansRuntime)
        {}

    private:
        // 处理Actor/Grain的RPC请求
        virtual void Request(const orleans::core::OrleansRequest& request,
            const orleans::core::OrleansServiceService::RequestReply::PTR& replyObj,
            InterceptorContextType context)
        {
            gayrpc::core::RpcTypeHandleManager::PTR grain = mServiceOrleansRuntime->findOrCreateServiceGrain(
                request.grain_type(),
                request.grain_unique_name());
            if (!grain)
            {
                //TODO
                return;
            }
            context[OrleansReplyObjKey] = replyObj;
            grain->handleRpcMsg(request.meta(), request.body(), std::move(context));
        }

        // 处理释放Grain的请求
        virtual void Release(const orleans::core::OrleansReleaseRequest& request,
            const orleans::core::OrleansServiceService::ReleaseReply::PTR& replyObj,
            InterceptorContextType)
        {
            mServiceOrleansRuntime->releaseGrain(request.grain_unique_name());
        }

    private:
        ServiceOrleansRuntime::Ptr  mServiceOrleansRuntime;
    };

} }