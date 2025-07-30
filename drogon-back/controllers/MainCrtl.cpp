#include "MainCrtl.hpp"

// Add definition of your processing function here
void MainCrtl::get(const HttpRequestPtr& req, 
    std::function<void (const HttpResponsePtr &)> &&callback, 
    int p1, std::string p2
)
{
    Json::Value ret;

    ret["p1"] = p1;
    ret["p2"] = p2;

    //auto resp = HttpResponse::newHttpViewResponse
    auto resp=HttpResponse::newHttpJsonResponse(ret);

    callback(resp);
}