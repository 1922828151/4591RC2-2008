/*
 * func-name: ?PlayAnimationFPV@CombinRobot@GameClient@@QAE_NHMMMM_N@Z_0
 * func-address: 0x10110350
 * callers: 0x1000d8be
 * callees: none
 */

char __thiscall GameClient::CombinRobot::PlayAnimationFPV(
        GameClient::CombinRobot *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        bool a7)
{
  Model *v8; // ecx
  int v9; // eax

  v8 = (Model *)*((_DWORD *)this + 349);
  if ( v8 && a2 != -1 )
  {
    v9 = *((_DWORD *)this + 350);
    if ( a7 )
    {
      Model::SetAnimationWeight(v8, v9, 0.0, a3);
LABEL_5:
      Model::TransitionToAnimation(*((Model **)this + 349), a2, a3, a4, a6, a5);
      *((_DWORD *)this + 350) = a2;
      return 1;
    }
    if ( v9 == a2 )
      return 1;
    if ( Model::IsLooping(v8, *((_DWORD *)this + 350))
      || !Model::IsPlaying(*((Model **)this + 349), *((_DWORD *)this + 350)) )
    {
      Model::SetAnimationWeight(*((Model **)this + 349), *((_DWORD *)this + 350), 0.0, a3);
      goto LABEL_5;
    }
  }
  return 0;
}
