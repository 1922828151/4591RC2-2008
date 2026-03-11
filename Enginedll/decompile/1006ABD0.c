/*
 * func-name: ?SetMessageBoxWindow@GUISystem@@QAEXPAVCGUIWindow@@@Z
 * func-address: 0x1006abd0
 * callers: none
 * callees: none
 */

void __thiscall GUISystem::SetMessageBoxWindow(GUISystem *this, struct CGUIWindow *a2)
{
  *((_DWORD *)this + 3) = a2;
}
