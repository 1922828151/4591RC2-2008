/*
 * func-name: sub_10188A70
 * func-address: 0x10188a70
 * callers: 0x10003b5c
 * callees: 0x1000d6f7
 */

int __thiscall sub_10188A70(_DWORD *this)
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
  return sub_1000D6F7((int)&v5, (int)this, v3, (int)this, v2);
}
