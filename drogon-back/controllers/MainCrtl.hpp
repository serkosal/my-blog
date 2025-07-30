#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class MainCrtl : public drogon::HttpController<MainCrtl>
{
  public:
    METHOD_LIST_BEGIN
    // use METHOD_ADD to add your custom processing function here;
    METHOD_ADD(MainCrtl::get, "/?p1={age}&p2={name}", Get); 
   

    METHOD_LIST_END
    // your declaration of processing function maybe like this:
    void get(
      const HttpRequestPtr& req, 
      std::function<void (const HttpResponsePtr &)> &&callback, 
      int p1, std::string p2
    );
    // void your_method_name(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback, double p1, int p2) const;
};
