/*
 * func-name: ?GetColumnNum@CREListCtrl@@QAEHXZ
 * func-address: 0x100ae6f0
 * callers: none
 * callees: none
 */

int __thiscall CREListCtrl::GetColumnNum(CREListCtrl *this)
{
  int result; // eax

  result = *((_DWORD *)this + 187);
  if ( result )
    return (*((_DWORD *)this + 188) - result) / 40;
  return result;
}
