// server.cpp — part of unfiltered-ai-chat.

#include "unfilteredaichat/server.h"

#include <cstdio>

namespace unfilteredaichat {

Server::Server(const std::string& config_path)
    : config_path_(config_path) {}

void Server::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Server::run() {
    if (verbose_) std::fprintf(stderr, "[unfiltered-ai-chat] server: run\n");
    // core logic lives here
    return true;
}

}  // namespace unfilteredaichat
