/*
 * func-name: ?LocalMove@ControlledEstab@GameClient@@QAEXXZ_0
 * func-address: 0x1019e000
 * callers: 0x10009c23
 * callees: 0x10001b04, 0x1000290a, 0x100047af, 0x100077ed, 0x10008e6d, 0x1000a3a8, 0x1000b721, 0x1000b7e4, 0x1000d049, 0x1000d36e, 0x1000ed13, 0x1000f3b2, 0x10012530, 0x10013647, 0x10016a4f, 0x1001a0f5, 0x102c9d50
 */

void __thiscall GameClient::ControlledEstab::LocalMove(GameClient::ControlledEstab *this)
{
  double v2; // st7
  struct GameClient::Seat *DriverSeat; // eax
  int v4; // eax
  GameClient::RobotManager *v5; // eax
  struct GameClient::Robot *Robot; // eax
  int v7; // eax
  int v8; // esi
  int (__thiscall *v9)(int, _BYTE *); // edx
  int v10; // eax
  int v11; // eax
  struct GameClient::Seat *v12; // eax
  int v13; // eax
  GameClient::RobotManager *v14; // eax
  struct GameClient::Robot *v15; // ebx
  Outpop::Utility::Binary_Stream *v16; // eax
  Outpop::Utility::Ref_Object *v17; // esi
  Outpop::Utility::Ref_Object *v18; // ecx
  int v19; // ecx
  int i; // esi
  struct GameClient::Seat *Seat; // eax
  int v22; // eax
  GameClient::RobotManager *v23; // eax
  struct GameClient::Robot *v24; // eax
  int v25; // eax
  int v26; // [esp-8h] [ebp-A8h]
  int v27; // [esp+0h] [ebp-A0h]
  int v28; // [esp+8h] [ebp-98h]
  int v29; // [esp+8h] [ebp-98h]
  int v30; // [esp+8h] [ebp-98h]
  int v31; // [esp+8h] [ebp-98h]
  Outpop::Utility::Ref_Object *v32; // [esp+20h] [ebp-80h] BYREF
  float v33; // [esp+24h] [ebp-7Ch] BYREF
  int v34; // [esp+28h] [ebp-78h] BYREF
  int v35; // [esp+2Ch] [ebp-74h]
  _BYTE v36[12]; // [esp+30h] [ebp-70h] BYREF
  _BYTE v37[8]; // [esp+3Ch] [ebp-64h] BYREF
  int v38; // [esp+44h] [ebp-5Ch] BYREF
  int v39; // [esp+4Ch] [ebp-54h] BYREF
  int v40; // [esp+54h] [ebp-4Ch] BYREF
  void *v41; // [esp+58h] [ebp-48h]
  int v42; // [esp+5Ch] [ebp-44h]
  _DWORD v43[13]; // [esp+60h] [ebp-40h] BYREF
  int v44; // [esp+9Ch] [ebp-4h]

  v33 = GDeltaTime + *((float *)this + 126);
  v2 = v33;
  *((float *)this + 126) = v33;
  if ( v2 > 2.0 )
  {
    *((float *)this + 126) = 0.0;
    DriverSeat = GameClient::ControlledEstab::GetDriverSeat(this);
    if ( DriverSeat )
    {
      v4 = *((_DWORD *)DriverSeat + 19);
      if ( v4 != -1 )
      {
        v28 = v4;
        v5 = GameClient::RobotManager::Instance();
        Robot = GameClient::RobotManager::GetRobot(v5, v28);
        if ( Robot )
        {
          sub_10016A4F(*((_DWORD *)Robot + 4));
          sub_100077ED((int)&v32, 9, 5, COERCE_INT(0.0), 1, 512);
          v7 = *((_DWORD *)this + 114);
          v33 = *((float *)this + 3);
          v8 = *(_DWORD *)(v7 + 4);
          v9 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 264);
          v44 = 0;
          v29 = v9(v8, v36);
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 268))(v8);
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 232))(v8);
          v11 = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v8 + 236))(v8, &v39, v10);
          v26 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v8 + 36))(v8, v43, v11);
          sub_10001B04((int)&v33);
          sub_10012530(v26);
          sub_1000D049((int)&v38);
          sub_1000D049(v27);
          sub_1000D049((int)v37);
          sub_1000D049(v29);
          j_nullsub_44((int)&v32);
          v44 = -1;
          if ( v32 )
            Outpop::Utility::Ref_Object::release(v32);
        }
      }
    }
  }
  flt_103B6154 = GDeltaTime + flt_103B6154;
  if ( flt_103B6154 > 0.1000000014901161 )
  {
    flt_103B6154 = 0.0;
    v12 = GameClient::ControlledEstab::GetDriverSeat(this);
    if ( v12 )
    {
      v13 = *((_DWORD *)v12 + 19);
      if ( v13 != -1 )
      {
        v30 = v13;
        v14 = GameClient::RobotManager::Instance();
        v15 = GameClient::RobotManager::GetRobot(v14, v30);
        if ( v15 )
        {
          v35 = sub_10016A4F(*((_DWORD *)v15 + 4));
          v16 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
          v17 = v16;
          v34 = (int)v16;
          v44 = 1;
          if ( v16 )
          {
            Outpop::Utility::Binary_Stream::Binary_Stream(v16, 128);
            *(_DWORD *)v17 = &Outpop::Utility::Binary_Stream::`vftable';
            v18 = v17;
          }
          else
          {
            v18 = 0;
          }
          v44 = -1;
          v33 = *(float *)&v18;
          if ( v18 )
            Outpop::Utility::Ref_Object::addref(v18);
          v19 = *((_DWORD *)v15 + 3);
          v32 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 3);
          v34 = v19;
          v44 = 2;
          sub_10001B04((int)&v34);
          sub_10001B04((int)&v32);
          sub_1000B7E4((int)this + 24);
          sub_1000F3B2((int)this + 36);
          v41 = 0;
          v42 = 0;
          v43[0] = 0;
          LOBYTE(v44) = 3;
          for ( i = 0; i < GameClient::Establishment::GetSeatCount(this); ++i )
          {
            Seat = GameClient::Establishment::GetSeat(this, i);
            if ( Seat )
            {
              v22 = *((_DWORD *)Seat + 19);
              if ( v22 != -1 && v22 != *((_DWORD *)v15 + 3) )
              {
                v31 = v22;
                v23 = GameClient::RobotManager::Instance();
                v24 = GameClient::RobotManager::GetRobot(v23, v31);
                if ( v24 )
                {
                  if ( v24 != v15 )
                  {
                    v25 = *((_DWORD *)v24 + 4);
                    if ( v25 != -1 )
                    {
                      v34 = v25;
                      sub_1001A0F5(&v40, (int)&v34);
                    }
                  }
                }
              }
            }
          }
          sub_100047AF((int)&v34);
          LOBYTE(v44) = 4;
          sub_1000B721(v35, (int)&v40, 4358, (int)&v33);
          LOBYTE(v44) = 3;
          if ( v34 )
            Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v34);
          if ( v41 )
            operator delete(v41);
          v41 = 0;
          v42 = 0;
          v43[0] = 0;
          v44 = -1;
          if ( v33 != 0.0 )
            Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v33));
        }
      }
    }
  }
}
