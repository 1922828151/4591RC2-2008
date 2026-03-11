/*
 * func-name: ?Move@AircraftVehicle@GameClient@@QAEXKKK@Z_0
 * func-address: 0x101b64d0
 * callers: 0x100115cc
 * callees: 0x10001b04, 0x100077ed, 0x10009c23, 0x1000a3a8, 0x1000b7e4, 0x1000ed13, 0x1000f3b2, 0x10013647, 0x10016a4f
 */

void __thiscall GameClient::AircraftVehicle::Move(
        GameClient::AircraftVehicle *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int *v11; // eax
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ebx
  GameClient::RobotManager *v17; // eax
  struct GameClient::Robot *Robot; // eax
  int v19; // ecx
  int v20; // esi
  int (__thiscall *v21)(int, _BYTE *); // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [esp+Ch] [ebp-110h]
  int v27; // [esp+14h] [ebp-108h]
  int v28; // [esp+14h] [ebp-108h]
  Outpop::Utility::Ref_Object *v29; // [esp+2Ch] [ebp-F0h] BYREF
  int v30; // [esp+30h] [ebp-ECh] BYREF
  _BYTE v31[12]; // [esp+34h] [ebp-E8h] BYREF
  _BYTE v32[12]; // [esp+40h] [ebp-DCh] BYREF
  _BYTE v33[8]; // [esp+4Ch] [ebp-D0h] BYREF
  _BYTE v34[12]; // [esp+54h] [ebp-C8h] BYREF
  _BYTE v35[16]; // [esp+60h] [ebp-BCh] BYREF
  _BYTE v36[12]; // [esp+70h] [ebp-ACh] BYREF
  _BYTE v37[12]; // [esp+7Ch] [ebp-A0h] BYREF
  _BYTE v38[12]; // [esp+88h] [ebp-94h] BYREF
  _BYTE v39[12]; // [esp+94h] [ebp-88h] BYREF
  _BYTE v40[48]; // [esp+A0h] [ebp-7Ch] BYREF
  int v41; // [esp+D0h] [ebp-4Ch]
  int v42; // [esp+D4h] [ebp-48h]
  int v43; // [esp+D8h] [ebp-44h]
  _BYTE v44[48]; // [esp+E0h] [ebp-3Ch] BYREF
  int v45; // [esp+118h] [ebp-4h]

  v5 = *((_DWORD *)this + 134);
  if ( v5 )
  {
    v6 = a4;
    v7 = a2;
    if ( *((_DWORD *)this + 136) == a3 && *((_DWORD *)this + 137) == a2 && *((_DWORD *)this + 138) == a4 )
    {
      GameClient::ControlledEstab::LocalMove(this);
    }
    else
    {
      *((_DWORD *)this + 136) = a3;
      *((_DWORD *)this + 138) = v6;
      *((_DWORD *)this + 137) = v7;
      v8 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v5 + 4) + 40))(*(_DWORD *)(v5 + 4), v32);
      NxHelper::ToVector(v31, v8);
      v9 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 36))(
             *(_DWORD *)(*((_DWORD *)this + 134) + 4),
             v44);
      NxHelper::ToMatrix(v40, v9);
      v10 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 232))(
              *(_DWORD *)(*((_DWORD *)this + 134) + 4),
              v32);
      v11 = (int *)NxHelper::ToVector(v36, v10);
      v41 = *v11;
      v42 = v11[1];
      v12 = v11[2];
      v13 = *((_DWORD *)this + 135);
      v43 = v12;
      v14 = *(_DWORD *)(v13 + 516);
      v15 = *((_DWORD *)this + 49);
      if ( !v15 || v14 >= (*((_DWORD *)this + 50) - v15) >> 2 )
        _invalid_parameter_noinfo();
      v16 = *(_DWORD *)(*((_DWORD *)this + 49) + 4 * v14);
      v27 = *(_DWORD *)(v16 + 76);
      v17 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v17, v27);
      sub_10016A4F(*((_DWORD *)Robot + 4));
      sub_100077ED((int)&v29, 9, 1, COERCE_INT(0.0), 1, 512);
      v19 = *((_DWORD *)this + 134);
      v30 = *(_DWORD *)(*(_DWORD *)(v16 + 88) + 12);
      v20 = *(_DWORD *)(v19 + 4);
      v21 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v20 + 236);
      v45 = 0;
      v22 = v21(v20, v38);
      v28 = NxHelper::ToVector(v33, v22);
      v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 268))(v20);
      v24 = NxHelper::ToVector(v34, v23);
      v25 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v20 + 264))(v20, v35, v24);
      v26 = NxHelper::ToVector(v37, v25);
      sub_10001B04((int)&v30);
      sub_10001B04((int)&a2);
      sub_10001B04((int)&a3);
      sub_10001B04((int)&a4);
      sub_1000B7E4((int)v31);
      sub_1000F3B2((int)v40);
      sub_1000B7E4(v26);
      sub_1000B7E4((int)v39);
      sub_1000B7E4(v28);
      j_nullsub_44((int)&v29);
      v45 = -1;
      if ( v29 )
        Outpop::Utility::Ref_Object::release(v29);
    }
  }
}
