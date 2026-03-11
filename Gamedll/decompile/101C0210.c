/*
 * func-name: ?Initialize@Func_Receive@GameClient@@UAEXXZ_0
 * func-address: 0x101c0210
 * callers: 0x1000e8a9
 * callees: 0x102c1be0
 */

void __thiscall GameClient::Func_Receive::Initialize(GameClient::Func_Receive *this)
{
  float *v2; // eax
  double v3; // st7
  void (__thiscall *v4)(GameClient::Func_Receive *, float *, _DWORD, _DWORD); // edx
  float v5; // [esp+28h] [ebp-20h]
  float v6; // [esp+2Ch] [ebp-1Ch]
  float v7; // [esp+30h] [ebp-18h] BYREF
  float v8; // [esp+34h] [ebp-14h]
  float v9; // [esp+38h] [ebp-10h]
  float v10; // [esp+3Ch] [ebp-Ch] BYREF
  float v11; // [esp+40h] [ebp-8h]
  float v12; // [esp+44h] [ebp-4h]

  if ( *((_DWORD *)this + 7) )
  {
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    sub_102C1BE0((char *)this + 124, &v7);
    v2 = (float *)*((_DWORD *)this + 7);
    v3 = v2[7];
    v2 += 6;
    v5 = v3 + v8;
    v6 = v2[2] + v9;
    v4 = *(void (__thiscall **)(GameClient::Func_Receive *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 8);
    v10 = *v2 + v7;
    v11 = v5;
    v12 = v6;
    v4(this, &v10, *((float *)this + 34), *((float *)this + 35));
    LogPrintf("Receiver id: %d, Pos: %.2f, %.2f, %.2f", *((_DWORD *)this + 8), v10, v11, v12);
  }
}
