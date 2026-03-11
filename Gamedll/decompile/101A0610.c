/*
 * func-name: sub_101A0610
 * func-address: 0x101a0610
 * callers: 0x10008ada
 * callees: none
 */

int __thiscall sub_101A0610(_DWORD *this)
{
  int v1; // eax
  int result; // eax

  v1 = this[1];
  this[2] = -1;
  result = *(_DWORD *)(v1 + 8);
  if ( *(_DWORD *)(result + 272) )
    return AnimationSet::Load(this + 3, result + 252, result + 252, 1, 0, 0);
  return result;
}
