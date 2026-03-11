/*
 * func-name: ?PlayAnimation@CombinRobot@GameClient@@QAE_NHMMMM_N@Z_0
 * func-address: 0x10110790
 * callers: 0x1000815c
 * callees: 0x10004f11, 0x10005ce5, 0x102c9d62
 */

char __thiscall GameClient::CombinRobot::PlayAnimation(
        GameClient::CombinRobot *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        bool a7)
{
  bool v8; // zf
  bool IsLoop; // al
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  _DWORD *v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // [esp+20h] [ebp-78h] BYREF
  _BYTE v23[48]; // [esp+24h] [ebp-74h] BYREF
  int v24; // [esp+54h] [ebp-44h] BYREF
  _BYTE v25[48]; // [esp+58h] [ebp-40h] BYREF
  int v26; // [esp+94h] [ebp-4h]

  if ( !*((_DWORD *)this + 179) || a2 == -1 )
    return 0;
  if ( a7 )
  {
    GameClient::CombinRobot::GetAnimHandle((int)&v22, a2);
    v8 = *((_BYTE *)this + 1260) == 0;
    v26 = 0;
    if ( !v8 )
    {
      Model::ClearTrackAnimationSet(*((Model **)this + 179));
      Model::TransitionToAnimation(*((Model **)this + 179), a2, a3, a4, a6, a5);
    }
    *((_DWORD *)this + 374) = a2;
    *((float *)this + 376) = AnimationSet::GetDuration((AnimationSet *)v23);
    *((float *)this + 375) = a6;
    *((float *)this + 377) = a5;
    IsLoop = AnimationSet::IsLoop((AnimationSet *)v23);
    *((_DWORD *)this + 379) = v22;
    *((_BYTE *)this + 1512) = IsLoop;
    v10 = *((_DWORD *)this + 375);
    v11 = *((_DWORD *)this + 376);
    *((_DWORD *)this + 368) = *((_DWORD *)this + 374);
    v12 = *((_DWORD *)this + 377);
    *((_DWORD *)this + 369) = v10;
    v13 = *((_DWORD *)this + 378);
    *((_DWORD *)this + 370) = v11;
    v14 = *((_DWORD *)this + 379);
    *((_DWORD *)this + 371) = v12;
    *((_DWORD *)this + 372) = v13;
    *((_DWORD *)this + 373) = v14;
    v26 = -1;
    AnimationSet::~AnimationSet((AnimationSet *)v23);
    return 1;
  }
  v16 = (_DWORD *)((char *)this + 1496);
  if ( *((_DWORD *)this + 374) == a2 || !*((_BYTE *)this + 1512) && (unsigned __int8)sub_10005CE5() )
    return 0;
  GameClient::CombinRobot::GetAnimHandle((int)&v24, a2);
  v8 = *((_BYTE *)this + 1260) == 0;
  v26 = 1;
  if ( !v8 )
  {
    Model::ClearTrackAnimationSet(*((Model **)this + 179));
    Model::TransitionToAnimation(*((Model **)this + 179), a2, a3, a4, a6, a5);
  }
  *v16 = a2;
  *((float *)this + 376) = AnimationSet::GetDuration((AnimationSet *)v25);
  *((float *)this + 375) = a6;
  *((float *)this + 377) = a5;
  *((_BYTE *)this + 1512) = AnimationSet::IsLoop((AnimationSet *)v25);
  *((_DWORD *)this + 379) = v24;
  v17 = *((_DWORD *)this + 375);
  v18 = *((_DWORD *)this + 376);
  *((_DWORD *)this + 368) = *v16;
  v19 = *((_DWORD *)this + 377);
  *((_DWORD *)this + 369) = v17;
  v20 = *((_DWORD *)this + 378);
  *((_DWORD *)this + 370) = v18;
  v21 = *((_DWORD *)this + 379);
  *((_DWORD *)this + 371) = v19;
  *((_DWORD *)this + 372) = v20;
  *((_DWORD *)this + 373) = v21;
  v26 = -1;
  AnimationSet::~AnimationSet((AnimationSet *)v25);
  return 1;
}
