/*
 * func-name: sub_101A02E0
 * func-address: 0x101a02e0
 * callers: 0x10016234
 * callees: none
 */

int __thiscall sub_101A02E0(_DWORD *this)
{
  int v1; // eax
  int result; // eax

  v1 = this[1];
  this[2] = 0;
  result = *(_DWORD *)(v1 + 8);
  if ( *(_DWORD *)(result + 244) )
    return AnimationSet::Load(this + 3, result + 224, result + 224, 0, 0, 0);
  return result;
}
