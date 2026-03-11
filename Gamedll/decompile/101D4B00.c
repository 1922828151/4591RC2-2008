/*
 * func-name: sub_101D4B00
 * func-address: 0x101d4b00
 * callers: 0x1001933f
 * callees: 0x10001e7e, 0x100069bf
 */

char __thiscall sub_101D4B00(_DWORD *this, char a2)
{
  void *v3; // ebx
  _DWORD *v4; // eax
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h] BYREF
  void *v8; // [esp+10h] [ebp-4h]

  sub_10001E7E((int)&v7, (int)&a2);
  v3 = (void *)this[4];
  v4 = this + 3;
  v5 = v7;
  if ( !v7 || (_DWORD *)v7 != v4 )
    _invalid_parameter_noinfo();
  if ( v8 == v3 )
    return 0;
  sub_100069BF((int)&v7, v5, v8);
  return 1;
}
