/*
 * func-name: ?Update@AircraftVehicle@GameClient@@UAEXM@Z_0
 * func-address: 0x101b6320
 * callers: 0x10010c71
 * callees: 0x10010807
 */

void __thiscall GameClient::AircraftVehicle::Update(GameClient::AircraftVehicle *this, float a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  Model *v12; // eax
  double v13; // st7
  int v14; // esi
  int v15; // esi
  float v16; // [esp+34h] [ebp-90h]
  float v17; // [esp+3Ch] [ebp-88h]
  _BYTE v18[12]; // [esp+48h] [ebp-7Ch] BYREF
  _BYTE v19[12]; // [esp+54h] [ebp-70h] BYREF
  _BYTE v20[36]; // [esp+60h] [ebp-64h] BYREF
  _BYTE v21[64]; // [esp+84h] [ebp-40h] BYREF

  v3 = *((_DWORD *)this + 134);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 24))(
      v3,
      *((_DWORD *)this + 137),
      *((_DWORD *)this + 136),
      *((_DWORD *)this + 138));
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 134) + 12))(LODWORD(a2));
    v4 = *(_DWORD *)this;
    v5 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 40))(
           *(_DWORD *)(*((_DWORD *)this + 134) + 4),
           v18);
    v6 = NxHelper::ToVector(v19, v5);
    (*(void (__thiscall **)(GameClient::AircraftVehicle *, int))(v4 + 36))(this, v6);
    v7 = *(_DWORD *)this;
    v8 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 44))(
           *(_DWORD *)(*((_DWORD *)this + 134) + 4),
           v20);
    v9 = NxHelper::ToMatrix(v21, v8);
    (*(void (__thiscall **)(GameClient::AircraftVehicle *, int))(v7 + 40))(this, v9);
  }
  GameClient::ControlledEstab::Update(this, a2);
  v10 = *((_DWORD *)this + 134);
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 75);
    if ( v11 )
    {
      v12 = *(Model **)(v11 + 716);
      if ( v12 )
      {
        v13 = 0.0;
        if ( *(_BYTE *)(v10 + 180) && !*((_BYTE *)this + 556) )
        {
          Model::TransitionToAnimation(v12, *((_DWORD *)this + 151), 0.0, -1.0, 0.0, 1.0);
          v13 = 0.0;
        }
        if ( !*(_BYTE *)(*((_DWORD *)this + 134) + 180) && *((_BYTE *)this + 556) )
        {
          v17 = v13;
          v16 = v13;
          Model::TransitionToAnimation(
            *(Model **)(*((_DWORD *)this + 75) + 716),
            *((_DWORD *)this + 163),
            v16,
            -1.0,
            v17,
            1.0);
        }
        v10 = *((_DWORD *)this + 134);
        *((_BYTE *)this + 556) = *(_BYTE *)(v10 + 180);
      }
    }
    v14 = *((_DWORD *)this + 75);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 1124);
      if ( v15 )
      {
        if ( *(_BYTE *)(v15 + 308) )
          *(_BYTE *)(v10 + 168) = 0;
      }
    }
  }
}
