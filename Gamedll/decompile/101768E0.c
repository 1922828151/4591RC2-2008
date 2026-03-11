/*
 * func-name: ?SetCurEquip@Robot@GameClient@@QAEXHH@Z_0
 * func-address: 0x101768e0
 * callers: 0x10001573
 * callees: 0x10004589, 0x10006a19, 0x10009886, 0x1000d67a, 0x1000d8be, 0x1000dd50, 0x10012cf1, 0x10016f95, 0x1001816a
 */

void __thiscall GameClient::Robot::SetCurEquip(GameClient::Robot *this, unsigned int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  GameClient::CombinRobot *v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // edi
  int v27; // eax
  GameClient::CombinRobot *v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // eax
  int v35; // eax
  int v36; // eax
  Event *v37; // eax
  int v38; // ebp
  struct BinStream *Stream; // edi
  int v40; // ecx
  float v41; // [esp+4h] [ebp-98h]
  float v42; // [esp+8h] [ebp-94h]
  char v43; // [esp+10h] [ebp-8Ch]
  _BYTE v44[4]; // [esp+28h] [ebp-74h] BYREF
  _BYTE v45[48]; // [esp+2Ch] [ebp-70h] BYREF
  _BYTE v46[4]; // [esp+5Ch] [ebp-40h] BYREF
  _BYTE v47[48]; // [esp+60h] [ebp-3Ch] BYREF
  int v48; // [esp+98h] [ebp-4h]

  v4 = *((_DWORD *)this + 57);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 176);
    if ( v5 )
      *(_BYTE *)(v5 + 4) = 0;
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 57) + 172))(*((_DWORD *)this + 57));
  }
  v6 = 1.0;
  if ( (int)a2 > 0 )
  {
    v12 = *((_DWORD *)this + 63);
    if ( v12 )
      v13 = (*((_DWORD *)this + 64) - v12) >> 2;
    else
      v13 = 0;
    if ( a2 > v13 )
    {
      if ( v12 )
        v19 = (*((_DWORD *)this + 64) - v12) >> 2;
      else
        v19 = 0;
      v20 = a2 - v19;
      if ( a2 != v19 )
      {
        v21 = *((_DWORD *)this + 67);
        if ( v21 )
          v22 = (*((_DWORD *)this + 68) - v21) >> 2;
        else
          v22 = 0;
        if ( v20 <= v22 )
          *((_DWORD *)this + 57) = *(_DWORD *)sub_10012CF1(v20 - 1);
        *((_DWORD *)this + 58) = a2;
        if ( a3 != -1 )
        {
          v23 = *((_DWORD *)this + 63);
          if ( v23 )
            v24 = (*((_DWORD *)this + 64) - v23) >> 2;
          else
            v24 = 0;
          *((_DWORD *)this + 57) = *(_DWORD *)sub_10012CF1(a3 - v24 - 1);
        }
      }
    }
    else
    {
      *((_DWORD *)this + 59) = *((_DWORD *)this + 58);
      v14 = *((_DWORD *)this + 63);
      v15 = a2 - 1;
      if ( !v14 || v15 >= (*((_DWORD *)this + 64) - v14) >> 2 )
      {
        _invalid_parameter_noinfo();
        v6 = 1.0;
      }
      *((_DWORD *)this + 57) = *(_DWORD *)(*((_DWORD *)this + 63) + 4 * v15);
      *((_DWORD *)this + 58) = a2;
      if ( a3 != -1 )
      {
        v16 = *((_DWORD *)this + 63);
        if ( v16 )
          v17 = (*((_DWORD *)this + 64) - v16) >> 2;
        else
          v17 = 0;
        v6 = 1.0;
        *((_DWORD *)this + 57) = *(_DWORD *)sub_10012CF1(a3 - v17 - 1);
      }
      v42 = v6;
      v41 = v6;
      v18 = sub_10009886(*((_DWORD *)this + 58) - 1);
      GameClient::CombinRobot::PlayAnimationUp(
        *((GameClient::CombinRobot **)this + 43),
        *(_DWORD *)(v18 + 256),
        0.2,
        v41,
        v42,
        0.0,
        1);
    }
  }
  else
  {
    v7 = *((_DWORD *)this + 57);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      v9 = sub_10009886(*((_DWORD *)this + 58) - 1);
      GameClient::CombinRobot::PlayAnimationUp(
        *((GameClient::CombinRobot **)this + 43),
        *(_DWORD *)(v9 + 204),
        0.2,
        1.0,
        1.0,
        0.0,
        1);
      if ( GameClient::WorldObject::IsLocal(this) && *(_DWORD *)(v8 + 308) != 3 )
      {
        v10 = *(_DWORD *)(GameClient::CombinRobot::GetAnimFPV((int)v44, v8 + 1068) + 48);
        v11 = (GameClient::CombinRobot *)*((_DWORD *)this + 43);
        v48 = 0;
        GameClient::CombinRobot::PlayAnimationFPV(v11, v10, 0.2, 1.0, 1.0, 0.0, 1);
        v48 = -1;
        AnimationSet::~AnimationSet((AnimationSet *)v45);
      }
    }
    *((_DWORD *)this + 59) = *((_DWORD *)this + 58);
    *((_DWORD *)this + 57) = 0;
    *((_DWORD *)this + 58) = a2;
  }
  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v43 = *((_BYTE *)this + 700);
    *((float *)this + 167) = 100.0;
    *((_DWORD *)this + 165) = 1;
    GameClient::Robot::ChangeViewMode(this, v43);
    v25 = *((_DWORD *)this + 57);
    if ( v25 )
    {
      v26 = *(_DWORD *)(v25 + 8);
      if ( *(_DWORD *)(v26 + 308) == 3 )
      {
        v32 = *((_DWORD *)this + 43);
        if ( *(_DWORD *)(v32 + 1804) )
        {
          v33 = *(_DWORD *)(v32 + 1808);
          if ( v33 )
          {
            *(_BYTE *)(v33 + 376) = 1;
            *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 43) + 1804) + 376) = 1;
          }
        }
      }
      else
      {
        GameClient::CombinRobot::UpdateTransformFPV(
          *((GameClient::CombinRobot **)this + 43),
          (GameClient::Robot *)((char *)this + 588),
          (GameClient::Robot *)((char *)this + 576));
        v27 = *(_DWORD *)(GameClient::CombinRobot::GetAnimFPV((int)v46, v26 + 1096) + 48);
        v28 = (GameClient::CombinRobot *)*((_DWORD *)this + 43);
        v48 = 1;
        GameClient::CombinRobot::PlayAnimationFPV(v28, v27, 0.2, 1.0, 1.0, 0.0, 1);
        v48 = -1;
        AnimationSet::~AnimationSet((AnimationSet *)v47);
        v29 = *((_DWORD *)this + 43);
        if ( *(_DWORD *)(v29 + 1804) )
        {
          v30 = *(_DWORD *)(v29 + 1808);
          if ( v30 )
          {
            v31 = *(_DWORD *)(v26 + 308);
            if ( v31 )
            {
              *(_BYTE *)(v30 + 376) = 0;
              *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 43) + 1804) + 376) = v31 == 1;
            }
            else
            {
              *(_BYTE *)(v30 + 376) = 1;
              *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 43) + 1804) + 376) = 0;
            }
          }
        }
      }
      v34 = (_DWORD *)(*((_DWORD *)this + 43) + 1428);
      *v34 = *(_DWORD *)(v26 + 340);
      v34[1] = *(_DWORD *)(v26 + 344);
      v34[2] = *(_DWORD *)(v26 + 348);
      v35 = *(_DWORD *)(*((_DWORD *)this + 57) + 176);
      if ( v35 )
      {
        *(_BYTE *)(v35 + 4) = 1;
        if ( !*(_DWORD *)(v26 + 316) )
        {
          *(float *)(*(_DWORD *)(*((_DWORD *)this + 57) + 176) + 12) = *(float *)(v26 + 532);
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 57) + 176) + 20) = *(_DWORD *)(v26 + 536);
          *(float *)(*(_DWORD *)(*((_DWORD *)this + 57) + 176) + 8) = 0.0;
        }
      }
    }
    v36 = EventAttemper::Instance(9, 4151);
    v37 = (Event *)EventAttemper::AddEvent(v36);
    v38 = *((_DWORD *)this + 3);
    Stream = Event::GetStream(v37);
    sub_1001816A(4);
    *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v38;
    *((_DWORD *)Stream + 2) += 4;
  }
  v40 = *((_DWORD *)this + 57);
  if ( v40 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 176))(v40);
}
