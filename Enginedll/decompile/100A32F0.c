/*
 * func-name: ?SetTextFont@CREStatic@@UAEXI@Z
 * func-address: 0x100a32f0
 * callers: none
 * callees: none
 */

void __thiscall CREStatic::SetTextFont(CREStatic *this, unsigned int a2)
{
  bool v2; // zf

  v2 = *((_BYTE *)this + 132) == 0;
  *((_DWORD *)this + 140) = a2;
  if ( !v2 )
    (*(void (__thiscall **)(CREStatic *))(*(_DWORD *)this + 196))(this);
}
