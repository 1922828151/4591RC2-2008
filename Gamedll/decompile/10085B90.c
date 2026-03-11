/*
 * func-name: sub_10085B90
 * func-address: 0x10085b90
 * callers: 0x100074e6
 * callees: 0x10011b58
 */

int __thiscall sub_10085B90(_DWORD *this)
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
  return sub_10011B58((int)&v5, (int)this, v3, (int)this, v2);
}
