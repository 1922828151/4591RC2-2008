/*
 * func-name: ?SetLeader@Group@GameClient@@QAEXK@Z_0
 * func-address: 0x101f6790
 * callers: 0x1000f41b
 * callees: 0x1000ae2a, 0x1000bf05, 0x100145c9, 0x10016a4f, 0x10016b58, 0x10019484, 0x102c9d50, 0x102c9d98
 */

void __thiscall GameClient::Group::SetLeader(GameClient::Group *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int i; // ebp
  int v6; // eax
  int v7; // eax
  void (__cdecl *v8)(); // ebx
  int v9; // eax
  int v10; // edx
  void *v11; // ebx
  int v12; // eax
  unsigned int v13; // edi
  int j; // ebp
  int v15; // eax
  int v16; // eax
  void (__cdecl *v17)(); // ebx
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [esp+0h] [ebp-20h]
  int v27; // [esp+4h] [ebp-1Ch]

  v3 = *((_DWORD *)this + 2);
  if ( v3 != -1 && sub_10016A4F(v3) )
  {
    v4 = 0;
    for ( i = 0; ; i += 84 )
    {
      v6 = *((_DWORD *)this + 4);
      if ( !v6 || v4 >= (*((_DWORD *)this + 5) - v6) / 84 )
        break;
      v7 = *((_DWORD *)this + 4);
      if ( v7 && v4 < (*((_DWORD *)this + 5) - v7) / 84 )
      {
        v8 = _invalid_parameter_noinfo;
      }
      else
      {
        v8 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      v9 = *((_DWORD *)this + 4);
      if ( *(_DWORD *)(v9 + i) != *((_DWORD *)this + 2) )
      {
        if ( !v9 || v4 >= (*((_DWORD *)this + 5) - v9) / 84 )
          v8();
        v10 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v10 + i + 80) )
        {
          if ( !v10 || v4 >= (*((_DWORD *)this + 5) - v10) / 84 )
            v8();
          v11 = *(void **)(*((_DWORD *)this + 4) + i + 80);
          if ( v11 )
          {
            sub_10016B58(v26, v27);
            operator delete(v11);
          }
          v12 = *((_DWORD *)this + 4);
          if ( !v12 || v4 >= (*((_DWORD *)this + 5) - v12) / 84 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*((_DWORD *)this + 4) + i + 80) = 0;
        }
      }
      ++v4;
    }
  }
  *((_DWORD *)this + 2) = a2;
  if ( a2 != -1 && sub_10016A4F(a2) )
  {
    v13 = 0;
    for ( j = 0; ; j += 84 )
    {
      v15 = *((_DWORD *)this + 4);
      if ( !v15 || v13 >= (*((_DWORD *)this + 5) - v15) / 84 )
        break;
      v16 = *((_DWORD *)this + 4);
      if ( v16 && v13 < (*((_DWORD *)this + 5) - v16) / 84 )
      {
        v17 = _invalid_parameter_noinfo;
      }
      else
      {
        v17 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      v18 = *((_DWORD *)this + 4);
      if ( *(_DWORD *)(v18 + j + 64) != 6 )
      {
        if ( !v18 || v13 >= (*((_DWORD *)this + 5) - v18) / 84 )
          v17();
        v19 = *((_DWORD *)this + 4);
        if ( !*(_DWORD *)(v19 + j + 80) )
        {
          if ( !v19 || v13 >= (*((_DWORD *)this + 5) - v19) / 84 )
            v17();
          if ( !*(_DWORD *)(*((_DWORD *)this + 4) + j + 80) )
          {
            v20 = 0;
            if ( operator new(0x78u) )
              v20 = sub_100145C9(v26, v27);
            v21 = *((_DWORD *)this + 4);
            if ( !v21 || v13 >= (*((_DWORD *)this + 5) - v21) / 84 )
              _invalid_parameter_noinfo();
            *(_DWORD *)(*((_DWORD *)this + 4) + j + 80) = v20;
            v22 = *((_DWORD *)this + 4);
            if ( !v22 || v13 >= (*((_DWORD *)this + 5) - v22) / 84 )
              _invalid_parameter_noinfo();
            std::string::operator=(*(_DWORD *)(*((_DWORD *)this + 4) + j + 80), "FX_Command_Normal.reb");
            v23 = *((_DWORD *)this + 4);
            if ( !v23 || v13 >= (*((_DWORD *)this + 5) - v23) / 84 )
              _invalid_parameter_noinfo();
            sub_10019484(dword_103B8134, 0);
            v17 = _invalid_parameter_noinfo;
          }
        }
        v24 = *((_DWORD *)this + 4);
        if ( !v24 || v13 >= (*((_DWORD *)this + 5) - v24) / 84 )
          v17();
        if ( sub_1000BF05() )
        {
          v25 = *((_DWORD *)this + 4);
          if ( !v25 || v13 >= (*((_DWORD *)this + 5) - v25) / 84 )
            _invalid_parameter_noinfo();
          sub_1000AE2A(*((_DWORD *)this + 4) + j + 68);
        }
      }
      ++v13;
    }
  }
}
