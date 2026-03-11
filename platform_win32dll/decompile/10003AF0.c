/*
 * func-name: sub_10003AF0
 * func-address: 0x10003af0
 * callers: 0x10004070, 0x10004260
 * callees: 0x10019870
 */

void __thiscall sub_10003AF0(int *this)
{
  int v2; // esi
  int i; // edi

  v2 = this[1];
  if ( v2 )
  {
    for ( i = this[2]; v2 != i; v2 += 28 )
      std::string::~string(v2);
    operator delete((void *)this[1]);
  }
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
