/*
 * func-name: ?updateHeartbeatSynch@Robot@GameClient@@IAEXXZ_0
 * func-address: 0x10174690
 * callers: 0x100191e6
 * callees: 0x100077ed, 0x1000b7e4, 0x10013647, 0x10018f25, 0x102c0ed0
 */

void __thiscall GameClient::Robot::updateHeartbeatSynch(GameClient::Robot *this)
{
  double v2; // st7
  int v3; // eax
  Outpop::Utility::Ref_Object *v4; // ecx
  double v5; // st7
  int v6; // [esp+8h] [ebp-30h]
  Outpop::Utility::Ref_Object *v7; // [esp+18h] [ebp-20h] BYREF
  float v8; // [esp+1Ch] [ebp-1Ch] BYREF
  _BYTE v9[12]; // [esp+20h] [ebp-18h] BYREF
  int v10; // [esp+34h] [ebp-4h]

  if ( !*((_DWORD *)this + 89) )
  {
    v8 = GDeltaTime + *((float *)this + 197);
    v2 = v8;
    *((float *)this + 197) = v8;
    if ( v2 <= 1.0 )
      return;
    *((float *)this + 196) = 0.0;
    *((float *)this + 197) = 0.0;
    sub_100077ED((int)&v7, 9, 5, COERCE_INT(0.0), 1, 512);
    v10 = 0;
    v3 = sub_102C0ED0(v9);
    sub_1000B7E4(v3);
    j_nullsub_44((int)&v7);
    v4 = v7;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 88) != 4 )
  {
    v8 = *((float *)this + 196) + GDeltaTime;
    v5 = v8;
    *((float *)this + 196) = v8;
    if ( v5 > 3.0 )
    {
      *((float *)this + 196) = 0.0;
      *((float *)this + 197) = 0.0;
      sub_100077ED((int)&v8, 9, 4, COERCE_INT(0.0), 1, 512);
      v10 = 1;
      v6 = sub_102C0ED0(v9);
      sub_10018F25((int)this + 744);
      sub_1000B7E4((int)this + 24);
      sub_1000B7E4(v6);
      j_nullsub_44((int)&v8);
      v4 = (Outpop::Utility::Ref_Object *)LODWORD(v8);
LABEL_7:
      v10 = -1;
      if ( v4 )
        Outpop::Utility::Ref_Object::release(v4);
    }
  }
}
