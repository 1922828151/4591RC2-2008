/*
 * func-name: ?SetAvailable@Func_Power@GameClient@@UAEX_N@Z_0
 * func-address: 0x101bf320
 * callers: 0x10004a34
 * callees: 0x102c1be0
 */

void __thiscall GameClient::Func_Power::SetAvailable(GameClient::Func_Power *this, bool a2)
{
  _DWORD *v3; // esi
  NxPhysics *v4; // eax
  float *v5; // eax
  double v6; // st7
  void (__thiscall *v7)(GameClient::Func_Power *, float *, _DWORD, _DWORD); // edx
  int v8; // [esp+8h] [ebp-20h]
  struct NxActor **v9; // [esp+8h] [ebp-20h]
  int v10; // [esp+Ch] [ebp-1Ch]
  float v11; // [esp+Ch] [ebp-1Ch]
  float v12; // [esp+10h] [ebp-18h] BYREF
  float v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+18h] [ebp-10h]
  float v15[3]; // [esp+1Ch] [ebp-Ch] BYREF
  float v16; // [esp+2Ch] [ebp+4h]

  *((_BYTE *)this + 36) = a2;
  if ( a2 )
  {
    if ( !*((_DWORD *)this + 2) && *((_BYTE *)this + 188) )
    {
      v12 = 0.0;
      v13 = 0.0;
      v14 = 0.0;
      sub_102C1BE0((char *)this + 192, &v12);
      v5 = (float *)*((_DWORD *)this + 7);
      v6 = v5[7];
      v5 += 6;
      v7 = *(void (__thiscall **)(GameClient::Func_Power *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 8);
      v16 = v6 + v13;
      v11 = v5[2] + v14;
      v15[0] = *v5 + v12;
      v15[1] = v16;
      v15[2] = v11;
      v7(this, v15, *((float *)this + 51), *((float *)this + 52));
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
