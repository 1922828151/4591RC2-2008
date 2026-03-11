/*
 * func-name: ?OnResetDevice@CREDialogResourceManager@@IAEJXZ
 * func-address: 0x100a9800
 * callers: none
 * callees: 0x100d5c90, 0x100d6d20, 0x101189f0
 */

int __thiscall CREDialogResourceManager::OnResetDevice(CREDialogResourceManager *this)
{
  int i; // edi
  int v3; // eax
  struct RenderDevice *v4; // eax
  int result; // eax
  struct GUISystem *v6; // eax
  int v7; // [esp+4h] [ebp-4h]

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 5) + 4 * i);
    if ( *(_DWORD *)(v3 + 520) )
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 520) + 68))(*(_DWORD *)(v3 + 520));
  }
  if ( *((_DWORD *)this + 1) )
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 1) + 52))(*((_DWORD *)this + 1));
  RenderDevice::Instance();
  v4 = RenderDevice::Instance();
  result = (*(int (__stdcall **)(_DWORD, int, CREDialogResourceManager *))(**((_DWORD **)v4 + 427) + 236))(
             *((_DWORD *)v4 + 427),
             1,
             this);
  if ( result >= 0 )
  {
    v7 = *((_DWORD *)GUISystem::Instance() + 13);
    v6 = GUISystem::Instance();
    GUISystem::SetCursor(v6, v7);
    return 0;
  }
  return result;
}
