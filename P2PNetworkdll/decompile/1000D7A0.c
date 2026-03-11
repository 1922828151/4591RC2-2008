/*
 * func-name: sub_1000D7A0
 * func-address: 0x1000d7a0
 * callers: 0x1000a930, 0x1000a9d0, 0x1000c0c0
 * callees: 0x10009040, 0x1000e300
 */

void __thiscall sub_1000D7A0(_DWORD *this, char a2)
{
  int v3; // edi
  void *v4; // ebx
  _DWORD *v5; // esi
  int v6; // ebx
  Outpop::Utility::Ref_Object *v7; // ecx
  int v8; // ebx
  Outpop::Utility::Ref_Object *v9; // ecx
  _DWORD *v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h] BYREF
  void *v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+28h] [ebp-4h]

  v10 = this + 16;
  sub_1000E300(&v11, &a2);
  v3 = v11;
  v4 = (void *)this[18];
  if ( !v11 || (_DWORD *)v11 != this + 17 )
    invalid_parameter_noinfo();
  v5 = v12;
  if ( v12 != v4 )
  {
    v11 = 0;
    v13 = 0;
    if ( !v3 )
      invalid_parameter_noinfo();
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    v6 = v5[3];
    v7 = *(Outpop::Utility::Ref_Object **)(v6 + 8);
    if ( v7 )
      Outpop::Utility::Ref_Object::release(v7);
    *(_DWORD *)(v6 + 8) = 0;
    v11 = 0;
    v13 = 1;
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    v8 = v5[3];
    v9 = *(Outpop::Utility::Ref_Object **)(v8 + 20);
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    *(_DWORD *)(v8 + 20) = 0;
    v13 = -1;
    if ( v5 == *(_DWORD **)(v3 + 4) )
      invalid_parameter_noinfo();
    *(_BYTE *)(v5[3] + 24) = 0;
    sub_10009040(v10, &v11, v3, v5);
  }
}
