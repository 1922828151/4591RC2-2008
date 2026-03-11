/*
 * func-name: sub_101A8E80
 * func-address: 0x101a8e80
 * callers: 0x100049a3
 * callees: 0x10003a9e
 */

int __thiscall sub_101A8E80(_DWORD *this)
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
  return sub_10003A9E((int)&v5, (int)this, v3, (int)this, v2);
}
