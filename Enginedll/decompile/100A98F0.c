/*
 * func-name: ?OnDestroyDevice@CREDialogResourceManager@@IAEXXZ
 * func-address: 0x100a98f0
 * callers: none
 * callees: none
 */

void __thiscall CREDialogResourceManager::OnDestroyDevice(CREDialogResourceManager *this)
{
  int v2; // ebx
  bool v3; // cc
  int v4; // edi
  int v5; // eax
  int i; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // eax

  v2 = 0;
  v3 = *((_DWORD *)this + 6) <= 0;
  *((_DWORD *)this + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v2);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 520);
        if ( v5 )
        {
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 8))(*(_DWORD *)(v4 + 520));
          *(_DWORD *)(v4 + 520) = 0;
        }
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 6) );
  }
  for ( i = 0; i < *((_DWORD *)this + 3); ++i )
  {
    v7 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 520);
      if ( v8 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v8 + 8))(*(_DWORD *)(v7 + 520));
        *(_DWORD *)(v7 + 520) = 0;
      }
    }
  }
  v9 = *((_DWORD *)this + 1);
  if ( v9 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 8))(*((_DWORD *)this + 1));
    *((_DWORD *)this + 1) = 0;
  }
}
