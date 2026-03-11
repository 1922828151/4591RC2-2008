/*
 * func-name: ?GetTextCopy@CREStatic@@QAEJPA_WI@Z
 * func-address: 0x100a3260
 * callers: none
 * callees: none
 */

int __thiscall CREStatic::GetTextCopy(CREStatic *this, wchar_t *Destination, size_t Count)
{
  size_t v3; // esi
  const wchar_t *v4; // ecx

  if ( !Destination )
    return -2147024809;
  v3 = Count;
  if ( !Count )
    return -2147024809;
  if ( Count > *((_DWORD *)this + 138) )
    v3 = *((_DWORD *)this + 138);
  if ( *((_DWORD *)this + 139) < 8u )
    v4 = (const wchar_t *)((char *)this + 536);
  else
    v4 = (const wchar_t *)*((_DWORD *)this + 134);
  wcsncpy(Destination, v4, v3);
  Destination[v3 - 1] = 0;
  return 0;
}
