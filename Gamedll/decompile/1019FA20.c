/*
 * func-name: sub_1019FA20
 * func-address: 0x1019fa20
 * callers: 0x10005989
 * callees: none
 */

char __thiscall sub_1019FA20(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax

  v2 = *(_DWORD *)(*(_DWORD *)(this + 4) + 460);
  if ( AnimationSet::GetDXSet((AnimationSet *)(v2 + 964)) )
  {
    AnimationSet::Clone((AnimationSet *)(v2 + 964), (struct AnimationSet *)(this + 32));
    *(float *)(this + 76) = AnimationSet::GetDuration((AnimationSet *)(this + 32));
  }
  if ( AnimationSet::GetDXSet((AnimationSet *)(v2 + 1008)) )
    AnimationSet::Clone((AnimationSet *)(v2 + 1008), (struct AnimationSet *)(this + 84));
  if ( *(_DWORD *)(v2 + 1064) )
  {
    v3 = AudioDevice::Instance();
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
    *(_DWORD *)(this + 20) = v4;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 1064) + 12))(*(_DWORD *)(v2 + 1064), v4);
    *(float *)(this + 24) = *(float *)(v2 + 740);
  }
  return 1;
}
