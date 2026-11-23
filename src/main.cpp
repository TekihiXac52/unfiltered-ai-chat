// main.cpp — entry point. Wires config and subsystems together.

#include "unfilteredaichat/settings.h"
#include "unfilteredaichat/server.h"
#include "unfilteredaichat/models.h"
#include "unfilteredaichat/characters.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    unfilteredaichat::Settings settings = unfilteredaichat::Settings::load_default();
    unfilteredaichat::Server server(settings.store_path);
    unfilteredaichat::Models models(settings.store_path);
    unfilteredaichat::Characters characters(settings.store_path);
    std::fprintf(stderr, "[unfiltered-ai-chat] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
