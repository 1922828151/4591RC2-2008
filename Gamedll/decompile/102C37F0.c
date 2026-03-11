/*
 * func-name: sub_102C37F0
 * func-address: 0x102c37f0
 * callers: 0x10060a80, 0x10063e00, 0x1022dc10, 0x1022dce0
 * callees: 0x1000eb6f, 0x102c9d50
 */

void __thiscall sub_102C37F0(_DWORD *this)
{
  void *v2; // eax
  _DWORD *v3; // esi

  *this = &SerializeObject::`vftable';
  v2 = (void *)this[9];
  v3 = this + 8;
  if ( v2 )
  {
    sub_1000EB6F(v2, this[10]);
    operator delete((void *)v3[1]);
  }
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  std::string::~string(this + 1);
}
