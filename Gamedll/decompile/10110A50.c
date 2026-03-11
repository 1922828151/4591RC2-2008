/*
 * func-name: ?PlayAnimationUp@CombinRobot@GameClient@@QAE_NHMMMM_N@Z_0
 * func-address: 0x10110a50
 * callers: 0x1000d67a
 * callees: 0x10004f11, 0x10005ce5, 0x102c9d62
 */

char __thiscall GameClient::CombinRobot::PlayAnimationUp(
        Model **this,
        Model *a2,
        float a3,
        float a4,
        float a5,
        float AnimPosition,
        bool a7)
{
  bool IsLoop; // al
  Model *v10; // eax
  bool v11; // al
  Model *v12; // ecx
  Model *v13; // ecx
  Model **v14; // ebx
  bool v15; // al
  Model *v16; // edx
  Model *v17; // [esp+34h] [ebp-44h] BYREF
  _BYTE v18[48]; // [esp+38h] [ebp-40h] BYREF
  int v19; // [esp+74h] [ebp-4h]

  if ( this[179] && a2 != (Model *)-1 )
  {
    GameClient::CombinRobot::GetAnimHandle((int)&v17, (int)a2);
    v19 = 0;
    IsLoop = AnimationSet::IsLoop((AnimationSet *)v18);
    if ( a7 )
    {
      if ( IsLoop && *((_BYTE *)this + 1512) )
        AnimPosition = Model::GetAnimPosition(this[179], this[374]);
      if ( *((_BYTE *)this + 1260) )
      {
        Model::SetAnimationWeight(this[179], this[368], 0.0, a3);
        Model::TransitionToAnimation(this[179], a2, a3, a4, AnimPosition, a5);
      }
      this[368] = a2;
      *((float *)this + 370) = AnimationSet::GetDuration((AnimationSet *)v18);
      *((float *)this + 369) = AnimPosition;
      *((float *)this + 371) = a5;
      *((_BYTE *)this + 1488) = AnimationSet::IsLoop((AnimationSet *)v18);
      this[373] = v17;
      goto LABEL_10;
    }
    if ( !IsLoop )
    {
      v10 = this[368];
      if ( v10 != a2 )
      {
        if ( *((_BYTE *)this + 1260) )
        {
          Model::SetAnimationWeight(this[179], v10, 0.0, a3);
          Model::TransitionToAnimation(this[179], a2, a3, a4, AnimPosition, a5);
        }
        this[368] = a2;
        *((float *)this + 370) = AnimationSet::GetDuration((AnimationSet *)v18);
        *((float *)this + 369) = AnimPosition;
        *((float *)this + 371) = a5;
        v11 = AnimationSet::IsLoop((AnimationSet *)v18);
        v12 = v17;
        *((_BYTE *)this + 1488) = v11;
        this[373] = v12;
        goto LABEL_10;
      }
      Model::SetAnimPosition(this[179], v10, AnimPosition);
      if ( a5 == *((float *)this + 371) )
      {
LABEL_10:
        v19 = -1;
        AnimationSet::~AnimationSet((AnimationSet *)v18);
        return 1;
      }
      Model::SetAnimationSpeed(this[179], this[368], a5);
LABEL_18:
      *((float *)this + 371) = a5;
      goto LABEL_10;
    }
    v13 = this[368];
    v14 = this + 368;
    if ( v13 == a2 )
    {
      if ( a5 == *((float *)this + 371) )
        goto LABEL_10;
      Model::SetAnimationSpeed(this[179], v13, a5);
      goto LABEL_18;
    }
    if ( *((_BYTE *)this + 1488) || !(unsigned __int8)sub_10005CE5() )
    {
      if ( AnimationSet::IsLoop((AnimationSet *)v18) && *((_BYTE *)this + 1512) )
        AnimPosition = Model::GetAnimPosition(this[179], this[374]);
      if ( *((_BYTE *)this + 1260) )
      {
        Model::SetAnimationWeight(this[179], *v14, 0.0, a3);
        Model::TransitionToAnimation(this[179], a2, a3, a4, AnimPosition, a5);
      }
      *v14 = a2;
      *((float *)this + 370) = AnimationSet::GetDuration((AnimationSet *)v18);
      *((float *)this + 369) = AnimPosition;
      *((float *)this + 371) = a5;
      v15 = AnimationSet::IsLoop((AnimationSet *)v18);
      v16 = v17;
      *((_BYTE *)this + 1488) = v15;
      this[373] = v16;
      goto LABEL_10;
    }
    v19 = -1;
    AnimationSet::~AnimationSet((AnimationSet *)v18);
  }
  return 0;
}
