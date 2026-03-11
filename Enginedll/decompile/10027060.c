/*
 * func-name: sub_10027060
 * func-address: 0x10027060
 * callers: 0x1002c620, 0x1002c800, 0x1002c8e0, 0x1002e490
 * callees: 0x101a2500
 */

void __thiscall sub_10027060(int *this)
{
  int v2; // esi
  int i; // edi

  v2 = this[1];
  if ( v2 )
  {
    for ( i = this[2]; v2 != i; v2 += 32 )
      std::string::~string(v2);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
