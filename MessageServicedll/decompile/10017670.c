/*
 * func-name: ?and_group@Message@Outpop@@YA?AVGroup@12@AAV312@0@Z
 * func-address: 0x10017670
 * callers: none
 * callees: 0x10015df0, 0x100174e0, 0x100175f0, 0x10017b10, 0x10018470
 */

Outpop::Message::Group *__cdecl Outpop::Message::and_group(Outpop::Message::Group *a1, int a2, int a3)
{
  _DWORD *i; // esi
  void (__cdecl *v4)(); // ebp
  int *v5; // ebp
  int *v6; // edi
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // ebx
  int *v10; // ebp
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int *v14; // esi
  int v16; // [esp+18h] [ebp-28h] BYREF
  int v17; // [esp+1Ch] [ebp-24h]
  int v18; // [esp+20h] [ebp-20h] BYREF
  int *v19; // [esp+24h] [ebp-1Ch]
  _DWORD v20[6]; // [esp+28h] [ebp-18h] BYREF
  int v21; // [esp+48h] [ebp+8h]

  Outpop::Message::Group::Group(a1);
  v20[5] = 0;
  for ( i = **(_DWORD ***)(a2 + 8); ; i = (_DWORD *)*i )
  {
    v4 = invalid_parameter_noinfo;
    if ( i == *(_DWORD **)(a2 + 8) )
      break;
    sub_10018470(&v18, i + 2);
    v5 = *(int **)(a3 + 8);
    if ( !v18 || v18 != a3 + 4 )
      invalid_parameter_noinfo();
    if ( v19 != v5 )
    {
      if ( i == *(_DWORD **)(a2 + 8) )
        invalid_parameter_noinfo();
      v16 = i[2];
      sub_10017B10(a1, v20, &v16);
    }
    if ( i == *(_DWORD **)(a2 + 8) )
      invalid_parameter_noinfo();
  }
  v6 = **(int ***)(a2 + 48);
  v7 = a2 + 44;
  v21 = a2 + 44;
  v19 = v6;
  while ( v6 != *(int **)(v7 + 4) )
  {
    sub_10018470(&v16, v6 + 2);
    v8 = *(_DWORD *)(a3 + 48);
    if ( !v16 || v16 != a3 + 44 )
      v4();
    if ( v17 != v8 )
    {
      if ( v6 == *(int **)(v7 + 4) )
        v4();
      v9 = *(_DWORD **)v6[5];
      v10 = v6 + 4;
      while ( 1 )
      {
        if ( v6 == *(int **)(v21 + 4) )
          invalid_parameter_noinfo();
        if ( v9 == (_DWORD *)v10[1] )
          break;
        if ( !v16 )
          invalid_parameter_noinfo();
        v11 = v17;
        if ( v17 == *(_DWORD *)(v16 + 4) )
          invalid_parameter_noinfo();
        sub_10015DF0((_DWORD *)(v11 + 12), v20, v9 + 2);
        if ( v11 == *(_DWORD *)(v16 + 4) )
          invalid_parameter_noinfo();
        v12 = v11 + 16;
        v13 = *(_DWORD *)(v11 + 20);
        if ( !v20[0] || v20[0] != v12 )
          invalid_parameter_noinfo();
        if ( v20[1] != v13 )
        {
          if ( v9 == (_DWORD *)v10[1] )
            invalid_parameter_noinfo();
          v14 = v19;
          if ( v19 == *(int **)(v21 + 4) )
            invalid_parameter_noinfo();
          Outpop::Message::Group::add_id(a1, v14[2], v9[2]);
        }
        if ( v9 == (_DWORD *)v10[1] )
          invalid_parameter_noinfo();
        v9 = (_DWORD *)*v9;
        v6 = v19;
      }
      v4 = invalid_parameter_noinfo;
      v7 = v21;
    }
    if ( v6 == *(int **)(v7 + 4) )
      v4();
    v19 = (int *)*v6;
    v6 = v19;
  }
  return a1;
}
