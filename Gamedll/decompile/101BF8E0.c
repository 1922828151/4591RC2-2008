/*
 * func-name: ?Update@Func_Power@GameClient@@UAEXM@Z_0
 * func-address: 0x101bf8e0
 * callers: 0x1000664a
 * callees: 0x10018525, 0x102c1be0
 */

void __thiscall GameClient::Func_Power::Update(GameClient::Func_Power *this, float a2)
{
  double v3; // st6
  float *v4; // eax
  double v5; // st7
  void (__thiscall *v6)(GameClient::Func_Power *, float *); // edx
  float v7; // [esp+8h] [ebp-1Ch]
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h] BYREF
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]
  float v12[3]; // [esp+18h] [ebp-Ch] BYREF
  float v13; // [esp+28h] [ebp+4h]
  float v14; // [esp+28h] [ebp+4h]

  if ( *((_BYTE *)this + 128) )
  {
    v7 = a2 * *((double *)this + 17);
    v3 = v7 + *((double *)this + 6);
    *((double *)this + 6) = v3;
    if ( v3 > *((double *)this + 8) )
      *((double *)this + 6) = *((double *)this + 8);
  }
  GameClient::Func_Power::GenerateHyperEnergy(this, a2);
  if ( *((float *)this + 42) > 0.0 )
  {
    v13 = *((float *)this + 42) - *((float *)this + 44) * a2;
    *((float *)this + 42) = v13;
    if ( v13 < 0.0 )
      *((float *)this + 42) = 0.0;
  }
  if ( *((_DWORD *)this + 7) )
  {
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    sub_102C1BE0((char *)this + 192, &v9);
    v4 = (float *)*((_DWORD *)this + 7);
    v5 = v4[7];
    v4 += 6;
    v14 = v5 + v10;
    v8 = v4[2] + v11;
    v6 = *(void (__thiscall **)(GameClient::Func_Power *, float *))(*(_DWORD *)this + 12);
    v12[0] = v9 + *v4;
    v12[1] = v14;
    v12[2] = v8;
    v6(this, v12);
  }
}
