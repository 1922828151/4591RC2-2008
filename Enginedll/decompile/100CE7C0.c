/*
 * func-name: ?GetControlCount@CControlBox@@QAEJXZ
 * func-address: 0x100ce7c0
 * callers: none
 * callees: none
 */

int __thiscall CControlBox::GetControlCount(CControlBox *this)
{
  int result; // eax

  result = *((_DWORD *)this + 134);
  if ( result )
    return (*((_DWORD *)this + 135) - result) / 12;
  return result;
}
