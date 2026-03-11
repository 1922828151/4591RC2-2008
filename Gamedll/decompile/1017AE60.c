/*
 * func-name: ?UpdateCamera@Robot@GameClient@@UAEXXZ_0
 * func-address: 0x1017ae60
 * callers: 0x10013dcc
 * callees: 0x10002e37, 0x10003af3, 0x1000a097, 0x1000aa9c, 0x1000adc6, 0x1000dafd, 0x102c0ed0, 0x102c0f30, 0x102c9d50
 */

void __thiscall GameClient::Robot::UpdateCamera(GameClient::Robot *this)
{
  GameClient::EstabManager *v2; // eax
  struct GameClient::Establishment *Establishment; // eax
  float v4; // ecx
  float v5; // edx
  bool v6; // zf
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  CameraHandler *v10; // eax
  int v11; // [esp-Ch] [ebp-7Ch]
  int v12; // [esp-8h] [ebp-78h]
  float v13; // [esp-4h] [ebp-74h]
  float v14; // [esp+0h] [ebp-70h]
  float v15; // [esp+0h] [ebp-70h]
  unsigned int v16; // [esp+4h] [ebp-6Ch]
  float v17; // [esp+4h] [ebp-6Ch]
  float v18; // [esp+18h] [ebp-58h]
  float v19; // [esp+18h] [ebp-58h]
  float v20; // [esp+18h] [ebp-58h]
  float v21; // [esp+1Ch] [ebp-54h]
  float v22; // [esp+1Ch] [ebp-54h]
  float v23; // [esp+20h] [ebp-50h]
  float v24; // [esp+24h] [ebp-4Ch]
  float v25; // [esp+24h] [ebp-4Ch]
  float v26; // [esp+28h] [ebp-48h]
  int v27; // [esp+2Ch] [ebp-44h] BYREF
  int v28; // [esp+30h] [ebp-40h] BYREF
  float v29; // [esp+34h] [ebp-3Ch]
  float v30; // [esp+38h] [ebp-38h]
  _BYTE v31[12]; // [esp+3Ch] [ebp-34h] BYREF
  _BYTE v32[12]; // [esp+48h] [ebp-28h] BYREF
  int v33; // [esp+54h] [ebp-1Ch] BYREF
  void *v34; // [esp+58h] [ebp-18h]
  int v35; // [esp+5Ch] [ebp-14h]
  int v36; // [esp+60h] [ebp-10h]
  int v37; // [esp+6Ch] [ebp-4h]

  if ( (*((_DWORD *)this + 92) & 0x20) != 0 )
  {
    v16 = *((_DWORD *)this + 70);
    v2 = GameClient::EstabManager::Instance();
    Establishment = GameClient::EstabManager::GetEstablishment(v2, v16);
    if ( Establishment )
      (*(void (__thiscall **)(struct GameClient::Establishment *, _DWORD))(*(_DWORD *)Establishment + 144))(
        Establishment,
        *((_DWORD *)this + 71));
  }
  else
  {
    v4 = *((float *)this + 145);
    v5 = *((float *)this + 146);
    v6 = *((_BYTE *)this + 700) == 0;
    v28 = *((int *)this + 144);
    v29 = v4;
    v30 = v5;
    if ( v6 )
    {
      v18 = *((float *)this + 163);
      v7 = (float *)sub_102C0ED0(v31);
      v21 = *v7 * v18;
      v24 = v7[1] * v18;
      *(float *)&v27 = v18 * v7[2];
      v19 = *((float *)this + 163) * 0.1000000014901161;
      v8 = (float *)sub_102C0F30(v32);
      v9 = v19;
      v20 = *v8 * v19;
      v23 = v8[1] * v9;
      v26 = v9 * v8[2];
      v22 = v20 - v21;
      v25 = v23 - v24;
      *(float *)&v27 = v26 - *(float *)&v27;
      *(float *)&v28 = v22 + *(float *)&v28;
      v29 = v29 + v25;
      v30 = v30 + *(float *)&v27;
    }
    v17 = *((float *)this + 167);
    v14 = *((float *)this + 174);
    v10 = CameraHandler::Instance();
    CameraHandler::setToView(v10, (struct Vector *)&v28, (GameClient::Robot *)((char *)this + 588), v14, v17);
    if ( !*((_BYTE *)this + 700) )
    {
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v27 = *((int *)this + 3);
      v37 = 0;
      sub_10002E37(&v33, (int)&v27);
      if ( *((_DWORD *)this + 70) != -1 )
      {
        v27 = *((int *)this + 70);
        sub_10002E37(&v33, (int)&v27);
      }
      v12 = *((_DWORD *)this + 144);
      v13 = *((float *)this + 145);
      v15 = *((float *)this + 146);
      v11 = *(_DWORD *)(*((_DWORD *)this + 43) + 712);
      CameraHandler::Instance();
      CameraHandler::setRayCheck(v11, v12, v13, v15, (int)&v33);
      if ( v34 )
        operator delete(v34);
    }
  }
}
