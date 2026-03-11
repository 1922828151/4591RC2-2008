/*
 * func-name: ?GetLock@CEstablishmentUI@@QAEXAAJ0@Z_0
 * func-address: 0x1026f4c0
 * callers: 0x10001faf
 * callees: none
 */

void __thiscall CEstablishmentUI::GetLock(CEstablishmentUI *this, int *a2, int *a3)
{
  if ( *(_BYTE *)(*((_DWORD *)this + 974) + 816) )
    *a2 |= 1u;
  if ( *(_BYTE *)(*((_DWORD *)this + 975) + 816) )
    *a2 |= 2u;
  if ( *(_BYTE *)(*((_DWORD *)this + 976) + 816) )
  {
    *a2 |= 0x20u;
    *a3 = *((_DWORD *)this + 969);
  }
}
