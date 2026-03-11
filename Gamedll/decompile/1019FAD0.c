/*
 * func-name: sub_1019FAD0
 * func-address: 0x1019fad0
 * callers: 0x10003936
 * callees: none
 */

struct ID3DXAnimationSet *__thiscall sub_1019FAD0(_DWORD *this, Model *a2)
{
  struct AnimationSet *v3; // edi
  struct ID3DXAnimationSet *result; // eax

  v3 = (struct AnimationSet *)(this + 8);
  if ( AnimationSet::GetDXSet((AnimationSet *)(this + 8)) )
    this[7] = Model::AttachAnimSet(a2, v3);
  result = AnimationSet::GetDXSet((AnimationSet *)(this + 21));
  if ( result )
  {
    result = (struct ID3DXAnimationSet *)Model::AttachAnimSet(a2, (struct AnimationSet *)(this + 21));
    this[20] = result;
  }
  return result;
}
