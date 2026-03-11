/*
 * func-name: ?Update@SuspendVehicle@GameClient@@UAEXM@Z_0
 * func-address: 0x101b9130
 * callers: 0x100137a5
 * callees: 0x10003e2c, 0x1000bf05, 0x1000ea57, 0x10010807, 0x102c9dbc
 */

void __thiscall GameClient::SuspendVehicle::Update(GameClient::SuspendVehicle *this, float a2)
{
  void (__thiscall **v3)(GameClient::SuspendVehicle *, int); // edi
  int v4; // eax
  int v5; // eax
  void (__thiscall **v6)(GameClient::SuspendVehicle *, int); // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float *v10; // eax
  unsigned int v11; // edi
  int i; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  float v16; // [esp+38h] [ebp-84h]
  float v17; // [esp+38h] [ebp-84h]
  float v18; // [esp+3Ch] [ebp-80h]
  _BYTE v19[12]; // [esp+40h] [ebp-7Ch] BYREF
  _BYTE v20[12]; // [esp+4Ch] [ebp-70h] BYREF
  _BYTE v21[36]; // [esp+58h] [ebp-64h] BYREF
  _BYTE v22[64]; // [esp+7Ch] [ebp-40h] BYREF

  if ( *((_DWORD *)this + 134) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 134) + 16))(
      *((_DWORD *)this + 134),
      *((_DWORD *)this + 137),
      *((_DWORD *)this + 136),
      *((unsigned __int8 *)this + 552));
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 134) + 12))(LODWORD(a2));
    v3 = (void (__thiscall **)(GameClient::SuspendVehicle *, int))(*(_DWORD *)this + 36);
    v4 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 40))(
           *(_DWORD *)(*((_DWORD *)this + 134) + 4),
           v20);
    v5 = NxHelper::ToVector(v19, v4);
    (*v3)(this, v5);
    v6 = (void (__thiscall **)(GameClient::SuspendVehicle *, int))(*(_DWORD *)this + 40);
    v7 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 44))(
           *(_DWORD *)(*((_DWORD *)this + 134) + 4),
           v21);
    v8 = NxHelper::ToMatrix(v22, v7);
    (*v6)(this, v8);
  }
  GameClient::ControlledEstab::Update(this, a2);
  v9 = *((_DWORD *)this + 134);
  if ( v9 )
  {
    v10 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v9 + 4) + 232))(*(_DWORD *)(v9 + 4), v19);
    v16 = v10[1] * v10[1] + *v10 * *v10 + v10[2] * v10[2];
    v17 = sqrt(v16);
    v11 = 0;
    for ( i = 0; ; i += 120 )
    {
      v13 = *((_DWORD *)this + 140);
      if ( !v13 || v11 >= (*((_DWORD *)this + 141) - v13) / 120 )
        break;
      v14 = *((_DWORD *)this + 140);
      if ( !v14 || v11 >= (*((_DWORD *)this + 141) - v14) / 120 )
        _invalid_parameter_noinfo();
      if ( sub_1000BF05() )
      {
        v18 = v17 / 20.0;
        sub_1000EA57(v18);
        v15 = *((_DWORD *)this + 140);
        if ( !v15 || v11 >= (*((_DWORD *)this + 141) - v15) / 120 )
          _invalid_parameter_noinfo();
        sub_10003E2C();
      }
      ++v11;
    }
  }
}
