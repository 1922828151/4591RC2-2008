/*
 * func-name: sub_101AD9D0
 * func-address: 0x101ad9d0
 * callers: 0x10017099
 * callees: 0x10003913
 */

int __thiscall sub_101AD9D0(_DWORD *this)
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
  return sub_10003913((int)&v5, (int)this, v3, (int)this, v2);
}
