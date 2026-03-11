/*
 * func-name: sub_100F15F0
 * func-address: 0x100f15f0
 * callers: 0x10016b58
 * callees: 0x1000f308
 */

void __thiscall sub_100F15F0(_DWORD *this)
{
  int v2; // eax

  v2 = this[28];
  if ( v2 != -1 )
    sub_1000F308(v2);
  std::string::~string(this + 21);
  std::string::~string(this + 14);
  std::string::~string(this + 7);
  std::string::~string(this);
}
