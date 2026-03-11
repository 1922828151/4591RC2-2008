/*
 * func-name: sub_10270BE0
 * func-address: 0x10270be0
 * callers: 0x10006e4c
 * callees: 0x102c9d50
 */

CTYDialog *__thiscall sub_10270BE0(CTYDialog *this, char a2)
{
  *(_DWORD *)this = &CFixtureUIHeader::`vftable';
  CTYDialog::~CTYDialog(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
