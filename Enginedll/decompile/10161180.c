/*
 * func-name: sub_10161180
 * func-address: 0x10161180
 * callers: 0x1005e940, 0x10161a90, 0x10162f00
 * callees: 0x101a2500
 */

void __thiscall sub_10161180(int this)
{
  std::string::~string(this + 16);
  if ( *(_DWORD *)(this + 4) )
    operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
