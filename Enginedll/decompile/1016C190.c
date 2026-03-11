/*
 * func-name: sub_1016C190
 * func-address: 0x1016c190
 * callers: 0x100d5f50
 * callees: 0x1000b770, 0x1016c120, 0x1016cfe0, 0x101a2500
 */

void __thiscall sub_1016C190(_DWORD **this)
{
  _DWORD **v1; // ebp
  int v2; // edi
  _DWORD **v3; // esi
  _DWORD *v4; // ebx
  void *v5; // ebx
  _DWORD **v6; // [esp+10h] [ebp-10h] BYREF
  int v7; // [esp+14h] [ebp-Ch]
  char v8[8]; // [esp+18h] [ebp-8h] BYREF

  v1 = this + 1;
  v2 = *this[2];
  v3 = this + 1;
  v6 = this + 1;
  v7 = v2;
  while ( 1 )
  {
    v4 = v1[1];
    if ( !v3 || v3 != v1 )
      invalid_parameter_noinfo();
    if ( (_DWORD *)v2 == v4 )
      break;
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( (_DWORD *)v2 == v3[1] )
      invalid_parameter_noinfo();
    if ( GSeconds - *(float *)(*(_DWORD *)(v2 + 40) + 4) <= 10.0 )
    {
      sub_1000B770(&v6);
      v2 = v7;
      v3 = v6;
    }
    else
    {
      sub_1000B770(&v6);
      if ( !v3 )
        invalid_parameter_noinfo();
      if ( (_DWORD *)v2 == v3[1] )
        invalid_parameter_noinfo();
      v5 = *(void **)(v2 + 40);
      if ( v5 )
      {
        sub_1016C120(*(void ****)(v2 + 40));
        operator delete(v5);
      }
      sub_1016CFE0(v8, v3, v2);
      v2 = v7;
      v3 = v6;
    }
  }
}
