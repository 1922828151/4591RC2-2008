/*
 * func-name: ?AddTexture@CREDialogResourceManager@@QAEHPB_W@Z
 * func-address: 0x100af9f0
 * callers: 0x100b5600, 0x100b56d0
 * callees: 0x1006c5d0, 0x100a9e80, 0x101a251c, 0x101a2534
 */

int __thiscall CREDialogResourceManager::AddTexture(CREDialogResourceManager *this, wchar_t *String2)
{
  int v3; // edi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // esi

  v3 = 0;
  if ( *((int *)this + 3) <= 0 )
  {
LABEL_5:
    v5 = operator new(0x218u);
    v6 = v5;
    if ( v5 )
    {
      memset(v5, 0, 0x218u);
      memset(v6, 0, 0x218u);
      wcsncpy((wchar_t *)v6, String2, 0x103u);
      v6[133] = 0;
      if ( sub_1006C5D0((int)this + 8, *((_DWORD *)this + 3) + 1) >= 0 )
        *(_DWORD *)(*((_DWORD *)this + 2) + 4 * (*((_DWORD *)this + 3))++) = v6;
      v7 = *((_DWORD *)this + 3) - 1;
      if ( *((_DWORD *)this + 8) )
        CREDialogResourceManager::CreateTexture(this, *((_DWORD *)this + 3) - 1);
      return v7;
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
      v4 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3);
      if ( v4 )
      {
        if ( !wcsnicmp((const wchar_t *)v4, String2, 0x103u) )
          break;
      }
      if ( ++v3 >= *((_DWORD *)this + 3) )
        goto LABEL_5;
    }
    ++*(_DWORD *)(v4 + 532);
    return v3;
  }
}
