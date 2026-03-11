/*
 * func-name: ?OnLostDevice@CREDialogResourceManager@@IAEXXZ
 * func-address: 0x100a9890
 * callers: none
 * callees: none
 */

void __thiscall CREDialogResourceManager::OnLostDevice(CREDialogResourceManager *this)
{
  int i; // edi
  int v3; // eax
  int v4; // eax

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 5) + 4 * i);
    if ( *(_DWORD *)(v3 + 520) )
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 520) + 64))(*(_DWORD *)(v3 + 520));
  }
  v4 = *((_DWORD *)this + 1);
  if ( v4 )
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 48))(*((_DWORD *)this + 1));
  if ( *(_DWORD *)this )
  {
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this + 8))(*(_DWORD *)this);
    *(_DWORD *)this = 0;
  }
}
