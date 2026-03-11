/*
 * func-name: ?_updateEngineSound@ControlledEstab@GameClient@@IAEXXZ_0
 * func-address: 0x1019d300
 * callers: 0x1000f687
 * callees: 0x10008e6d, 0x102c9dbc
 */

void __thiscall GameClient::ControlledEstab::_updateEngineSound(GameClient::ControlledEstab *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  double v5; // st7
  float v6; // [esp+1Ch] [ebp-28h]
  float v7; // [esp+24h] [ebp-20h]
  float v8; // [esp+24h] [ebp-20h]
  float v9; // [esp+28h] [ebp-1Ch]
  float v10; // [esp+28h] [ebp-1Ch]
  float v11; // [esp+2Ch] [ebp-18h] BYREF
  float v12; // [esp+30h] [ebp-14h]
  float v13; // [esp+34h] [ebp-10h]
  _DWORD v14[3]; // [esp+38h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 8);
  v14[1] = *((_DWORD *)this + 7);
  v14[0] = v2;
  v4 = *(_DWORD *)this;
  v14[2] = v3;
  (*(void (__thiscall **)(GameClient::ControlledEstab *, float *))(v4 + 44))(this, &v11);
  if ( *((_DWORD *)GameClient::ControlledEstab::GetDriverSeat(this) + 19) == -1 && !*((_BYTE *)this + 476) )
  {
    if ( *((_DWORD *)this + 120) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 120) + 44))(*((_DWORD *)this + 120));
    if ( *((_DWORD *)this + 121) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 121) + 44))(*((_DWORD *)this + 121));
    return;
  }
  v7 = v12 * v12 + v11 * v11 + v13 * v13;
  v8 = sqrt(v7);
  if ( v8 <= 10.0 )
  {
    if ( v8 <= 1.0 )
    {
      if ( *((_DWORD *)this + 121) )
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 121) + 44))(*((_DWORD *)this + 121));
      if ( *((_DWORD *)this + 120)
        && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 120) + 40))(*((_DWORD *)this + 120)) )
      {
        (*(void (__stdcall **)(_DWORD *, float *, _DWORD, int, _DWORD))(**((_DWORD **)this + 120) + 28))(
          v14,
          &v11,
          *(float *)(*((_DWORD *)this + 115) + 548),
          1,
          1.0);
      }
    }
    else
    {
      if ( *((_DWORD *)this + 120) )
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 120) + 44))(*((_DWORD *)this + 120));
      if ( *((_DWORD *)this + 121) )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 121) + 40))(*((_DWORD *)this + 121)) )
        {
          v9 = v8 / 10.0;
          (*(void (__stdcall **)(_DWORD *, float *, _DWORD, int, _DWORD))(**((_DWORD **)this + 121) + 28))(
            v14,
            &v11,
            *(float *)(*((_DWORD *)this + 115) + 580),
            1,
            LODWORD(v9));
        }
        v10 = v8 / 10.0;
        v5 = v10;
        goto LABEL_21;
      }
    }
  }
  else
  {
    if ( *((_DWORD *)this + 120) )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 120) + 44))(*((_DWORD *)this + 120));
    if ( *((_DWORD *)this + 121) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 121) + 40))(*((_DWORD *)this + 121)) )
        (*(void (__stdcall **)(_DWORD *, float *, _DWORD, int, _DWORD))(**((_DWORD **)this + 121) + 28))(
          v14,
          &v11,
          *(float *)(*((_DWORD *)this + 115) + 580),
          1,
          0.75);
      v5 = 0.75;
LABEL_21:
      v6 = v5;
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 121) + 20))(LODWORD(v6));
      (*(void (__stdcall **)(_DWORD *, float *, _DWORD))(**((_DWORD **)this + 121) + 16))(
        v14,
        &v11,
        *(float *)(*((_DWORD *)this + 115) + 580));
    }
  }
}
