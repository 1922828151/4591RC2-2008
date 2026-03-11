/*
 * func-name: ?PopPrefix@EngineLog@@QAEXXZ
 * func-address: 0x100e22f0
 * callers: 0x100e2400
 * callees: none
 */

void __thiscall EngineLog::PopPrefix(EngineLog *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _BYTE v5[28]; // [esp+4h] [ebp-28h] BYREF
  int v6; // [esp+28h] [ebp-4h]

  v2 = *((_DWORD *)this + 61);
  if ( v2 )
  {
    *((_DWORD *)this + 61) = v2 - 1;
    v3 = std::string::length((char *)this + 136);
    v4 = std::string::substr((char *)this + 136, v5, 0, v3 - *((_DWORD *)this + *((_DWORD *)this + 61) + 41));
    v6 = 0;
    std::string::operator=((char *)this + 136, v4);
    v6 = -1;
    std::string::~string(v5);
  }
}
