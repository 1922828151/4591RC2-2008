/*
 * func-name: ?Refresh@CREControl@@UAEXXZ
 * func-address: 0x100aa0d0
 * callers: none
 * callees: 0x100a6050
 */

void __thiscall CREControl::Refresh(CREControl *this)
{
  int v2; // edi
  bool v3; // cc

  v2 = 0;
  v3 = *((_DWORD *)this + 31) <= 0;
  *((_BYTE *)this + 91) = 0;
  *((_BYTE *)this + 92) = 0;
  if ( !v3 )
  {
    do
      CREElement::Refresh(*(CREElement **)(*((_DWORD *)this + 30) + 4 * v2++));
    while ( v2 < *((_DWORD *)this + 31) );
  }
}
