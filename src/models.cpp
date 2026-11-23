// models.cpp — part of unfiltered-ai-chat.

#include "unfilteredaichat/models.h"

#include <cstdio>

namespace unfilteredaichat {

Models::Models(const std::string& config_path)
    : config_path_(config_path) {}

void Models::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Models::run() {
    if (verbose_) std::fprintf(stderr, "[unfiltered-ai-chat] models: run\n");
    // core logic lives here
    return true;
}

}  // namespace unfilteredaichat
