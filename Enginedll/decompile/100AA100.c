/*
 * func-name: ?GetTextFormat@CREStatic@@UAEKXZ
 * func-address: 0x100aa100
 * callers: none
 * callees: none
 */

unsigned int __thiscall CREStatic::GetTextFormat(CREStatic *this)
{
  unsigned int result; // eax

  if ( *((_BYTE *)this + 132) )
    return *(_DWORD *)(**((_DWORD **)this + 30) + 8);
  result = *((_DWORD *)this + 162);
  *((_BYTE *)this + 644) = 1;
  return result;
}
