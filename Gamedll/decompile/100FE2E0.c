/*
 * func-name: ?PlayAnimationFPV@AEquip@GameClient@@QAE_NHMMM_N@Z_0
 * func-address: 0x100fe2e0
 * callers: 0x10003f2b
 * callees: none
 */

char __thiscall GameClient::AEquip::PlayAnimationFPV(
        GameClient::AEquip *this,
        int a2,
        float a3,
        float a4,
        float a5,
        bool a6)
{
  Model *v7; // ecx
  int v8; // eax

  v7 = (Model *)*((_DWORD *)this + 341);
  if ( v7 && a2 != -1 )
  {
    v8 = *((_DWORD *)this + 534);
    if ( a6 )
    {
      if ( v8 == a2 )
      {
        if ( !Model::IsLooping(v7, *((_DWORD *)this + 534)) )
        {
          Model::SetAnimPosition(*((Model **)this + 341), a2, 0.0);
          return 1;
        }
        return 0;
      }
      Model::SetAnimationWeight(v7, v8, 0.0, a3);
LABEL_12:
      Model::TransitionToAnimation(*((Model **)this + 341), a2, a3, a4, 0.0, a5);
      *((_DWORD *)this + 534) = a2;
      return 1;
    }
    if ( v8 != a2
      && (Model::IsLooping(v7, *((_DWORD *)this + 534))
       || !Model::IsPlaying(*((Model **)this + 341), *((_DWORD *)this + 534))) )
    {
      Model::SetAnimationWeight(*((Model **)this + 341), *((_DWORD *)this + 534), 0.0, a3);
      goto LABEL_12;
    }
  }
  return 0;
}
