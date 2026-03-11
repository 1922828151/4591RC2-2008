/*
 * func-name: sub_101889D0
 * func-address: 0x101889d0
 * callers: 0x1000a10a
 * callees: 0x100035f3
 */

int __thiscall sub_101889D0(_DWORD *this)
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
  return sub_100035F3((int)&v5, (int)this, v3, (int)this, v2);
}
