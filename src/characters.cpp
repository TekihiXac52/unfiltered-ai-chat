// characters.cpp — part of unfiltered-ai-chat.

#include "unfilteredaichat/characters.h"

#include <cstdio>

namespace unfilteredaichat {

Characters::Characters(const std::string& config_path)
    : config_path_(config_path) {}

void Characters::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Characters::run() {
    if (verbose_) std::fprintf(stderr, "[unfiltered-ai-chat] characters: run\n");
    // core logic lives here
    return true;
}

}  // namespace unfilteredaichat
