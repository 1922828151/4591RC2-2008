/*
 * func-name: ?Dismiss@Group@GameClient@@QAEXXZ_0
 * func-address: 0x101f6b40
 * callers: 0x10006398
 * callees: 0x10009d68, 0x10016b58, 0x102c9d50
 */

void __thiscall GameClient::Group::Dismiss(GameClient::Group *this)
{
  unsigned int v1; // edi
  int i; // ebp
  int v4; // eax
  int v5; // eax
  void (__cdecl *v6)(); // ebx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  void *v10; // ebx
  int v11; // eax
  int v12; // [esp+0h] [ebp-10h]
  int v13; // [esp+4h] [ebp-Ch]

  v1 = 0;
  for ( i = 0; ; i += 84 )
  {
    v4 = *((_DWORD *)this + 4);
    if ( !v4 || v1 >= (*((_DWORD *)this + 5) - v4) / 84 )
      break;
    v5 = *((_DWORD *)this + 4);
    if ( v5 && v1 < (*((_DWORD *)this + 5) - v5) / 84 )
    {
      v6 = _invalid_parameter_noinfo;
    }
    else
    {
      v6 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    v7 = sub_10009D68(*(_DWORD *)(i + *((_DWORD *)this + 4)));
    if ( v7 )
      *(_DWORD *)(v7 + 216) = 0;
    v8 = *((_DWORD *)this + 4);
    if ( !v8 || v1 >= (*((_DWORD *)this + 5) - v8) / 84 )
      v6();
    v9 = *((_DWORD *)this + 4);
    if ( *(_DWORD *)(v9 + i + 80) )
    {
      if ( !v9 || v1 >= (*((_DWORD *)this + 5) - v9) / 84 )
        v6();
      v10 = *(void **)(*((_DWORD *)this + 4) + i + 80);
      if ( v10 )
      {
        sub_10016B58(v12, v13);
        operator delete(v10);
      }
      v11 = *((_DWORD *)this + 4);
      if ( !v11 || v1 >= (*((_DWORD *)this + 5) - v11) / 84 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 4) + i + 80) = 0;
    }
    ++v1;
  }
}
