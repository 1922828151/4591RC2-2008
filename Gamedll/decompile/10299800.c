/*
 * func-name: sub_10299800
 * func-address: 0x10299800
 * callers: 0x10015910
 * callees: 0x10002eff, 0x10012b7a, 0x102c9d50
 */

void __thiscall sub_10299800(char *this)
{
  void *v2; // eax
  void **v3; // esi

  v2 = (void *)*((_DWORD *)this + 19);
  v3 = (void **)(this + 72);
  if ( v2 )
  {
    sub_10002EFF(v2, *((_DWORD *)this + 20));
    operator delete(v3[1]);
  }
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  sub_10012B7A();
  std::wstring::~wstring(this);
}
