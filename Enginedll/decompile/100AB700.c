/*
 * func-name: ?SetTextFormat@CREListBox@@UAEXK@Z
 * func-address: 0x100ab700
 * callers: none
 * callees: none
 */

void __thiscall CREListBox::SetTextFormat(CREListBox *this, unsigned int a2)
{
  if ( *((_BYTE *)this + 132) )
  {
    *(_DWORD *)(**((_DWORD **)this + 30) + 8) = a2;
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 30) + 4) + 8) = a2;
  }
  else
  {
    *((_BYTE *)this + 1240) = 1;
    *((_DWORD *)this + 311) = a2;
  }
}
