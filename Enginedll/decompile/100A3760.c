/*
 * func-name: ?GetTextColor@CREButton@@UAEKHH@Z
 * func-address: 0x100a3760
 * callers: none
 * callees: none
 */

unsigned int __thiscall CREButton::GetTextColor(CREButton *this, int a2, int a3)
{
  if ( a3 )
    return *((_DWORD *)this + a2 + 174);
  else
    return *((_DWORD *)this + a2 + 141);
}
