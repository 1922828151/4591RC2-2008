/*
 * func-name: ?Update@PedrailVehicle@GameClient@@UAEXM@Z_0
 * func-address: 0x101b7630
 * callers: 0x100056eb
 * callees: 0x1000c08b, 0x10010807
 */

void __thiscall GameClient::PedrailVehicle::Update(GameClient::PedrailVehicle *this, float a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  float *v10; // ecx
  double v11; // st7
  double v12; // st7
  double v13; // st6
  int v14; // eax
  int v15; // ecx
  float *v16; // eax
  int v17; // ecx
  float *v18; // eax
  GameClient::AdapterActor *v19; // ecx
  double v20; // st7
  double v21; // st6
  int v22; // eax
  float v23; // [esp+3Ch] [ebp-84h]
  float v24; // [esp+3Ch] [ebp-84h]
  float v25; // [esp+3Ch] [ebp-84h]
  float v26; // [esp+3Ch] [ebp-84h]
  float v27; // [esp+3Ch] [ebp-84h]
  float v28; // [esp+3Ch] [ebp-84h]
  float v29; // [esp+40h] [ebp-80h]
  float v30; // [esp+40h] [ebp-80h]
  float v31; // [esp+40h] [ebp-80h]
  float v32; // [esp+40h] [ebp-80h]
  float v33; // [esp+40h] [ebp-80h]
  float v34; // [esp+44h] [ebp-7Ch] BYREF
  float v35; // [esp+48h] [ebp-78h]
  float v36; // [esp+4Ch] [ebp-74h]
  _BYTE v37[24]; // [esp+50h] [ebp-70h] BYREF
  float v38; // [esp+68h] [ebp-58h]
  float v39; // [esp+6Ch] [ebp-54h]
  float v40; // [esp+70h] [ebp-50h]
  _BYTE v41[12]; // [esp+74h] [ebp-4Ch] BYREF
  _BYTE v42[64]; // [esp+80h] [ebp-40h] BYREF

  v3 = *((_DWORD *)this + 134);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 16))(
      v3,
      *((_DWORD *)this + 137),
      *((_DWORD *)this + 136),
      *((unsigned __int8 *)this + 552));
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 134) + 12))(LODWORD(a2));
    v4 = *(_DWORD *)this;
    v5 = (*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 40))(
           *(_DWORD *)(*((_DWORD *)this + 134) + 4),
           &v34);
    v6 = NxHelper::ToVector(v41, v5);
    (*(void (__thiscall **)(GameClient::PedrailVehicle *, int))(v4 + 36))(this, v6);
    v7 = *(_DWORD *)this;
    v8 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 44))(
           *(_DWORD *)(*((_DWORD *)this + 134) + 4),
           v37);
    v9 = NxHelper::ToMatrix(v42, v8);
    (*(void (__thiscall **)(GameClient::PedrailVehicle *, int))(v7 + 40))(this, v9);
    v10 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 134) + 4) + 44))(
                     *(_DWORD *)(*((_DWORD *)this + 134) + 4),
                     v42);
    v23 = v10[7] * v10[2] - v10[8] * v10[1];
    v11 = v23 * v10[3];
    v24 = v10[4] * v10[8] - v10[7] * v10[5];
    v12 = v11 + v24 * *v10;
    v25 = v10[5] * v10[1] - v10[2] * v10[4];
    v26 = v12 + v25 * v10[6];
    if ( v26 == 0.0 )
    {
      v38 = 0.0;
      v39 = 0.0;
      v13 = 1.0;
    }
    else
    {
      v27 = 1.0 / v26;
      v29 = v10[7] * v10[3] - v10[6] * v10[4];
      v38 = v29 * v27;
      v30 = v10[6] * v10[1] - v10[7] * *v10;
      v39 = v30 * v27;
      v31 = v10[4] * *v10 - v10[3] * v10[1];
      v13 = v27 * v31;
    }
    v14 = *((_DWORD *)this + 134);
    v40 = v13;
    v15 = *(_DWORD *)(v14 + 4);
    v34 = -1.0;
    v35 = 0.0;
    v36 = 0.0;
    v16 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v15 + 312))(v15, v41, &v34);
    v17 = *(_DWORD *)(*((_DWORD *)this + 134) + 4);
    v32 = v16[1] * v39 + *v16 * v38 + v16[2] * v40;
    v34 = 1.0;
    v35 = 0.0;
    v36 = 0.0;
    v18 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v17 + 312))(v17, v41, &v34);
    v19 = (GameClient::AdapterActor *)*((_DWORD *)this + 75);
    v20 = v18[1] * v39 + *v18 * v38;
    v21 = v18[2];
    v22 = *((_DWORD *)this + 144);
    v28 = v20 + v21 * v40;
    v33 = *((float *)this + 146) - v32 * 0.004000000189989805;
    *((float *)this + 146) = v33;
    *((float *)this + 147) = *((float *)this + 147) - 0.004000000189989805 * v28;
    GameClient::AdapterActor::SetFxMaterialValue(v19, v22, v33);
    GameClient::AdapterActor::SetFxMaterialValue(
      *((GameClient::AdapterActor **)this + 75),
      *((_DWORD *)this + 145),
      *((float *)this + 147));
  }
  GameClient::ControlledEstab::Update(this, a2);
}
