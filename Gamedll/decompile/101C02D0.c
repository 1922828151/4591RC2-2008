/*
 * func-name: ?Update@Func_Receive@GameClient@@UAEXM@Z_0
 * func-address: 0x101c02d0
 * callers: 0x10010c5d
 * callees: 0x102c1be0
 */

void __thiscall GameClient::Func_Receive::Update(GameClient::Func_Receive *this, float a2)
{
  float *v3; // eax
  double v4; // st7
  void (__thiscall *v5)(GameClient::Func_Receive *, float *); // edx
  float v6; // [esp+4h] [ebp-20h]
  float v7; // [esp+8h] [ebp-1Ch]
  float v8; // [esp+Ch] [ebp-18h] BYREF
  float v9; // [esp+10h] [ebp-14h]
  float v10; // [esp+14h] [ebp-10h]
  float v11[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 7) )
  {
    v8 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    sub_102C1BE0((char *)this + 124, &v8);
    v3 = (float *)*((_DWORD *)this + 7);
    v4 = v3[7];
    v3 += 6;
    v6 = v4 + v9;
    v7 = v3[2] + v10;
    v5 = *(void (__thiscall **)(GameClient::Func_Receive *, float *))(*(_DWORD *)this + 12);
    v11[0] = *v3 + v8;
    v11[1] = v6;
    v11[2] = v7;
    v5(this, v11);
  }
}
