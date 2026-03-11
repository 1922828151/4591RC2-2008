/*
 * func-name: ?RemoveMember@Group@GameClient@@QAEXK@Z_0
 * func-address: 0x101f8c80
 * callers: 0x1000fa15
 * callees: 0x10009d68, 0x1000f8a8, 0x10016a4f, 0x10016b58, 0x102c9d50
 */

void __thiscall GameClient::Group::RemoveMember(GameClient::Group *this, unsigned int a2)
{
  unsigned int v2; // edi
  char *v3; // esi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  void (__cdecl *v7)(); // ebp
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  void *v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  int v14; // eax
  int v15; // ebp
  unsigned int j; // edi
  int v17; // eax
  int v18; // eax
  void (__cdecl *v19)(); // ebx
  int v20; // edx
  int v21; // eax
  void *v22; // ebx
  int v23; // eax
  int v24; // [esp+0h] [ebp-18h]
  int v25; // [esp+4h] [ebp-14h]
  _BYTE v26[4]; // [esp+10h] [ebp-8h] BYREF
  unsigned int v27; // [esp+14h] [ebp-4h]

  v2 = 0;
  v3 = (char *)this + 12;
  for ( i = 0; ; i += 84 )
  {
    v5 = *((_DWORD *)v3 + 1);
    if ( !v5 || v2 >= (*((_DWORD *)v3 + 2) - v5) / 84 )
      break;
    v6 = *((_DWORD *)v3 + 1);
    if ( v6 && v2 < (*((_DWORD *)v3 + 2) - v6) / 84 )
    {
      v7 = _invalid_parameter_noinfo;
    }
    else
    {
      v7 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    v8 = *((_DWORD *)v3 + 1);
    if ( *(_DWORD *)(i + v8) == a2 )
    {
      if ( !v8 || v2 >= (*((_DWORD *)v3 + 2) - v8) / 84 )
        v7();
      v9 = *((_DWORD *)v3 + 1);
      v10 = 84 * v2;
      if ( *(_DWORD *)(v9 + 84 * v2 + 80) )
      {
        if ( !v9 || v2 >= (*((_DWORD *)v3 + 2) - v9) / 84 )
          v7();
        v11 = *(void **)(*((_DWORD *)v3 + 1) + v10 + 80);
        if ( v11 )
        {
          sub_10016B58(v24, v25);
          operator delete(v11);
        }
      }
      v12 = *((_DWORD *)v3 + 1);
      if ( v12 > *((_DWORD *)v3 + 2) )
        v7();
      v27 = v12;
      v13 = v10 + v12;
      if ( v13 > *((_DWORD *)v3 + 2) || v13 < *((_DWORD *)v3 + 1) )
        v7();
      sub_1000F8A8((int)v26, (int)v3, v13);
      v14 = sub_10009D68(a2);
      v15 = 0;
      if ( v14 )
        *(_DWORD *)(v14 + 216) = 0;
      if ( sub_10016A4F(a2) )
      {
        for ( j = 0; ; ++j )
        {
          v17 = *((_DWORD *)v3 + 1);
          if ( !v17 || j >= (*((_DWORD *)v3 + 2) - v17) / 84 )
            break;
          v18 = *((_DWORD *)v3 + 1);
          if ( v18 && j < (*((_DWORD *)v3 + 2) - v18) / 84 )
          {
            v19 = _invalid_parameter_noinfo;
          }
          else
          {
            v19 = _invalid_parameter_noinfo;
            _invalid_parameter_noinfo();
          }
          v20 = *((_DWORD *)v3 + 1);
          if ( *(_DWORD *)(v20 + v15 + 80) )
          {
            if ( !v20 || j >= (*((_DWORD *)v3 + 2) - v20) / 84 )
              v19();
            v21 = *((_DWORD *)v3 + 1);
            if ( *(_DWORD *)(v21 + v15 + 80) )
            {
              if ( !v21 || j >= (*((_DWORD *)v3 + 2) - v21) / 84 )
                v19();
              v22 = *(void **)(*((_DWORD *)v3 + 1) + v15 + 80);
              if ( v22 )
              {
                sub_10016B58(v24, v25);
                operator delete(v22);
              }
              v23 = *((_DWORD *)v3 + 1);
              if ( !v23 || j >= (*((_DWORD *)v3 + 2) - v23) / 84 )
                _invalid_parameter_noinfo();
              *(_DWORD *)(*((_DWORD *)v3 + 1) + v15 + 80) = 0;
            }
          }
          v15 += 84;
        }
      }
      return;
    }
    ++v2;
  }
}
