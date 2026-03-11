/*
 * func-name: sub_1014BAB0
 * func-address: 0x1014bab0
 * callers: 0x100186ec
 * callees: 0x1000b92e, 0x100158a2, 0x10016c7f, 0x1001aaf0, 0x102c9d50
 */

void __thiscall sub_1014BAB0(int this)
{
  int v1; // edi
  _DWORD **v2; // esi
  int v3; // ebx
  _DWORD **v4; // ebp
  int v5; // ebx
  int v6; // ebp
  _DWORD **v7; // ebx
  int v8; // [esp+0h] [ebp-24h]
  int v9; // [esp+4h] [ebp-20h]
  int v11; // [esp+14h] [ebp-10h]

  v1 = this;
  v2 = **(_DWORD ****)(this + 20);
  v3 = this + 16;
  v11 = this + 16;
  while ( 1 )
  {
    v4 = *(_DWORD ***)(v1 + 20);
    if ( !v3 || v3 != v1 + 16 )
      _invalid_parameter_noinfo();
    if ( v2 == v4 )
      break;
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v2 == *(_DWORD ***)(v3 + 4) )
      _invalid_parameter_noinfo();
    sub_100158A2(v8, v9);
    if ( v2 == *(_DWORD ***)(v3 + 4) )
      _invalid_parameter_noinfo();
    if ( (unsigned __int8)sub_1000B92E() )
    {
      if ( v2 == *(_DWORD ***)(v3 + 4) )
        _invalid_parameter_noinfo();
      v2 = (_DWORD **)*v2;
    }
    else
    {
      if ( v2 == *(_DWORD ***)(v3 + 4) )
        _invalid_parameter_noinfo();
      v5 = *(_DWORD *)(v1 + 32);
      v6 = sub_1001AAF0(v5, *(_DWORD *)(v5 + 4), (int)(v2 + 2));
      sub_10016C7F(1);
      *(_DWORD *)(v5 + 4) = v6;
      **(_DWORD **)(v6 + 4) = v6;
      if ( v2 == *(_DWORD ***)(v11 + 4) )
        _invalid_parameter_noinfo();
      v7 = (_DWORD **)*v2;
      if ( v2 != *(_DWORD ***)(this + 20) )
      {
        *v2[1] = v7;
        (*v2)[1] = v2[1];
        operator delete(v2);
        --*(_DWORD *)(this + 24);
      }
      v1 = this;
      v2 = v7;
      v3 = v11;
    }
  }
}
