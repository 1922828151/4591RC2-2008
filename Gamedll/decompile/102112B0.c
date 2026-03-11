/*
 * func-name: sub_102112B0
 * func-address: 0x102112b0
 * callers: 0x1001aa5a
 * callees: 0x10012b52
 */

int __thiscall sub_102112B0(_DWORD *this)
{
  void *v2; // edi
  void *v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = (void *)this[2];
  if ( this[1] > (unsigned int)v2 )
    _invalid_parameter_noinfo();
  v3 = (void *)this[1];
  if ( (unsigned int)v3 > this[2] )
    _invalid_parameter_noinfo();
  return sub_10012B52((int)&v5, (int)this, v3, (int)this, v2);
}
