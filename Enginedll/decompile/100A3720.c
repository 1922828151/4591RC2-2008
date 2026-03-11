/*
 * func-name: ?SetTextColor@CREButton@@UAEXHKH@Z
 * func-address: 0x100a3720
 * callers: none
 * callees: none
 */

void __thiscall CREButton::SetTextColor(CREButton *this, int a2, unsigned int a3, int a4)
{
  if ( a4 )
    *((_DWORD *)this + a2 + 174) = a3;
  else
    *((_DWORD *)this + a2 + 141) = a3;
  if ( *((_BYTE *)this + 132) )
    (*(void (__thiscall **)(CREButton *))(*(_DWORD *)this + 196))(this);
}
