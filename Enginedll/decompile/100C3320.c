/*
 * func-name: ?GetComputedHeight@CMultiLineStatic@@QAEHXZ
 * func-address: 0x100c3320
 * callers: none
 * callees: 0x100a5480, 0x100b5280
 */

int __thiscall CMultiLineStatic::GetComputedHeight(CMultiLineStatic *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  _DWORD v6[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( !*((_DWORD *)this + 198) )
  {
    v2 = *((_DWORD *)this + 28);
    if ( REGetGlobalDialogResourceManager() )
    {
      v3 = **(_DWORD **)(v2 + 752);
      v4 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v3);
      if ( v4 )
      {
        (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v4 + 520) + 28))(*(_DWORD *)(v4 + 520), v6);
        *((_DWORD *)this + 180) = v6[0];
        *((_DWORD *)this + 198) = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v4 + 520) + 32))(*(_DWORD *)(v4 + 520));
        CREEditBox::CUniBuffer::Analyse((CMultiLineStatic *)((char *)this + 780));
      }
    }
  }
  return *((_DWORD *)this + 179) * *((_DWORD *)this + 180);
}
