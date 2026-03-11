/*
 * func-name: sub_1024D490
 * func-address: 0x1024d490
 * callers: none
 * callees: 0x1000c671, 0x100165b8, 0x1001971d, 0x102c9d50
 */

void __thiscall sub_1024D490(_DWORD *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  void *v5; // esi
  _DWORD *v6; // ebx
  int v7; // esi
  bool v8; // zf
  int v9; // [esp+0h] [ebp-28h]
  int v10; // [esp+4h] [ebp-24h]
  int v11; // [esp+14h] [ebp-14h] BYREF
  void *v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+24h] [ebp-4h]

  sub_1000C671((int)&v11, (int)&a2);
  v3 = v11;
  v4 = this + 6;
  v5 = (void *)this[7];
  if ( !v11 || (_DWORD *)v11 != v4 )
    _invalid_parameter_noinfo();
  v6 = v12;
  if ( v12 != v5 )
  {
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v6 == *(_DWORD **)(v3 + 4) )
      _invalid_parameter_noinfo();
    a2 = v6[3];
    v7 = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 36);
    v13 = 0;
    *(_BYTE *)(v7 + 8) = 0;
    sub_100165B8((int)&v11, v3, v6);
    v8 = (*(_DWORD *)(v7 + 36))-- == 1;
    v13 = -1;
    if ( v8 )
    {
      sub_1001971D(v9, v10);
      operator delete((void *)v7);
    }
  }
}
