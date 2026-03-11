/*
 * func-name: sub_10149330
 * func-address: 0x10149330
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_10149330(_DWORD *this, char a2)
{
  FILE *v3; // eax

  v3 = (FILE *)this[1];
  *this = &UserStream::`vftable';
  if ( v3 )
    fclose(v3);
  *this = &NxStream::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
