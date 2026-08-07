#pragma once
#include <cstdint>

namespace reframework {

class Hooks {
public:
    static bool Install();
    static void Uninstall();

private:
    static bool HookPresent();
    static bool HookReset();
    static bool HookSwapChain();
};

} // namespace reframework