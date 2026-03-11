/*
 * func-name: sub_100DE990
 * func-address: 0x100de990
 * callers: 0x1000687a
 * callees: 0x10003f58, 0x1000a097, 0x102c9dbc
 */

void __thiscall sub_100DE990(int this)
{
  CameraHandler *v2; // eax
  float *Camera; // eax
  double v4; // st7
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  double v8; // st7
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // ecx
  void (__thiscall *v12)(_DWORD *, _DWORD); // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  _DWORD v16[7]; // [esp-1Ch] [ebp-38h] BYREF
  int v17; // [esp+0h] [ebp-1Ch]
  float v18; // [esp+10h] [ebp-Ch]
  float v19; // [esp+14h] [ebp-8h]
  float v20; // [esp+18h] [ebp-4h]

  v2 = CameraHandler::Instance();
  Camera = (float *)CameraHandler::GetCamera(v2, 0);
  v4 = *(float *)(this + 856) - Camera[88];
  Camera += 88;
  v19 = v4;
  v18 = *(float *)(this + 860) - Camera[1];
  v20 = *(float *)(this + 864) - Camera[2];
  v20 = v18 * v18 + v19 * v19 + v20 * v20;
  v20 = sqrt(v20);
  v18 = v20 / *(float *)(this + 1084);
  if ( v18 > 1.0 )
  {
    v18 = 0.0;
LABEL_3:
    if ( *(_BYTE *)(this + 1052) )
    {
      v5 = OggPlayer::Instance();
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 16))(v5);
      v6 = OggPlayer::Instance();
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
    }
    *(_BYTE *)(this + 1052) = 0;
    goto LABEL_6;
  }
  v18 = 1.0 - v18;
  if ( v18 <= 0.0 )
    goto LABEL_3;
  if ( *(_BYTE *)(this + 1052) )
    goto LABEL_7;
  v13 = OggPlayer::Instance();
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 28))(v13) )
  {
    v17 = 0x10000;
    v20 = COERCE_FLOAT(v16);
    v14 = OggPlayer::Instance();
    std::string::string(v16, (void *)(this + 1056));
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v14 + 4))(
      v14,
      v16[0],
      v16[1],
      v16[2],
      v16[3],
      v16[4],
      v16[5],
      v16[6],
      v17);
    v15 = OggPlayer::Instance();
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 12))(v15, 1);
    *(_BYTE *)(this + 1052) = 1;
  }
LABEL_6:
  if ( *(_BYTE *)(this + 1052) )
  {
LABEL_7:
    v7 = (_DWORD *)OggPlayer::Instance();
    v8 = *(float *)(this + 1088) * v18;
    v9 = *v7;
    v17 = v10;
    v11 = v7;
    v12 = *(void (__thiscall **)(_DWORD *, _DWORD))(v9 + 20);
    v20 = v8;
    v12(v11, LODWORD(v20));
  }
  Actor::Tick((Actor *)this);
}
