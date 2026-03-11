/*
 * func-name: ?or_group@Message@Outpop@@YA?AVGroup@12@AAV312@0@Z
 * func-address: 0x100178c0
 * callers: none
 * callees: 0x100174e0, 0x100175f0, 0x10017b10
 */

Outpop::Message::Group *__cdecl Outpop::Message::or_group(Outpop::Message::Group *a1, int a2, int a3)
{
  _DWORD *i; // edi
  _DWORD *j; // edi
  int *v5; // ebx
  int v6; // ebp
  _DWORD *v7; // esi
  int *v8; // ebx
  int k; // ebp
  _DWORD *v10; // esi
  int v12; // [esp+18h] [ebp-1Ch] BYREF
  _BYTE v13[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v14; // [esp+30h] [ebp-4h]
  int v15; // [esp+3Ch] [ebp+8h]

  Outpop::Message::Group::Group(a1);
  v14 = 0;
  for ( i = **(_DWORD ***)(a2 + 8); i != *(_DWORD **)(a2 + 8); i = (_DWORD *)*i )
  {
    v12 = i[2];
    sub_10017B10(a1, v13, &v12);
    if ( i == *(_DWORD **)(a2 + 8) )
      invalid_parameter_noinfo();
  }
  for ( j = **(_DWORD ***)(a3 + 8); j != *(_DWORD **)(a3 + 8); j = (_DWORD *)*j )
  {
    v12 = j[2];
    sub_10017B10(a1, v13, &v12);
    if ( j == *(_DWORD **)(a3 + 8) )
      invalid_parameter_noinfo();
  }
  v5 = **(int ***)(a2 + 48);
  v6 = a2 + 44;
  v15 = a2 + 44;
  while ( v5 != *(int **)(v6 + 4) )
  {
    v7 = *(_DWORD **)v5[5];
    while ( 1 )
    {
      if ( v5 == *(int **)(v6 + 4) )
        invalid_parameter_noinfo();
      if ( v7 == (_DWORD *)v5[5] )
        break;
      if ( v5 == *(int **)(v15 + 4) )
        invalid_parameter_noinfo();
      Outpop::Message::Group::add_id(a1, v5[2], v7[2]);
      if ( v7 == (_DWORD *)v5[5] )
        invalid_parameter_noinfo();
      v7 = (_DWORD *)*v7;
      v6 = v15;
    }
    if ( v5 == *(int **)(v15 + 4) )
      invalid_parameter_noinfo();
    v5 = (int *)*v5;
    v6 = v15;
  }
  v8 = **(int ***)(a3 + 48);
  for ( k = a3 + 44; v8 != *(int **)(k + 4); k = a3 + 44 )
  {
    v10 = *(_DWORD **)v8[5];
    while ( 1 )
    {
      if ( v8 == *(int **)(k + 4) )
        invalid_parameter_noinfo();
      if ( v10 == (_DWORD *)v8[5] )
        break;
      if ( v8 == *(int **)(a3 + 48) )
        invalid_parameter_noinfo();
      Outpop::Message::Group::add_id(a1, v8[2], v10[2]);
      if ( v10 == (_DWORD *)v8[5] )
        invalid_parameter_noinfo();
      v10 = (_DWORD *)*v10;
      k = a3 + 44;
    }
    if ( v8 == *(int **)(a3 + 48) )
      invalid_parameter_noinfo();
    v8 = (int *)*v8;
  }
  return a1;
}
