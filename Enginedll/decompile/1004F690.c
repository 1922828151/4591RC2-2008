/*
 * func-name: ?AddToExcludeList@Actor@@QAEXPBD@Z
 * func-address: 0x1004f690
 * callers: none
 * callees: 0x100116a0, 0x1004e980
 */

void __thiscall Actor::AddToExcludeList(Actor *this, char *a2)
{
  void *v3; // eax
  _BYTE v4[28]; // [esp+8h] [ebp-28h] BYREF
  int v5; // [esp+2Ch] [ebp-4h]

  if ( !Actor::ExcludeListContains(this, a2) )
  {
    v3 = (void *)std::string::string(v4, a2);
    v5 = 0;
    sub_100116A0((_DWORD *)this + 84, v3);
    v5 = -1;
    std::string::~string(v4);
  }
}
