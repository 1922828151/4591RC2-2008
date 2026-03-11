/*
 * func-name: sub_100117B0
 * func-address: 0x100117b0
 * callers: none
 * callees: 0x10018c31
 */

char __thiscall sub_100117B0(void *this, int a2)
{
  _BYTE v3[28]; // [esp+8h] [ebp-2Ch] BYREF
  int v4; // [esp+30h] [ebp-4h]

  (*(void (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 12))(this, v3, a2);
  v4 = 0;
  if ( (unsigned __int8)std::operator==<char>(v3, "true") )
  {
    v4 = -1;
    std::string::~string(v3);
    return 1;
  }
  else
  {
    v4 = -1;
    std::string::~string(v3);
    return 0;
  }
}
