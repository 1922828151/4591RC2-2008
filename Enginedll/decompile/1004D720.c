/*
 * func-name: ?RefreshOptions@Actor@@UAEXXZ
 * func-address: 0x1004d720
 * callers: none
 * callees: none
 */

void __thiscall Actor::RefreshOptions(Actor *this)
{
  void (__thiscall *v2)(Actor *, _BYTE *, _DWORD); // edx
  _BYTE v3[28]; // [esp+8h] [ebp-28h] BYREF
  int v4; // [esp+2Ch] [ebp-4h]

  std::string::string(v3, &unk_101C0009);
  v2 = *(void (__thiscall **)(Actor *, _BYTE *, _DWORD))(*(_DWORD *)this + 8);
  v4 = 0;
  v2(this, v3, 0);
  v4 = -1;
  std::string::~string(v3);
}
