/*
 * func-name: ??4HUDSystem@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100ee040
 * callers: 0x1001a848
 * callees: 0x10018200
 */

_BYTE *__thiscall HUDSystem::operator=(_BYTE *this, int a2)
{
  *this = *(_BYTE *)a2;
  if ( this + 4 != (_BYTE *)(a2 + 4) )
    sub_10018200(a2 + 4, **(_DWORD **)(a2 + 8), a2 + 4, *(_DWORD *)(a2 + 8), a2);
  return this;
}
