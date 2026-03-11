/*
 * func-name: ?SetCursor@GUISystem@@QAEXW4CURSOR_TYPE@@@Z
 * func-address: 0x100d5c90
 * callers: 0x100a9800
 * callees: 0x10097220, 0x101189f0
 */

int __thiscall GUISystem::SetCursor(_DWORD *this, int a2)
{
  struct RenderDevice *v3; // edi
  void (__thiscall **v4)(struct RenderDevice *, int, _DWORD, _DWORD); // esi
  int v5; // eax
  _BYTE v7[28]; // [esp+Ch] [ebp-28h] BYREF
  int v8; // [esp+30h] [ebp-4h]

  std::string::string(v7);
  v8 = 0;
  if ( a2 == 1 )
  {
    std::string::operator=(v7, "normal.cur");
  }
  else if ( a2 == 2 )
  {
    std::string::operator=(v7, "selpos.cur");
  }
  if ( FindMedia((int)v7, (int)"Textures", 0, 0) )
  {
    this[13] = a2;
    v3 = RenderDevice::Instance();
    v4 = (void (__thiscall **)(struct RenderDevice *, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 368);
    v5 = std::string::c_str(v7);
    (*v4)(v3, v5, 0, 0);
  }
  v8 = -1;
  return std::string::~string(v7);
}
