/*
 * func-name: ?CloseMessageBoxBlocking@GUISystem@@UAEXXZ
 * func-address: 0x100d5b90
 * callers: none
 * callees: none
 */

void __thiscall GUISystem::CloseMessageBoxBlocking(GUISystem *this)
{
  int v1; // eax
  int v2; // ecx

  byte_11240B48 = 0;
  v1 = *((_DWORD *)this + 3);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    *(_BYTE *)v1 = 0;
    if ( v2 )
      *(_BYTE *)(v2 + 87) = 0;
    if ( CREDialog::s_pControlFocus )
    {
      if ( *((_DWORD *)CREDialog::s_pControlFocus + 28) == *(_DWORD *)(v1 + 4) )
      {
        (*(void (**)(void))(*(_DWORD *)CREDialog::s_pControlFocus + 104))();
        CREDialog::s_pControlFocus = 0;
      }
    }
  }
}
