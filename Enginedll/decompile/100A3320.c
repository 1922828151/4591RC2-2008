/*
 * func-name: ?SetTextColor@CREStatic@@UAEXHKH@Z
 * func-address: 0x100a3320
 * callers: none
 * callees: none
 */

void __thiscall CREStatic::SetTextColor(CREStatic *this, int a2, unsigned int a3, int a4)
{
  *((_DWORD *)this + a2 + 141) = a3;
  if ( *((_BYTE *)this + 132) )
    (*(void (__thiscall **)(CREStatic *))(*(_DWORD *)this + 196))(this);
}
