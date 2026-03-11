/*
 * func-name: ?SetTextFormat@CREStatic@@UAEXK@Z
 * func-address: 0x100aa120
 * callers: none
 * callees: none
 */

void __thiscall CREStatic::SetTextFormat(CREStatic *this, unsigned int a2)
{
  if ( *((_BYTE *)this + 132) )
  {
    *(_DWORD *)(**((_DWORD **)this + 30) + 8) = a2;
  }
  else
  {
    *((_BYTE *)this + 644) = 1;
    *((_DWORD *)this + 162) = a2;
  }
}
