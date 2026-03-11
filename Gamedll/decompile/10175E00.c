/*
 * func-name: ?Jump@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x10175e00
 * callers: 0x10019ccc
 * callees: 0x10006a19, 0x100077ed, 0x10009886, 0x1000b7e4, 0x1000d67a, 0x10013647, 0x10013c50, 0x10018f25, 0x102c0ed0
 */

void __thiscall GameClient::Robot::Jump(GameClient::Robot *this)
{
  int v2; // eax
  int *v3; // ecx
  int v4; // eax
  float v5; // [esp+0h] [ebp-3Ch]
  float v6; // [esp+4h] [ebp-38h]
  float v7; // [esp+8h] [ebp-34h]
  float v8; // [esp+Ch] [ebp-30h]
  int v9; // [esp+10h] [ebp-2Ch]
  Outpop::Utility::Ref_Object *v10; // [esp+20h] [ebp-1Ch] BYREF
  _BYTE v11[12]; // [esp+24h] [ebp-18h] BYREF
  int v12; // [esp+38h] [ebp-4h]

  v2 = *((_DWORD *)this + 50);
  if ( v2 )
  {
    v3 = (int *)*((_DWORD *)this + 43);
    *((_DWORD *)this + 88) = 3;
    *((float *)this + 189) = (float)*(int *)(*(_DWORD *)(v2 + 8) + 336);
    GameClient::CombinRobot::PlayAnimationDown((GameClient::CombinRobot *)v3, v3[421], 0.0, 1.0, 1.0, 0.0, 1);
    v8 = 0.0;
    v7 = 1.0;
    v6 = 1.0;
    v5 = 0.0;
    if ( *((_DWORD *)this + 57) )
    {
      v4 = sub_10009886(*((_DWORD *)this + 58) - 1);
      GameClient::CombinRobot::PlayAnimationUp(
        *((GameClient::CombinRobot **)this + 43),
        *(_DWORD *)(v4 + 48),
        v5,
        v6,
        v7,
        v8,
        1);
    }
    else
    {
      GameClient::CombinRobot::PlayAnimationUp(
        *((GameClient::CombinRobot **)this + 43),
        *(_DWORD *)(*((_DWORD *)this + 43) + 1652),
        v5,
        v6,
        v7,
        v8,
        1);
    }
    if ( GameClient::WorldObject::IsLocal(this) )
    {
      *((float *)this + 196) = 0.0;
      *((float *)this + 197) = 0.0;
      sub_100077ED((int)&v10, 9, 6, COERCE_INT(0.0), 1, 512);
      v12 = 0;
      v9 = sub_102C0ED0(v11);
      sub_10018F25((int)this + 744);
      sub_1000B7E4((int)this + 24);
      sub_1000B7E4(v9);
      j_nullsub_44((int)&v10);
      v12 = -1;
      if ( v10 )
        Outpop::Utility::Ref_Object::release(v10);
    }
  }
}
