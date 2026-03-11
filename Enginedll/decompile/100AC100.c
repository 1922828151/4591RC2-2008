/*
 * func-name: ?SetTextFont@CREEditBox@@QAEXI@Z
 * func-address: 0x100ac100
 * callers: none
 * callees: none
 */

void __thiscall CREEditBox::SetTextFont(CREEditBox *this, unsigned int a2)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 132) == 0;
  *((_DWORD *)this + 196) = a2;
  if ( !v2 )
    *(_DWORD *)(**((_DWORD **)this + 30) + 4) = a2;
}
