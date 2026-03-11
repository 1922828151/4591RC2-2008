/*
 * func-name: ?SetResizeCallback@GUISystem@@UAEXP6AXHH@Z@Z
 * func-address: 0x1006bc10
 * callers: none
 * callees: none
 */

void __thiscall GUISystem::SetResizeCallback(GUISystem *this, void (__cdecl *a2)(int, int))
{
  *((_DWORD *)this + 1) = a2;
}
