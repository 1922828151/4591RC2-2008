/*
 * func-name: sub_101AD980
 * func-address: 0x101ad980
 * callers: 0x1000185c
 * callees: 0x10002a6d
 */

int __thiscall sub_101AD980(_DWORD *this)
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
  return sub_10002A6D((int)&v5, (int)this, v3, (int)this, v2);
}
