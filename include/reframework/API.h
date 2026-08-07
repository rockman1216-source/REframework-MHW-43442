#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace reframework {

struct LuaState;

// Hook entry point called when the game initializes
void OnInit();

// Called every frame
void OnFrame();

// Lua scripting bridge
bool LoadScript(const std::string& path);
bool ExecuteScript(const std::string& code);

// Component / GameObject query helpers
uintptr_t FindGameObject(const std::wstring& name);
uintptr_t GetComponent(uintptr_t gameObject, const std::wstring& type);

} // namespace reframework