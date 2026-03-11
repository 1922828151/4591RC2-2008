/*
 * func-name: ?PlayAnimationDown@CombinRobot@GameClient@@QAE_NHMMMM_N@Z_0
 * func-address: 0x10110e00
 * callers: 0x10013c50
 * callees: 0x10004f11, 0x10005ce5, 0x1000d67a, 0x102c9d62
 */

char __thiscall GameClient::CombinRobot::PlayAnimationDown(
        GameClient::CombinRobot *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        bool a7)
{
  Model *v8; // ecx
  bool v9; // zf
  bool IsLoop; // al
  int v11; // edx
  int v13; // edx
  _DWORD *v14; // ebx
  bool v15; // al
  int v16; // ecx
  float AnimPosition; // [esp+30h] [ebp-90h]
  float v18; // [esp+30h] [ebp-90h]
  int v19; // [esp+48h] [ebp-78h] BYREF
  _BYTE v20[48]; // [esp+4Ch] [ebp-74h] BYREF
  int v21; // [esp+7Ch] [ebp-44h] BYREF
  _BYTE v22[48]; // [esp+80h] [ebp-40h] BYREF
  int v23; // [esp+BCh] [ebp-4h]

  v8 = (Model *)*((_DWORD *)this + 179);
  if ( !v8 || a2 == -1 )
    return 0;
  if ( a7 )
  {
    GameClient::CombinRobot::GetAnimHandle((int)&v19, a2);
    v9 = *((_BYTE *)this + 1260) == 0;
    v23 = 0;
    if ( !v9 )
    {
      Model::SetAnimationWeight(*((Model **)this + 179), *((_DWORD *)this + 374), 0.0, a3);
      Model::TransitionToAnimation(*((Model **)this + 179), a2, a3, a4, a6, a5);
    }
    *((_DWORD *)this + 374) = a2;
    *((float *)this + 376) = AnimationSet::GetDuration((AnimationSet *)v20);
    *((float *)this + 375) = a6;
    *((float *)this + 377) = a5;
    IsLoop = AnimationSet::IsLoop((AnimationSet *)v20);
    v9 = *((_BYTE *)this + 1488) == 0;
    v11 = v19;
    *((_BYTE *)this + 1512) = IsLoop;
    *((_DWORD *)this + 379) = v11;
    if ( !v9 )
    {
      AnimPosition = Model::GetAnimPosition(*((Model **)this + 179), *((_DWORD *)this + 374));
      GameClient::CombinRobot::PlayAnimationUp(this, *((_DWORD *)this + 368), 0.0, 1.0, a5, AnimPosition, 1);
    }
    v23 = -1;
    AnimationSet::~AnimationSet((AnimationSet *)v20);
    return 1;
  }
  v13 = *((_DWORD *)this + 374);
  v14 = (_DWORD *)((char *)this + 1496);
  if ( v13 != a2 )
  {
    if ( *((_BYTE *)this + 1512) || !(unsigned __int8)sub_10005CE5() )
    {
      GameClient::CombinRobot::GetAnimHandle((int)&v21, a2);
      v9 = *((_BYTE *)this + 1260) == 0;
      v23 = 1;
      if ( !v9 )
      {
        Model::SetAnimationWeight(*((Model **)this + 179), *v14, 0.0, a3);
        Model::TransitionToAnimation(*((Model **)this + 179), a2, a3, a4, a6, a5);
      }
      *v14 = a2;
      *((float *)this + 376) = AnimationSet::GetDuration((AnimationSet *)v22);
      *((float *)this + 375) = a6;
      *((float *)this + 377) = a5;
      v15 = AnimationSet::IsLoop((AnimationSet *)v22);
      v9 = *((_BYTE *)this + 1488) == 0;
      v16 = v21;
      *((_BYTE *)this + 1512) = v15;
      *((_DWORD *)this + 379) = v16;
      if ( !v9 )
      {
        v18 = Model::GetAnimPosition(*((Model **)this + 179), *v14);
        GameClient::CombinRobot::PlayAnimationUp(this, *((_DWORD *)this + 368), 0.0, 1.0, a5, v18, 1);
      }
      v23 = -1;
      AnimationSet::~AnimationSet((AnimationSet *)v22);
      return 1;
    }
    return 0;
  }
  if ( a5 != *((float *)this + 377) )
  {
    Model::SetAnimationSpeed(v8, v13, a5);
    *((float *)this + 377) = a5;
  }
  return 1;
}
