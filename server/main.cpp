#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <iostream>

namespace beast = boost::beast;
namespace http = beast::http;
namespace websocket = beast::websocket;
using tcp = boost::asio::ip::tcp;
int main ()

{
    std::cout << "hello" << std::endl;
    return 0;
}