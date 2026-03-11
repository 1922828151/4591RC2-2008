/*
 * func-name: ?Use@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x101979e0
 * callers: 0x10014100
 * callees: 0x10001b04, 0x100029cd, 0x10003f58, 0x1000430e, 0x10005731, 0x10006802, 0x100077ed, 0x1000a097, 0x1000b04b, 0x1000b3fc, 0x1000b7e4, 0x1000bf05, 0x10012c79, 0x10013647, 0x10015bef, 0x100163b0, 0x1001a5d2, 0x102c0ed0
 */

char __thiscall GameClient::Weapon::Use(GameClient::Weapon *this)
{
  int v2; // ecx
  int v3; // ecx
  _DWORD *v4; // edi
  int v5; // eax
  CameraHandler *v6; // eax
  struct Camera *Camera; // eax
  float v8; // edx
  int v9; // ecx
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  GameClient::Robot *v13; // ecx
  float *EyesLocation; // eax
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  int v19; // eax
  float v20; // ecx
  float v21; // edx
  double v22; // st7
  float v24; // [esp+18h] [ebp-90h] BYREF
  float v25; // [esp+1Ch] [ebp-8Ch]
  float v26; // [esp+20h] [ebp-88h]
  float v27; // [esp+24h] [ebp-84h]
  float v28; // [esp+28h] [ebp-80h] BYREF
  float v29; // [esp+2Ch] [ebp-7Ch]
  float v30; // [esp+30h] [ebp-78h]
  float v31; // [esp+34h] [ebp-74h]
  Outpop::Utility::Ref_Object *v32; // [esp+38h] [ebp-70h] BYREF
  float v33; // [esp+3Ch] [ebp-6Ch]
  int v34; // [esp+40h] [ebp-68h] BYREF
  _BYTE v35[12]; // [esp+44h] [ebp-64h] BYREF
  _BYTE v36[12]; // [esp+50h] [ebp-58h] BYREF
  char v37[48]; // [esp+5Ch] [ebp-4Ch] BYREF
  float v38; // [esp+8Ch] [ebp-1Ch]
  float v39; // [esp+90h] [ebp-18h]
  float v40; // [esp+94h] [ebp-14h]
  int v41; // [esp+A4h] [ebp-4h]

  if ( *((_DWORD *)this + 186) == 2 )
  {
    if ( sub_1000BF05() && (unsigned __int8)sub_100163B0() )
      sub_1001A5D2(0);
    v2 = *((_DWORD *)this + 285);
    if ( v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 40))(v2) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 285) + 44))(*((_DWORD *)this + 285));
  }
  v3 = *((_DWORD *)this + 2);
  v4 = (_DWORD *)((char *)this + 740);
  v5 = 160 * *((_DWORD *)this + 185);
  if ( *(_DWORD *)(v5 + v3 + 2116) == 1 )
  {
    *((_DWORD *)this + 186) = 1;
    *((_DWORD *)this + 226) = 0;
  }
  else if ( *(_DWORD *)(v5 + v3 + 2116) == 2 )
  {
    *((_DWORD *)this + 186) = 3;
  }
  else
  {
    (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 156))(this);
  }
  v6 = CameraHandler::Instance();
  Camera = CameraHandler::GetCamera(v6, 0);
  v28 = *((float *)Camera + 88);
  v29 = *((float *)Camera + 89);
  v30 = *((float *)Camera + 90);
  v8 = *((float *)Camera + 94);
  v25 = *((float *)Camera + 95);
  v9 = *((_DWORD *)this + 67);
  v24 = v8;
  v26 = *((float *)Camera + 96);
  if ( v9 )
  {
    GameClient::Establishment::GetCameraPointMatrix((int)v37, *((_DWORD *)this + 3));
    v28 = v38;
    v29 = v39;
    v30 = v40;
    v10 = (float *)sub_102C0ED0(v35);
    v11 = v10[1];
    v24 = *v10;
    v12 = v10[2];
    v25 = v11;
    v26 = v12;
  }
  else
  {
    v13 = (GameClient::Robot *)*((_DWORD *)this + 37);
    if ( v13 )
    {
      EyesLocation = (float *)GameClient::Robot::GetEyesLocation(v13);
      v28 = *EyesLocation;
      v29 = EyesLocation[1];
      v30 = EyesLocation[2];
      v15 = (float *)sub_102C0ED0(v35);
      v16 = *v15;
      v17 = v15[1];
      v18 = v15[2];
      v24 = v16;
      v25 = v17;
      v26 = v18;
    }
  }
  if ( *(_BYTE *)(160 * *v4 + *((_DWORD *)this + 2) + 2121) )
  {
    v25 = 0.0;
    sub_100029CD();
  }
  else
  {
    v19 = GameClient::Weapon::computeShootOffset((int)v35, (int)&v24);
    v20 = *(float *)(v19 + 4);
    v24 = *(float *)v19;
    v21 = *(float *)(v19 + 8);
    v25 = v20;
    v26 = v21;
  }
  v27 = (float)*(int *)(160 * *v4 + *((_DWORD *)this + 2) + 2196);
  v22 = v27;
  v27 = v24 * v27;
  v31 = v22 * v25;
  v33 = v22 * v26;
  v27 = v28 + v27;
  v31 = v29 + v31;
  v33 = v30 + v33;
  v24 = v27;
  v25 = v31;
  v26 = v33;
  GameClient::Equip::MakeCurTarget((int)v36, (int)&v28, (int)&v24);
  sub_100077ED((int)&v32, 9, 26, COERCE_INT(0.0), 1, 512);
  v34 = *((_DWORD *)this + 3);
  v41 = 0;
  sub_10001B04((int)&v34);
  sub_10006802((int)this + 740);
  sub_1000B7E4((int)&v28);
  sub_1000B7E4((int)v36);
  sub_10006802((int)this + 272);
  sub_10015BEF((int)this + 908);
  j_nullsub_44((int)&v32);
  GameClient::Weapon::fire(this, (const struct Vector *)&v28, (const struct Vector *)v36);
  v41 = -1;
  if ( v32 )
    Outpop::Utility::Ref_Object::release(v32);
  return 1;
}
