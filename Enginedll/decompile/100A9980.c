/*
 * func-name: ?RemoveTexture@CREDialogResourceManager@@QAEXH@Z
 * func-address: 0x100a9980
 * callers: 0x100b5710, 0x100b5760, 0x100c6de0
 * callees: 0x10035e00, 0x101a2500
 */

void __thiscall CREDialogResourceManager::RemoveTexture(CREDialogResourceManager *this, int a2)
{
  int v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // eax

  v2 = a2;
  if ( a2 >= 0 && a2 < *((_DWORD *)this + 3) )
  {
    v3 = *(_DWORD **)(*((_DWORD *)this + 2) + 4 * a2);
    v4 = (_DWORD *)((char *)this + 8);
    if ( v3 )
    {
      v5 = v3[133];
      if ( v5 > 0 )
        v3[133] = v5 - 1;
      if ( !v3[133] )
      {
        v6 = v3[130];
        if ( v6 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(v3[130]);
        operator delete(v3);
        a2 = 0;
        sub_10035E00(v4, v2, &a2);
      }
    }
  }
}
