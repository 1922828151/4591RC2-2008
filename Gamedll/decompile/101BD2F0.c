/*
 * func-name: ?InitController@EstabControllerManager@GameClient@@IAEXXZ_0
 * func-address: 0x101bd2f0
 * callers: 0x1000ff33
 * callees: 0x1000383c, 0x10006799, 0x100108ed, 0x10017fc1, 0x100181c9, 0x10019687, 0x102c9d98
 */

void __thiscall GameClient::EstabControllerManager::InitController(GameClient::EstabControllerManager *this)
{
  GameClient::WheelVehicleController *v1; // eax
  int v2; // eax
  GameClient::SuspendVehicleController *v3; // eax
  int v4; // eax
  GameClient::PedrailVehicleController *v5; // eax
  int v6; // eax
  GameClient::AircraftVehicleController *v7; // eax
  int v8; // eax
  GameClient::PassengerController *v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+14h] [ebp-1Ch]
  _BYTE v13[12]; // [esp+18h] [ebp-18h] BYREF
  int v14; // [esp+2Ch] [ebp-4h]

  v1 = (GameClient::WheelVehicleController *)operator new(0x10u);
  v11 = (int)v1;
  v14 = 0;
  if ( v1 )
    v2 = GameClient::WheelVehicleController::WheelVehicleController(v1);
  else
    v2 = 0;
  v12 = v2;
  v14 = -1;
  v11 = 1;
  sub_10017FC1((int)v13, (int)&v11);
  v3 = (GameClient::SuspendVehicleController *)operator new(0x10u);
  v11 = (int)v3;
  v14 = 1;
  if ( v3 )
    v4 = GameClient::SuspendVehicleController::SuspendVehicleController(v3);
  else
    v4 = 0;
  v12 = v4;
  v14 = -1;
  v11 = 2;
  sub_10017FC1((int)v13, (int)&v11);
  v5 = (GameClient::PedrailVehicleController *)operator new(0x10u);
  v11 = (int)v5;
  v14 = 2;
  if ( v5 )
    v6 = GameClient::PedrailVehicleController::PedrailVehicleController(v5);
  else
    v6 = 0;
  v14 = -1;
  v11 = 3;
  v12 = v6;
  sub_10017FC1((int)v13, (int)&v11);
  v7 = (GameClient::AircraftVehicleController *)operator new(0x1Cu);
  v11 = (int)v7;
  v14 = 3;
  if ( v7 )
    v8 = GameClient::AircraftVehicleController::AircraftVehicleController(v7);
  else
    v8 = 0;
  v12 = v8;
  v14 = -1;
  v11 = 4;
  sub_10017FC1((int)v13, (int)&v11);
  v9 = (GameClient::PassengerController *)operator new(8u);
  v11 = (int)v9;
  v14 = 4;
  if ( v9 )
    v10 = GameClient::PassengerController::PassengerController(v9);
  else
    v10 = 0;
  v12 = v10;
  v14 = -1;
  v11 = 6;
  sub_10017FC1((int)v13, (int)&v11);
}
