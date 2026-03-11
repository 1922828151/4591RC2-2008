/*
 * func-name: ?Initialize@Func_Power@GameClient@@UAEXXZ_0
 * func-address: 0x101bf400
 * callers: 0x10015131
 * callees: 0x102c1be0
 */

void __thiscall GameClient::Func_Power::Initialize(GameClient::Func_Power *this)
{
  float *v2; // eax
  double v3; // st7
  void (__thiscall *v4)(GameClient::Func_Power *, float *, _DWORD, _DWORD); // edx
  float v5; // [esp+Ch] [ebp-20h]
  float v6; // [esp+10h] [ebp-1Ch]
  float v7; // [esp+14h] [ebp-18h] BYREF
  float v8; // [esp+18h] [ebp-14h]
  float v9; // [esp+1Ch] [ebp-10h]
  float v10[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 7) )
  {
    if ( *((_BYTE *)this + 188) )
    {
      v7 = 0.0;
      v8 = 0.0;
      v9 = 0.0;
      sub_102C1BE0((char *)this + 192, &v7);
      v2 = (float *)*((_DWORD *)this + 7);
      v3 = v2[7];
      v2 += 6;
      v5 = v3 + v8;
      v6 = v2[2] + v9;
      v4 = *(void (__thiscall **)(GameClient::Func_Power *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 8);
      v10[0] = *v2 + v7;
      v10[1] = v5;
      v10[2] = v6;
      v4(this, v10, *((float *)this + 51), *((float *)this + 52));
    }
  }
}
