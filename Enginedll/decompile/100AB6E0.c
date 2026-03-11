/*
 * func-name: ?GetTextFormat@CREListBox@@UAEKXZ
 * func-address: 0x100ab6e0
 * callers: none
 * callees: none
 */

unsigned int __thiscall CREListBox::GetTextFormat(CREListBox *this)
{
  unsigned int result; // eax

  if ( *((_BYTE *)this + 132) )
    return *(_DWORD *)(**((_DWORD **)this + 30) + 8);
  result = *((_DWORD *)this + 311);
  *((_BYTE *)this + 1240) = 1;
  return result;
}
