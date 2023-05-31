// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/component_information_server/component_information_server.proto)

#include "component_information_server/component_information_server.grpc.pb.h"
#include "plugins/component_information_server/component_information_server.h"

#include "mavsdk.h"
#include "lazy_plugin.h"
#include "log.h"
#include <atomic>
#include <cmath>
#include <future>
#include <limits>
#include <memory>
#include <sstream>
#include <vector>

namespace mavsdk {
namespace mavsdk_server {

template<typename ComponentInformationServer = ComponentInformationServer, typename LazyPlugin = LazyPlugin<ComponentInformationServer>>
class ComponentInformationServerServiceImpl final : public rpc::component_information_server::ComponentInformationServerService::Service {
public:
    ComponentInformationServerServiceImpl(LazyPlugin& lazy_plugin) : _lazy_plugin(lazy_plugin) {}


    template<typename ResponseType>
    void fillResponseWithResult(ResponseType* response, mavsdk::ComponentInformationServer::Result& result) const
    {
        auto rpc_result = translateToRpcResult(result);

        auto* rpc_component_information_server_result = new rpc::component_information_server::ComponentInformationServerResult();
        rpc_component_information_server_result->set_result(rpc_result);
        std::stringstream ss;
        ss << result;
        rpc_component_information_server_result->set_result_str(ss.str());

        response->set_allocated_component_information_server_result(rpc_component_information_server_result);
    }




    static std::unique_ptr<rpc::component_information_server::FloatParam> translateToRpcFloatParam(const mavsdk::ComponentInformationServer::FloatParam &float_param)
    {
        auto rpc_obj = std::make_unique<rpc::component_information_server::FloatParam>();


            
        rpc_obj->set_name(float_param.name);
            
        
            
        rpc_obj->set_short_description(float_param.short_description);
            
        
            
        rpc_obj->set_long_description(float_param.long_description);
            
        
            
        rpc_obj->set_unit(float_param.unit);
            
        
            
        rpc_obj->set_decimal_places(float_param.decimal_places);
            
        
            
        rpc_obj->set_start_value(float_param.start_value);
            
        
            
        rpc_obj->set_default_value(float_param.default_value);
            
        
            
        rpc_obj->set_min_value(float_param.min_value);
            
        
            
        rpc_obj->set_max_value(float_param.max_value);
            
        

        return rpc_obj;
    }

    static mavsdk::ComponentInformationServer::FloatParam translateFromRpcFloatParam(const rpc::component_information_server::FloatParam& float_param)
    {
        mavsdk::ComponentInformationServer::FloatParam obj;


            
        obj.name = float_param.name();
            
        
            
        obj.short_description = float_param.short_description();
            
        
            
        obj.long_description = float_param.long_description();
            
        
            
        obj.unit = float_param.unit();
            
        
            
        obj.decimal_places = float_param.decimal_places();
            
        
            
        obj.start_value = float_param.start_value();
            
        
            
        obj.default_value = float_param.default_value();
            
        
            
        obj.min_value = float_param.min_value();
            
        
            
        obj.max_value = float_param.max_value();
            
        
        return obj;
    }





    static std::unique_ptr<rpc::component_information_server::FloatParamUpdate> translateToRpcFloatParamUpdate(const mavsdk::ComponentInformationServer::FloatParamUpdate &float_param_update)
    {
        auto rpc_obj = std::make_unique<rpc::component_information_server::FloatParamUpdate>();


            
        rpc_obj->set_name(float_param_update.name);
            
        
            
        rpc_obj->set_value(float_param_update.value);
            
        

        return rpc_obj;
    }

    static mavsdk::ComponentInformationServer::FloatParamUpdate translateFromRpcFloatParamUpdate(const rpc::component_information_server::FloatParamUpdate& float_param_update)
    {
        mavsdk::ComponentInformationServer::FloatParamUpdate obj;


            
        obj.name = float_param_update.name();
            
        
            
        obj.value = float_param_update.value();
            
        
        return obj;
    }




    static rpc::component_information_server::ComponentInformationServerResult::Result translateToRpcResult(const mavsdk::ComponentInformationServer::Result& result)
    {
        switch (result) {
            default:
                LogErr() << "Unknown result enum value: " << static_cast<int>(result);
            // FALLTHROUGH
            case mavsdk::ComponentInformationServer::Result::Unknown:
                return rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_UNKNOWN;
            case mavsdk::ComponentInformationServer::Result::Success:
                return rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_SUCCESS;
            case mavsdk::ComponentInformationServer::Result::DuplicateParam:
                return rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_DUPLICATE_PARAM;
            case mavsdk::ComponentInformationServer::Result::InvalidParamStartValue:
                return rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_INVALID_PARAM_START_VALUE;
            case mavsdk::ComponentInformationServer::Result::InvalidParamDefaultValue:
                return rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_INVALID_PARAM_DEFAULT_VALUE;
            case mavsdk::ComponentInformationServer::Result::InvalidParamName:
                return rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_INVALID_PARAM_NAME;
            case mavsdk::ComponentInformationServer::Result::NoSystem:
                return rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_NO_SYSTEM;
        }
    }

    static mavsdk::ComponentInformationServer::Result translateFromRpcResult(const rpc::component_information_server::ComponentInformationServerResult::Result result)
    {
        switch (result) {
            default:
                LogErr() << "Unknown result enum value: " << static_cast<int>(result);
            // FALLTHROUGH
            case rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_UNKNOWN:
                return mavsdk::ComponentInformationServer::Result::Unknown;
            case rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_SUCCESS:
                return mavsdk::ComponentInformationServer::Result::Success;
            case rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_DUPLICATE_PARAM:
                return mavsdk::ComponentInformationServer::Result::DuplicateParam;
            case rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_INVALID_PARAM_START_VALUE:
                return mavsdk::ComponentInformationServer::Result::InvalidParamStartValue;
            case rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_INVALID_PARAM_DEFAULT_VALUE:
                return mavsdk::ComponentInformationServer::Result::InvalidParamDefaultValue;
            case rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_INVALID_PARAM_NAME:
                return mavsdk::ComponentInformationServer::Result::InvalidParamName;
            case rpc::component_information_server::ComponentInformationServerResult_Result_RESULT_NO_SYSTEM:
                return mavsdk::ComponentInformationServer::Result::NoSystem;
        }
    }




    grpc::Status ProvideFloatParam(
        grpc::ServerContext* /* context */,
        const rpc::component_information_server::ProvideFloatParamRequest* request,
        rpc::component_information_server::ProvideFloatParamResponse* response) override
    {
        if (_lazy_plugin.maybe_plugin() == nullptr) {
            
            if (response != nullptr) {
                auto result = mavsdk::ComponentInformationServer::Result::NoSystem;
                fillResponseWithResult(response, result);
            }
            
            return grpc::Status::OK;
        }

        if (request == nullptr) {
            LogWarn() << "ProvideFloatParam sent with a null request! Ignoring...";
            return grpc::Status::OK;
        }
            
        
        auto result = _lazy_plugin.maybe_plugin()->provide_float_param(translateFromRpcFloatParam(request->param()));
        

        
        if (response != nullptr) {
            fillResponseWithResult(response, result);
        }
        

        return grpc::Status::OK;
    }

    grpc::Status SubscribeFloatParam(grpc::ServerContext* /* context */, const mavsdk::rpc::component_information_server::SubscribeFloatParamRequest* /* request */, grpc::ServerWriter<rpc::component_information_server::FloatParamResponse>* writer) override
    {
        if (_lazy_plugin.maybe_plugin() == nullptr) {
            
            return grpc::Status::OK;
        }

        auto stream_closed_promise = std::make_shared<std::promise<void>>();
        auto stream_closed_future = stream_closed_promise->get_future();
        register_stream_stop_promise(stream_closed_promise);

        auto is_finished = std::make_shared<bool>(false);
        auto subscribe_mutex = std::make_shared<std::mutex>();

        _lazy_plugin.maybe_plugin()->subscribe_float_param(
            [this, &writer, &stream_closed_promise, is_finished, subscribe_mutex](const mavsdk::ComponentInformationServer::FloatParamUpdate float_param) {

            rpc::component_information_server::FloatParamResponse rpc_response;
        
            rpc_response.set_allocated_param_update(translateToRpcFloatParamUpdate(float_param).release());
        

        

            std::unique_lock<std::mutex> lock(*subscribe_mutex);
            if (!*is_finished && !writer->Write(rpc_response)) {
                
                _lazy_plugin.maybe_plugin()->subscribe_float_param(nullptr);
                
                *is_finished = true;
                unregister_stream_stop_promise(stream_closed_promise);
                stream_closed_promise->set_value();
            }
        });

        stream_closed_future.wait();
        std::unique_lock<std::mutex> lock(*subscribe_mutex);
        *is_finished = true;

        return grpc::Status::OK;
    }


    void stop() {
        _stopped.store(true);
        for (auto& prom : _stream_stop_promises) {
            if (auto handle = prom.lock()) {
                handle->set_value();
            }
        }
    }

private:
    void register_stream_stop_promise(std::weak_ptr<std::promise<void>> prom) {
        // If we have already stopped, set promise immediately and don't add it to list.
        if (_stopped.load()) {
            if (auto handle = prom.lock()) {
                handle->set_value();
            }
        } else {
            _stream_stop_promises.push_back(prom);
        }
    }

    void unregister_stream_stop_promise(std::shared_ptr<std::promise<void>> prom) {
        for (auto it = _stream_stop_promises.begin(); it != _stream_stop_promises.end(); /* ++it */) {
            if (it->lock() == prom) {
                it = _stream_stop_promises.erase(it);
            } else {
                ++it;
            }
        }
    }

    LazyPlugin& _lazy_plugin;
    std::atomic<bool> _stopped{false};
    std::vector<std::weak_ptr<std::promise<void>>> _stream_stop_promises {};
};

} // namespace mavsdk_server
} // namespace mavsdk