/*
 * func-name: sub_1014BBC0
 * func-address: 0x1014bbc0
 * callers: 0x10010fb4
 * callees: 0x10005d4e, 0x1000b92e, 0x1000bd7a, 0x10016c7f, 0x1001aaf0
 */

int __thiscall sub_1014BBC0(_DWORD *this, int a2)
{
  void **v3; // eax
  char *v4; // ebx
  bool v5; // zf
  int v6; // edi
  int *v7; // ebp
  int v8; // ebx
  int v9; // ebp
  int result; // eax
  unsigned int v11; // edi
  bool v12; // cc
  int v13; // eax
  void (__cdecl *v14)(); // ebp
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // ebp
  int v21; // eax
  int v22; // [esp-8h] [ebp-28h]
  void *v23; // [esp-4h] [ebp-24h]
  int v24; // [esp+10h] [ebp-10h] BYREF
  unsigned int v25; // [esp+14h] [ebp-Ch]
  int v26; // [esp+18h] [ebp-8h] BYREF
  void *v27; // [esp+1Ch] [ebp-4h]

  if ( this[9] )
  {
    v3 = (void **)this[8];
    v4 = (char *)*v3;
    v5 = *v3 == v3;
    v6 = (int)(this + 7);
    v27 = *v3;
    if ( v5 )
      _invalid_parameter_noinfo();
    v7 = (int *)(v4 + 8);
    sub_1000BD7A(1);
    if ( v4 == (char *)this[8] )
      _invalid_parameter_noinfo();
    v5 = v4 == (char *)this[8];
    v24 = *v7;
    if ( v5 )
      _invalid_parameter_noinfo();
    v8 = this[5];
    v9 = sub_1001AAF0(v8, *(_DWORD *)(v8 + 4), (int)v7);
    sub_10016C7F(1);
    v23 = v27;
    *(_DWORD *)(v8 + 4) = v9;
    **(_DWORD **)(v9 + 4) = v9;
    sub_10005D4E((int)&v26, v6, v23);
    return v24;
  }
  else
  {
    do
    {
      v11 = this[11];
      v12 = (int)(v11 + 1) < this[10];
      v25 = v11;
      this[11] = v11 + 1;
      if ( !v12 )
        this[11] = 0;
      v13 = this[1];
      if ( v13 && v11 < (this[2] - v13) / 584 )
      {
        v14 = _invalid_parameter_noinfo;
      }
      else
      {
        v14 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      v15 = 584 * v11;
      v26 = 584 * v11;
      v5 = (unsigned __int8)sub_1000B92E() == 0;
      v16 = this[1];
      if ( v5 )
      {
        if ( !v16 || v11 >= (this[2] - v16) / 584 )
          v14();
        sub_1000BD7A(1);
        v17 = this[1];
        if ( !v17 || v11 >= (this[2] - v17) / 584 )
          v14();
        v18 = v15 + this[1];
        v19 = this[5];
        v22 = *(_DWORD *)(v19 + 4);
        v24 = v18;
        v20 = sub_1001AAF0(v19, v22, (int)&v24);
        sub_10016C7F(1);
        *(_DWORD *)(v19 + 4) = v20;
        **(_DWORD **)(v20 + 4) = v20;
        v21 = this[1];
        if ( !v21 || v25 >= (this[2] - v21) / 584 )
          _invalid_parameter_noinfo();
        result = v26 + this[1];
      }
      else
      {
        if ( !v16 || v11 >= (this[2] - v16) / 584 )
          v14();
        result = v15 + this[1];
      }
    }
    while ( !result );
  }
  return result;
}
