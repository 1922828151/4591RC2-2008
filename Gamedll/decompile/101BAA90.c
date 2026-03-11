/*
 * func-name: ?Update@WheelVehicle@GameClient@@UAEXM@Z_0
 * func-address: 0x101baa90
 * callers: 0x1000e188
 * callees: 0x10010807
 */

void __thiscall GameClient::WheelVehicle::Update(GameClient::WheelVehicle *this, float a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  _BYTE v9[12]; // [esp+28h] [ebp-7Ch] BYREF
  _BYTE v10[12]; // [esp+34h] [ebp-70h] BYREF
  _BYTE v11[36]; // [esp+40h] [ebp-64h] BYREF
  _BYTE v12[64]; // [esp+64h] [ebp-40h] BYREF

  if ( *((_DWORD *)this + 134) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 134) + 16))(
      *((_DWORD *)this + 134),
      *((_DWORD *)this + 137),
      *((_DWORD *)this + 136),
      *((unsigned __int8 *)this + 552));
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 134) + 12))(LODWORD(a2));
    v3 = *(_DWORD **)this;
    v4 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 40))(
           *(_DWORD *)(*((_DWORD *)this + 134) + 4),
           v9);
    v5 = NxHelper::ToVector(v10, v4);
    ((void (__thiscall *)(GameClient::WheelVehicle *, int))v3[9])(this, v5);
    v6 = *(_DWORD **)this;
    v7 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 44))(
           *(_DWORD *)(*((_DWORD *)this + 134) + 4),
           v11);
    v8 = NxHelper::ToMatrix(v12, v7);
    ((void (__thiscall *)(GameClient::WheelVehicle *, int))v6[10])(this, v8);
  }
  GameClient::ControlledEstab::Update(this, a2);
}
