/*
 * func-name: ?Tick@CStatusUI@@UAEXM@Z_0
 * func-address: 0x1028d320
 * callers: 0x1000cc07
 * callees: 0x1000194c, 0x10002c02, 0x10004d09, 0x10005f8d, 0x10007766, 0x10008260, 0x10008693, 0x10008e22, 0x10009061, 0x1000a3a8, 0x1000adc6, 0x1000dafd, 0x1000ed13, 0x1000faec, 0x10011f3b, 0x10013dd1, 0x100141cd
 */

void __thiscall CStatusUI::Tick(CStatusUI *this, float a2)
{
  int v3; // eax
  GameClient::RobotManager *v4; // eax
  struct GameClient::Robot *Robot; // eax
  struct GameClient::WorldObject *v6; // eax
  int v7; // eax
  struct GameClient::DamageUnit *v8; // eax
  int v9; // edi
  int v10; // edi
  GameClient::EstabManager *v11; // eax
  struct GameClient::Establishment *Establishment; // edi
  double *FunctionByType; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  struct GameClient::DamageUnit *v17; // eax
  int v18; // edi
  int v19; // edi
  float v20; // [esp+0h] [ebp-18h]
  unsigned int v21; // [esp+4h] [ebp-14h]
  float v22; // [esp+4h] [ebp-14h]
  float v23; // [esp+4h] [ebp-14h]
  int v24; // [esp+8h] [ebp-10h]
  float Energy; // [esp+10h] [ebp-8h]
  float v26; // [esp+14h] [ebp-4h]
  float v27; // [esp+14h] [ebp-4h]
  float v28; // [esp+14h] [ebp-4h]

  if ( !*((_DWORD *)this + 1004) )
  {
    v3 = sub_1000194C(0);
    if ( v3 )
    {
      v24 = *(_DWORD *)(v3 + 292);
      v4 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v4, v24);
      if ( Robot )
        *((_DWORD *)this + 1004) = Robot;
    }
  }
  v6 = (struct GameClient::WorldObject *)*((_DWORD *)this + 1004);
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 70) == -1 )
    {
      CStatusUI::RefreshData(this, v6);
      v7 = *((_DWORD *)this + 1004);
      if ( v7 )
        v8 = (struct GameClient::DamageUnit *)(v7 + 148);
      else
        v8 = 0;
      CStatusUI::RefreshArmor(this, v8);
      v9 = *((_DWORD *)this + 1011);
      *(float *)(v9 + 708) = GameClient::Robot::GetMaxEnergy((GameClient::Robot *)*((_DWORD *)this + 1004));
      *(float *)(v9 + 712) = 0.0;
      v10 = *((_DWORD *)this + 1012);
      *(float *)(v10 + 708) = GameClient::Robot::GetMaxExEnergy((GameClient::Robot *)*((_DWORD *)this + 1004));
      *(float *)(v10 + 712) = 0.0;
      Energy = GameClient::Robot::GetEnergy((GameClient::Robot *)*((_DWORD *)this + 1004));
      v26 = GameClient::Robot::GetExEnergy((GameClient::Robot *)*((_DWORD *)this + 1004));
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 1011) + 200))(LODWORD(Energy));
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 1012) + 200))(LODWORD(v26));
      CStatusUI::RefreshWeaponStatus(this);
    }
    else
    {
      v21 = *((_DWORD *)v6 + 70);
      v11 = GameClient::EstabManager::Instance();
      Establishment = GameClient::EstabManager::GetEstablishment(v11, v21);
      if ( Establishment )
      {
        CStatusUI::RefreshArmor(this, (struct GameClient::Establishment *)((char *)Establishment + 148));
        CStatusUI::RefreshData(this, Establishment);
        FunctionByType = (double *)GameClient::Establishment::GetFunctionByType(5);
        if ( FunctionByType )
        {
          v14 = *((_DWORD *)this + 1011);
          *(float *)(v14 + 708) = FunctionByType[10] + FunctionByType[8];
          *(float *)(v14 + 712) = 0.0;
          v15 = *((_DWORD *)this + 1012);
          *(float *)(v15 + 708) = FunctionByType[11] + FunctionByType[9];
          *(float *)(v15 + 712) = 0.0;
          v27 = FunctionByType[7];
          v22 = v27;
          v28 = FunctionByType[6];
          CStatusUI::RefreshEnergy(this, v28, v22);
        }
        CStatusUI::RefreshVehicleWeapon(this);
        CStatusUI::RefreshVehicleSeat(this);
      }
      else
      {
        CStatusUI::RefreshData(this, *((struct GameClient::WorldObject **)this + 1004));
        v16 = *((_DWORD *)this + 1004);
        if ( v16 )
          v17 = (struct GameClient::DamageUnit *)(v16 + 148);
        else
          v17 = 0;
        CStatusUI::RefreshArmor(this, v17);
        v18 = *((_DWORD *)this + 1011);
        *(float *)(v18 + 708) = GameClient::Robot::GetMaxEnergy((GameClient::Robot *)*((_DWORD *)this + 1004));
        *(float *)(v18 + 712) = 0.0;
        v19 = *((_DWORD *)this + 1012);
        *(float *)(v19 + 708) = GameClient::Robot::GetMaxExEnergy((GameClient::Robot *)*((_DWORD *)this + 1004));
        *(float *)(v19 + 712) = 0.0;
        v23 = GameClient::Robot::GetExEnergy((GameClient::Robot *)*((_DWORD *)this + 1004));
        v20 = GameClient::Robot::GetEnergy((GameClient::Robot *)*((_DWORD *)this + 1004));
        CStatusUI::RefreshEnergy(this, v20, v23);
      }
    }
    CStatusUI::FlashBuff(this);
  }
  CTYDialog::NestToEdge(this, 0xCu);
  CTYDialog::Tick(this, a2);
}
