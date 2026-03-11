/*
 * func-name: ?SetCamera@SubareaManager@@QAEXPAVCamera@@@Z
 * func-address: 0x100369c0
 * callers: none
 * callees: none
 */

void __thiscall SubareaManager::SetCamera(SubareaManager *this, struct Camera *a2)
{
  *((_DWORD *)this + 6) = a2;
}
