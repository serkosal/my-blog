#include <drogon/drogon.h>
#include <drogon/HttpTypes.h>
#include <drogon/HttpController.h>

using namespace drogon;

int main() {

    //Set HTTP listener address and port
    // drogon::app().addListener("0.0.0.0", 5555);

    //Load config file
    app().loadConfigFile("./config.yaml");

    app().setCustom404Page(
        HttpResponse::newHttpViewResponse("html404.csp")
    );


    //Run HTTP framework, the method will block in the internal event loop
    drogon::app().run();
    return 0;
}
