/*
 * func-name: sub_10162110
 * func-address: 0x10162110
 * callers: 0x10016784
 * callees: 0x10001e7e, 0x100069bf
 */

int __thiscall sub_10162110(_DWORD *this, char a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  void *v5; // esi
  _DWORD *v6; // ebp
  int v7; // esi
  int v9; // [esp+10h] [ebp-8h] BYREF
  void *v10; // [esp+14h] [ebp-4h]

  sub_10001E7E((int)&v9, (int)&a2);
  v3 = v9;
  v4 = this + 2;
  v5 = (void *)this[3];
  if ( !v9 || (_DWORD *)v9 != v4 )
    _invalid_parameter_noinfo();
  v6 = v10;
  if ( v10 == v5 )
    return 0;
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v6 == *(_DWORD **)(v3 + 4) )
    _invalid_parameter_noinfo();
  v7 = v6[3];
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 28))(v7);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  sub_100069BF((int)&v9, v3, v6);
  return v7;
}
