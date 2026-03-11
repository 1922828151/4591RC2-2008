/*
 * func-name: ?GetAnimFPV@CombinRobot@GameClient@@QAE?AUAnimSetInfo@12@H@Z_0
 * func-address: 0x10110670
 * callers: 0x1000268f
 * callees: 0x102c9d62
 */

_DWORD *__thiscall GameClient::CombinRobot::GetAnimFPV(_DWORD **this, _DWORD *a2, int a3)
{
  _DWORD **v4; // edi
  _DWORD *v5; // esi
  _BYTE v7[44]; // [esp+20h] [ebp-40h] BYREF
  int v8; // [esp+4Ch] [ebp-14h]
  int v9; // [esp+5Ch] [ebp-4h]

  AnimationSet::AnimationSet((AnimationSet *)v7);
  v8 = -1;
  v4 = this + 441;
  v5 = (_DWORD *)*this[442];
  v9 = 1;
  while ( 1 )
  {
    if ( v5 == v4[1] )
    {
      *a2 = 0;
      AnimationSet::AnimationSet((AnimationSet *)(a2 + 1), (const struct AnimationSet *)v7);
      a2[12] = v8;
      goto LABEL_11;
    }
    if ( v5[21] == a3 )
      break;
    if ( v5 == v4[1] )
      _invalid_parameter_noinfo();
    v5 = (_DWORD *)*v5;
  }
  if ( v5 == v4[1] )
    _invalid_parameter_noinfo();
  *a2 = v5[9];
  AnimationSet::AnimationSet((AnimationSet *)(a2 + 1), (const struct AnimationSet *)(v5 + 10));
  a2[12] = v5[21];
LABEL_11:
  LOBYTE(v9) = 0;
  AnimationSet::~AnimationSet((AnimationSet *)v7);
  return a2;
}
