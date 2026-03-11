/*
 * func-name: ?GetItemCount@CREListCtrl@@QAEHXZ
 * func-address: 0x100ae950
 * callers: none
 * callees: none
 */

int __thiscall CREListCtrl::GetItemCount(CREListCtrl *this)
{
  int result; // eax

  result = *((_DWORD *)this + 191);
  if ( result )
    return (*((_DWORD *)this + 192) - result) / 20;
  return result;
}
