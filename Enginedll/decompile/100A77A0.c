/*
 * func-name: ?clearMouseOverStatus@CREListCtrl@@IAEXXZ
 * func-address: 0x100a77a0
 * callers: none
 * callees: none
 */

void __thiscall CREListCtrl::clearMouseOverStatus(CREListCtrl *this)
{
  *((_DWORD *)this + 182) = -1;
  *((_DWORD *)this + 181) = -1;
}
