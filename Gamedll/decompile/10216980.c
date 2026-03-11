/*
 * func-name: sub_10216980
 * func-address: 0x10216980
 * callers: 0x1001a082
 * callees: 0x10013d5e
 */

int __thiscall sub_10216980(_DWORD *this)
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
  return sub_10013D5E((int)&v5, (int)this, v3, (int)this, v2);
}
