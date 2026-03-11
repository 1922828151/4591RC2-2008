/*
 * func-name: ?GetControlBoxCount@CControlBoxList@@QAEHXZ
 * func-address: 0x100ce7f0
 * callers: none
 * callees: none
 */

int __thiscall CControlBoxList::GetControlBoxCount(CControlBoxList *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 134);
  if ( v1 )
    return (*((_DWORD *)this + 135) - v1) >> 2;
  else
    return 0;
}
