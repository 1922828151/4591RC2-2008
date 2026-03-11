/*
 * func-name: sub_101A04F0
 * func-address: 0x101a04f0
 * callers: 0x10009ca0
 * callees: none
 */

int __thiscall sub_101A04F0(_DWORD *this)
{
  int v1; // eax
  int result; // eax

  v1 = this[1];
  this[2] = 0;
  result = *(_DWORD *)(v1 + 8);
  if ( *(_DWORD *)(result + 328) )
    return AnimationSet::Load(this + 3, result + 308, result + 308, 0, 0, 0);
  return result;
}
