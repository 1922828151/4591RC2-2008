/*
 * func-name: ?SetVisible@CGUIWindow@@QAEX_N@Z
 * func-address: 0x100d5710
 * callers: 0x100a78d0, 0x100aef10, 0x100b2be0, 0x100ccaf0, 0x1014a050
 * callees: none
 */

void __thiscall CGUIWindow::SetVisible(CGUIWindow *this, bool a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 1);
  *(_BYTE *)this = a2;
  if ( v3 )
    *(_BYTE *)(v3 + 87) = a2;
  if ( !a2 && CREDialog::s_pControlFocus && *((_DWORD *)CREDialog::s_pControlFocus + 28) == *((_DWORD *)this + 1) )
  {
    (*(void (**)(void))(*(_DWORD *)CREDialog::s_pControlFocus + 104))();
    CREDialog::s_pControlFocus = 0;
  }
}
