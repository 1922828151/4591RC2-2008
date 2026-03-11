/*
 * func-name: sub_101A03B0
 * func-address: 0x101a03b0
 * callers: 0x10011612
 * callees: none
 */

struct ID3DXAnimationSet *__thiscall sub_101A03B0(_DWORD *this, Model *a2)
{
  struct AnimationSet *v3; // edi
  struct ID3DXAnimationSet *result; // eax

  v3 = (struct AnimationSet *)(this + 3);
  result = AnimationSet::GetDXSet((AnimationSet *)(this + 3));
  if ( result )
  {
    result = (struct ID3DXAnimationSet *)Model::AttachAnimSet(a2, v3);
    this[2] = result;
  }
  return result;
}
