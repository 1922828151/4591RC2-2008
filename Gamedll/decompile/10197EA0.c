/*
 * func-name: ?AutoShoot@Weapon@GameClient@@QAEX_N@Z_0
 * func-address: 0x10197ea0
 * callers: 0x10006690
 * callees: 0x100029cd, 0x10003f58, 0x1000430e, 0x10005731, 0x1000a097, 0x1000b04b, 0x1000b3fc, 0x10012c79, 0x102c0ed0
 */

void __thiscall GameClient::Weapon::AutoShoot(GameClient::Weapon *this, bool a2)
{
  CameraHandler *v3; // eax
  struct Camera *Camera; // eax
  float v5; // edx
  int v6; // ecx
  float *v7; // eax
  GameClient::Robot *v8; // ecx
  float *EyesLocation; // eax
  float v10; // ecx
  float v11; // edx
  int v12; // eax
  float v13; // ecx
  float v14; // edx
  float v15; // [esp+4h] [ebp-74h]
  float v16; // [esp+8h] [ebp-70h] BYREF
  float v17; // [esp+Ch] [ebp-6Ch]
  float v18; // [esp+10h] [ebp-68h]
  float v19; // [esp+14h] [ebp-64h] BYREF
  float v20; // [esp+18h] [ebp-60h]
  float v21; // [esp+1Ch] [ebp-5Ch]
  float v22; // [esp+20h] [ebp-58h] BYREF
  float v23; // [esp+24h] [ebp-54h]
  float v24; // [esp+28h] [ebp-50h]
  _BYTE v25[12]; // [esp+2Ch] [ebp-4Ch] BYREF
  char v26[48]; // [esp+38h] [ebp-40h] BYREF
  float v27; // [esp+68h] [ebp-10h]
  float v28; // [esp+6Ch] [ebp-Ch]
  float v29; // [esp+70h] [ebp-8h]

  v3 = CameraHandler::Instance();
  Camera = CameraHandler::GetCamera(v3, 0);
  v19 = *((float *)Camera + 88);
  v20 = *((float *)Camera + 89);
  v21 = *((float *)Camera + 90);
  v5 = *((float *)Camera + 94);
  v17 = *((float *)Camera + 95);
  v6 = *((_DWORD *)this + 67);
  v16 = v5;
  v18 = *((float *)Camera + 96);
  if ( v6 )
  {
    GameClient::Establishment::GetCameraPointMatrix((int)v26, *((_DWORD *)this + 3));
    v19 = v27;
    v20 = v28;
    v21 = v29;
    v7 = (float *)sub_102C0ED0(&v22);
  }
  else
  {
    v8 = (GameClient::Robot *)*((_DWORD *)this + 37);
    if ( !v8 )
      goto LABEL_6;
    EyesLocation = (float *)GameClient::Robot::GetEyesLocation(v8);
    v19 = *EyesLocation;
    v20 = EyesLocation[1];
    v21 = EyesLocation[2];
    v7 = (float *)sub_102C0ED0(&v22);
  }
  v10 = *v7;
  v11 = v7[1];
  v18 = v7[2];
  v17 = v11;
  v16 = v10;
LABEL_6:
  if ( *(_BYTE *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2121) )
  {
    v17 = 0.0;
    sub_100029CD();
  }
  else
  {
    v12 = GameClient::Weapon::computeShootOffset((int)&v22, (int)&v16);
    v13 = *(float *)(v12 + 4);
    v16 = *(float *)v12;
    v14 = *(float *)(v12 + 8);
    v17 = v13;
    v18 = v14;
  }
  v15 = (float)*(int *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2196);
  v22 = v16 * v15;
  v23 = v15 * v17;
  v24 = v15 * v18;
  v16 = v19 + v22;
  v17 = v20 + v23;
  v18 = v21 + v24;
  GameClient::Equip::MakeCurTarget((int)v25, (int)&v19, (int)&v16);
  GameClient::Weapon::fire(this, (const struct Vector *)&v19, (const struct Vector *)v25);
}
