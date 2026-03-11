/*
 * func-name: ?Move@WheelVehicle@GameClient@@QAEXKK_N@Z_0
 * func-address: 0x101bab60
 * callers: 0x10002ea5
 * callees: 0x10001b04, 0x10006618, 0x100077ed, 0x10009c23, 0x1000a3a8, 0x1000b7e4, 0x1000ed13, 0x1000f3b2, 0x10013647, 0x10015eab, 0x10016a4f
 */

void __thiscall GameClient::WheelVehicle::Move(
        GameClient::WheelVehicle *this,
        unsigned int a2,
        unsigned int a3,
        bool a4)
{
  int v5; // eax
  bool v6; // cl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // eax
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ebx
  GameClient::RobotManager *v16; // eax
  struct GameClient::Robot *Robot; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // esi
  int (__thiscall *v21)(int, _BYTE *); // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [esp+Ch] [ebp-118h]
  int v27; // [esp+14h] [ebp-110h]
  int v28; // [esp+14h] [ebp-110h]
  Outpop::Utility::Ref_Object *v29; // [esp+2Ch] [ebp-F8h] BYREF
  unsigned int v30; // [esp+30h] [ebp-F4h] BYREF
  int v31; // [esp+34h] [ebp-F0h] BYREF
  unsigned int v32; // [esp+38h] [ebp-ECh] BYREF
  _BYTE v33[12]; // [esp+3Ch] [ebp-E8h] BYREF
  _BYTE v34[12]; // [esp+48h] [ebp-DCh] BYREF
  _BYTE v35[8]; // [esp+54h] [ebp-D0h] BYREF
  _BYTE v36[12]; // [esp+5Ch] [ebp-C8h] BYREF
  _BYTE v37[16]; // [esp+68h] [ebp-BCh] BYREF
  _BYTE v38[12]; // [esp+78h] [ebp-ACh] BYREF
  _BYTE v39[12]; // [esp+84h] [ebp-A0h] BYREF
  _BYTE v40[12]; // [esp+90h] [ebp-94h] BYREF
  _BYTE v41[12]; // [esp+9Ch] [ebp-88h] BYREF
  _BYTE v42[48]; // [esp+A8h] [ebp-7Ch] BYREF
  int v43; // [esp+D8h] [ebp-4Ch]
  int v44; // [esp+DCh] [ebp-48h]
  int v45; // [esp+E0h] [ebp-44h]
  _BYTE v46[48]; // [esp+E8h] [ebp-3Ch] BYREF
  int v47; // [esp+120h] [ebp-4h]

  v5 = *((_DWORD *)this + 134);
  if ( v5 )
  {
    v6 = a4;
    if ( *((_DWORD *)this + 136) == a3 && *((_DWORD *)this + 137) == a2 && *((_BYTE *)this + 552) == a4 )
    {
      GameClient::ControlledEstab::LocalMove(this);
    }
    else
    {
      *((_DWORD *)this + 136) = a3;
      *((_DWORD *)this + 137) = a2;
      *((_BYTE *)this + 552) = v6;
      v7 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v5 + 4) + 40))(*(_DWORD *)(v5 + 4), v34);
      NxHelper::ToVector(v33, v7);
      v8 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 36))(
             *(_DWORD *)(*((_DWORD *)this + 134) + 4),
             v46);
      NxHelper::ToMatrix(v42, v8);
      v9 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 232))(
             *(_DWORD *)(*((_DWORD *)this + 134) + 4),
             v34);
      v10 = (int *)NxHelper::ToVector(v40, v9);
      v43 = *v10;
      v44 = v10[1];
      v11 = v10[2];
      v12 = *((_DWORD *)this + 135);
      v45 = v11;
      v13 = *(_DWORD *)(v12 + 516);
      v14 = *((_DWORD *)this + 49);
      if ( !v14 || v13 >= (*((_DWORD *)this + 50) - v14) >> 2 )
        _invalid_parameter_noinfo();
      v15 = *(_DWORD *)(*((_DWORD *)this + 49) + 4 * v13);
      v27 = *(_DWORD *)(v15 + 76);
      v16 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v16, v27);
      sub_10016A4F(*((_DWORD *)Robot + 4));
      sub_100077ED((int)&v29, 9, 254, COERCE_INT(0.0), 1, 512);
      v18 = *(_DWORD *)(v15 + 88);
      v32 = a3;
      v19 = *((_DWORD *)this + 134);
      v30 = a2;
      v31 = *(_DWORD *)(v18 + 12);
      v20 = *(_DWORD *)(v19 + 4);
      v21 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v20 + 236);
      v47 = 0;
      v22 = v21(v20, v35);
      v28 = NxHelper::ToVector(v38, v22);
      v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 268))(v20);
      v24 = NxHelper::ToVector(v36, v23);
      v25 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v20 + 264))(v20, v37, v24);
      v26 = NxHelper::ToVector(v39, v25);
      sub_10001B04((int)&v31);
      sub_10015EAB((int)&v30);
      sub_10015EAB((int)&v32);
      sub_10006618((int)&a4);
      sub_1000B7E4((int)v33);
      sub_1000F3B2((int)v42);
      sub_1000B7E4(v26);
      sub_1000B7E4((int)v41);
      sub_1000B7E4(v28);
      j_nullsub_44((int)&v29);
      v47 = -1;
      if ( v29 )
        Outpop::Utility::Ref_Object::release(v29);
    }
  }
}
