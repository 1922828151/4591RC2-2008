/*
 * func-name: ?ShowMenu@CTYMenu@@QAEXHH@Z
 * func-address: 0x10150d40
 * callers: none
 * callees: 0x100a79d0, 0x100aef10, 0x100af0a0
 */

void __thiscall CTYMenu::ShowMenu(CTYMenu *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax

  v4 = *((_DWORD *)this + 175);
  v5 = a2;
  if ( v4 + a2 > 1024 )
    v5 = 1024 - v4;
  v6 = *((_DWORD *)this + 176);
  v7 = a3;
  if ( v6 + a3 > 768 )
    v7 = 768 - v6;
  *((_DWORD *)this + 173) = v5;
  *((_DWORD *)this + 174) = v7;
  CTYDialog::MoveNestedDialog(this);
  CTYDialog::ShowDialog(this, 1, 0.0);
  CTYDialog::BringToTop(this);
}
