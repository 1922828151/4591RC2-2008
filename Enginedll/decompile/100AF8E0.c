/*
 * func-name: ?AddFont@CREDialogResourceManager@@QAEHPB_WJJ@Z
 * func-address: 0x100af8e0
 * callers: 0x100b5470, 0x100b5550
 * callees: 0x1006c5d0, 0x100a9db0, 0x101a251c, 0x101a2534
 */

unsigned int __thiscall CREDialogResourceManager::AddFont(
        CREDialogResourceManager *this,
        wchar_t *String2,
        int a3,
        int a4)
{
  int v5; // ebx
  int v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  unsigned int v9; // esi

  v5 = 0;
  if ( *((int *)this + 6) <= 0 )
  {
LABEL_6:
    v7 = operator new(0x218u);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x218u);
      memset(v8, 0, 0x218u);
      wcsncpy((wchar_t *)v8, String2, 0x103u);
      v8[133] = a4;
      v8[131] = a3;
      if ( sub_1006C5D0((int)this + 20, *((_DWORD *)this + 6) + 1) >= 0 )
        *(_DWORD *)(*((_DWORD *)this + 5) + 4 * (*((_DWORD *)this + 6))++) = v8;
      v9 = *((_DWORD *)this + 6) - 1;
      if ( *((_DWORD *)this + 8) )
        CREDialogResourceManager::CreateFontW(this, v9, -1.0);
      return v9;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v5);
      if ( !wcsnicmp((const wchar_t *)v6, String2, 0x103u) && *(_DWORD *)(v6 + 524) == a3 && *(_DWORD *)(v6 + 532) == a4 )
        return v5;
      if ( ++v5 >= *((_DWORD *)this + 6) )
        goto LABEL_6;
    }
  }
}
