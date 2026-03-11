/*
 * func-name: sub_1000F870
 * func-address: 0x1000f870
 * callers: 0x1001ebb0
 * callees: none
 */

char __thiscall sub_1000F870(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  int v4; // eax

  v2 = this[1];
  if ( !v2 )
    return 0;
  v4 = this[4];
  this[4] = v4 + 1;
  *a2 = *(_DWORD *)(this[2] + 4 * v4);
  if ( this[4] == v2 )
  {
    if ( this[1] )
      this[1] = 0;
    this[4] = 0;
  }
  return 1;
}
