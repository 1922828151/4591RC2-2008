/*
 * func-name: ?SetAvailable@Func_Receive@GameClient@@UAEX_N@Z_0
 * func-address: 0x101c0110
 * callers: 0x10006951
 * callees: 0x102c1be0
 */

void __thiscall GameClient::Func_Receive::SetAvailable(GameClient::Func_Receive *this, bool a2)
{
  _DWORD *v3; // esi
  NxPhysics *v4; // eax
  float *v5; // eax
  double v6; // st7
  void (__thiscall *v7)(GameClient::Func_Receive *, float *, _DWORD, _DWORD); // edx
  int v8; // [esp+24h] [ebp-20h]
  struct NxActor **v9; // [esp+24h] [ebp-20h]
  int v10; // [esp+28h] [ebp-1Ch]
  float v11; // [esp+28h] [ebp-1Ch]
  float v12; // [esp+2Ch] [ebp-18h] BYREF
  float v13; // [esp+30h] [ebp-14h]
  float v14; // [esp+34h] [ebp-10h]
  float v15; // [esp+38h] [ebp-Ch] BYREF
  float v16; // [esp+3Ch] [ebp-8h]
  float v17; // [esp+40h] [ebp-4h]
  float v18; // [esp+48h] [ebp+4h]

  *((_BYTE *)this + 36) = a2;
  if ( a2 )
  {
    if ( !*((_DWORD *)this + 2) )
    {
      v12 = 0.0;
      v13 = 0.0;
      v14 = 0.0;
      sub_102C1BE0((char *)this + 124, &v12);
      v5 = (float *)*((_DWORD *)this + 7);
      v6 = v5[7];
      v5 += 6;
      v7 = *(void (__thiscall **)(GameClient::Func_Receive *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 8);
      v18 = v6 + v13;
      v11 = v5[2] + v14;
      v15 = *v5 + v12;
      v16 = v18;
      v17 = v11;
      v7(this, &v15, *((float *)this + 34), *((float *)this + 35));
      LogPrintf("Receiver id: %d, Pos: %.2f, %.2f, %.2f", *((_DWORD *)this + 8), v15, v16, v17);
    }
  }
  else
  {
    v3 = (_DWORD *)((char *)this + 8);
    if ( *((_DWORD *)this + 2) )
    {
      v4 = (NxPhysics *)NxPhysics::Instance(v3, v8, v10, LODWORD(v12), LODWORD(v13));
      NxPhysics::DestroyTriggerActor(v4, v9);
      *v3 = 0;
    }
  }
}
