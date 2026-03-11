/*
 * func-name: sub_10146620
 * func-address: 0x10146620
 * callers: 0x101459a0
 * callees: none
 */

void __thiscall sub_10146620(_DWORD *this)
{
  int v2; // ecx

  this[3] = this[2];
  NxReleaseControllerManager(*this);
  v2 = this[1];
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 28))(v2, 1);
  if ( this[2] )
    free((void *)this[2]);
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
}
