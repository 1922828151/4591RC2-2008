/*
 * func-name: ?AttachAnimSetFPV@CombinRobot@GameClient@@QAEHAAVAnimationSet@@@Z_0
 * func-address: 0x10110420
 * callers: 0x10016496
 * callees: none
 */

int __thiscall GameClient::CombinRobot::AttachAnimSetFPV(GameClient::CombinRobot *this, struct AnimationSet *a2)
{
  Model *v2; // ecx

  v2 = (Model *)*((_DWORD *)this + 349);
  if ( v2 )
    return Model::AttachAnimSet(v2, a2);
  else
    return -1;
}
