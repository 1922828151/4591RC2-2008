/*
 * func-name: sub_100DF2A0
 * func-address: 0x100df2a0
 * callers: 0x1001488a
 * callees: 0x10001d7a, 0x10003f58, 0x1000a097, 0x102c9dbc
 */

void __thiscall sub_100DF2A0(int this)
{
  double v2; // st7
  CameraHandler *v3; // eax
  float *Camera; // eax
  double v5; // st7
  int v6; // ecx
  double v7; // st7
  int v8; // ecx
  float v9; // [esp+14h] [ebp-28h]
  float v10; // [esp+1Ch] [ebp-20h]
  int v11; // [esp+20h] [ebp-1Ch]
  int v12; // [esp+24h] [ebp-18h]
  float v13; // [esp+2Ch] [ebp-10h]
  float v14; // [esp+2Ch] [ebp-10h]
  float v15; // [esp+30h] [ebp-Ch]
  float v16; // [esp+34h] [ebp-8h]
  float v17; // [esp+38h] [ebp-4h]

  if ( *(_BYTE *)(Editor::Instance(v11, v12) + 2122) )
  {
    if ( (unsigned __int8)std::operator!=<char>(this + 1096, this + 1068) )
    {
      std::string::operator=(this + 1096, this + 1068);
      sub_10001D7A();
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1052) + 24))(*(_DWORD *)(this + 1052), 22);
    }
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1052) + 20))(*(float *)(this + 1132));
    (*(void (__stdcall **)(int, int, _DWORD))(**(_DWORD **)(this + 1052) + 16))(
      this + 856,
      this + 844,
      *(float *)(this + 1124));
    Actor::Tick((Actor *)this);
  }
  if ( *(float *)&GSeconds - *(float *)(this + 1060) > 0.6000000238418579 )
  {
    if ( *(_BYTE *)(this + 1056) )
    {
      v2 = *(float *)&GSeconds;
    }
    else
    {
      *(_BYTE *)(this + 1056) = 1;
      v2 = (double)rand() / 32767.0 * 0.6000000238418579 + *(float *)&GSeconds;
    }
    *(float *)(this + 1060) = v2;
    v3 = CameraHandler::Instance();
    Camera = (float *)CameraHandler::GetCamera(v3, 0);
    v5 = Camera[88] - *(float *)(this + 856);
    Camera += 88;
    v15 = v5;
    v16 = Camera[1] - *(float *)(this + 860);
    v17 = Camera[2] - *(float *)(this + 864);
    v13 = v16 * v16 + v15 * v15 + v17 * v17;
    v14 = sqrt(v13);
    if ( *(float *)(this + 1128) <= (double)v14 )
    {
      if ( *(_BYTE *)(this + 1064) )
      {
        v8 = *(_DWORD *)(this + 1052);
        *(_BYTE *)(this + 1064) = 0;
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8);
      }
    }
    else if ( !*(_BYTE *)(this + 1064) )
    {
      v6 = *(_DWORD *)(this + 1052);
      v10 = *(float *)(this + 1132);
      v7 = *(float *)(this + 1124);
      *(_BYTE *)(this + 1064) = 1;
      v9 = v7;
      (*(void (__thiscall **)(int, int, int, _DWORD, int, _DWORD))(*(_DWORD *)v6 + 28))(
        v6,
        this + 856,
        this + 844,
        LODWORD(v9),
        1,
        LODWORD(v10));
    }
  }
}
