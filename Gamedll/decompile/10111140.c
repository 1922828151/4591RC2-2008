/*
 * func-name: ?PreRender@CombinRobot@GameClient@@UAEXPAVCamera@@@Z_0
 * func-address: 0x10111140
 * callers: 0x1000690b
 * callees: 0x10003f58, 0x1000815c, 0x1000a097, 0x1000d67a, 0x10013c50, 0x10016f5e, 0x1001718e, 0x10018e71, 0x102c0750, 0x102c0ed0
 */

void __thiscall GameClient::CombinRobot::PreRender(GameClient::CombinRobot *this, struct Camera *a2)
{
  CameraHandler *v3; // eax
  Camera *Camera; // eax
  char v5; // bl
  float v6; // [esp+28h] [ebp-A8h]
  float v7; // [esp+2Ch] [ebp-A4h]
  const struct BBox *WorldBBox; // [esp+30h] [ebp-A0h]
  float v9; // [esp+30h] [ebp-A0h]
  float v10; // [esp+34h] [ebp-9Ch]
  float v11; // [esp+4Ch] [ebp-84h]
  float v12; // [esp+4Ch] [ebp-84h]
  float v13; // [esp+4Ch] [ebp-84h]
  int v14[3]; // [esp+50h] [ebp-80h] BYREF
  _BYTE v15[40]; // [esp+5Ch] [ebp-74h] BYREF
  _BYTE v16[64]; // [esp+84h] [ebp-4Ch] BYREF
  int v17; // [esp+CCh] [ebp-4h]

  if ( *((_DWORD *)this + 179) )
  {
    sub_102C0ED0(v14);
    *(float *)&v14[1] = 0.0;
    sub_10018E71(v16, (int)v14);
    if ( *((_BYTE *)this + 1392) && *((_DWORD *)this + 349) )
    {
      sub_10016F5E(*((_DWORD *)this + 179) + 288);
      (***((void (__thiscall ****)(_DWORD, struct Camera *, _DWORD, int, _DWORD, GameClient::CombinRobot *, int))this
         + 349))(
        *((_DWORD *)this + 349),
        a2,
        *((_DWORD *)this + 178),
        1,
        0,
        this,
        1);
    }
    v11 = *((float *)this + 375) + GDeltaTime;
    *((float *)this + 375) = v11;
    if ( *((float *)this + 376) < (double)v11 && !*((_BYTE *)this + 1512) )
      *((float *)this + 375) = *((float *)this + 376);
    v12 = GDeltaTime + *((float *)this + 369);
    *((float *)this + 369) = v12;
    if ( *((float *)this + 370) < (double)v12 && !*((_BYTE *)this + 1488) )
      *((float *)this + 369) = *((float *)this + 370);
    v13 = *((float *)this + 352) + GDeltaTime;
    *((float *)this + 352) = v13;
    if ( *((float *)this + 353) < (double)v13 && !*((_BYTE *)this + 1420) )
      *((float *)this + 352) = *((float *)this + 353);
    WorldBBox = (const struct BBox *)StaticModel::GetWorldBBox(*((_DWORD *)this + 179), v15);
    v17 = 0;
    v3 = CameraHandler::Instance();
    Camera = CameraHandler::GetCamera(v3, 0);
    v5 = Camera::BoxInFrustum(Camera, WorldBBox, 0, 0) != 0;
    v17 = -1;
    sub_102C0750(v15);
    if ( *((_BYTE *)this + 1260) != v5 )
    {
      *((_BYTE *)this + 1260) = v5;
      if ( v5 )
      {
        v10 = *((float *)this + 375);
        v9 = 1.0;
        v7 = 1.0;
        v6 = 0.0;
        if ( *((_DWORD *)this + 379) == 2 )
        {
          GameClient::CombinRobot::PlayAnimation(this, *((_DWORD *)this + 374), v6, v7, v9, v10, 1);
        }
        else
        {
          GameClient::CombinRobot::PlayAnimationDown(this, *((_DWORD *)this + 374), v6, v7, v9, v10, 1);
          GameClient::CombinRobot::PlayAnimationUp(
            this,
            *((_DWORD *)this + 368),
            0.0,
            1.0,
            1.0,
            *((float *)this + 369),
            1);
        }
      }
      else
      {
        Model::ClearTrackAnimationSet(*((Model **)this + 179));
      }
    }
    GameClient::CombinActor::PreRender(this, a2);
  }
}
