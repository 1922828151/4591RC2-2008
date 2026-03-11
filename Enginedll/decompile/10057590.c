/*
 * func-name: sub_10057590
 * func-address: 0x10057590
 * callers: 0x1005a2a0, 0x1005a850, 0x10070240
 * callees: none
 */

int __thiscall sub_10057590(_DWORD *this)
{
  int result; // eax
  bool v2; // zf

  result = this[4];
  if ( result )
  {
    if ( (unsigned int)(4 * this[2]) <= ++this[3] )
      this[3] = 0;
    v2 = result-- == 1;
    this[4] = result;
    if ( v2 )
      this[3] = 0;
  }
  return result;
}
