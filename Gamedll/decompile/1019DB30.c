/*
 * func-name: ?OnCollision@ControlledEstab@GameClient@@QAEXABUCollisionInfo@@@Z_0
 * func-address: 0x1019db30
 * callers: 0x10013ff2
 * callees: 0x100029cd, 0x1001a591, 0x102c9dbc
 */

void __thiscall GameClient::ControlledEstab::OnCollision(
        GameClient::ControlledEstab *this,
        const struct CollisionInfo *a2)
{
  float *v3; // eax
  int v4; // edx
  double v5; // st6
  float v6; // eax
  int v7; // ecx
  double v8; // st7
  float v9; // [esp+Ch] [ebp-24h]
  float v10; // [esp+14h] [ebp-1Ch]
  float v11; // [esp+14h] [ebp-1Ch]
  float v12; // [esp+18h] [ebp-18h] BYREF
  float v13; // [esp+1Ch] [ebp-14h]
  float v14; // [esp+20h] [ebp-10h]
  float v15; // [esp+24h] [ebp-Ch] BYREF
  float v16; // [esp+28h] [ebp-8h]
  float v17; // [esp+2Ch] [ebp-4h]
  float v18; // [esp+34h] [ebp+4h]
  float v19; // [esp+34h] [ebp+4h]
  float v20; // [esp+34h] [ebp+4h]
  float v21; // [esp+34h] [ebp+4h]
  float v22; // [esp+34h] [ebp+4h]

  if ( *((_DWORD *)this + 122) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 122) + 40))(*((_DWORD *)this + 122)) )
    {
      (*(void (__thiscall **)(GameClient::ControlledEstab *, float *))(*(_DWORD *)this + 44))(this, &v12);
      v16 = v13;
      v15 = v12;
      v17 = v14;
      sub_100029CD();
      v10 = v13 * v13 + v12 * v12 + v14 * v14;
      v11 = sqrt(v10);
      if ( v11 > 3.0 )
      {
        v3 = (float *)sub_1001A591(0);
        v18 = v3[1] * v16 + *v3 * v15 + v3[2] * v17;
        v19 = -v18;
        if ( v19 > 0.0 )
        {
          v4 = *((_DWORD *)this + 115);
          if ( *(float *)(v4 + 616) < (double)v11 )
            v11 = *(float *)(v4 + 616);
          v5 = v11 / *(float *)(v4 + 616);
          v6 = *((float *)this + 6);
          v16 = *((float *)this + 7);
          v7 = *((_DWORD *)this + 122);
          v15 = v6;
          v17 = *((float *)this + 8);
          v20 = v19 * v5;
          v8 = v20;
          v21 = 0.75 * v20;
          v9 = v21;
          v22 = v8 * *(float *)(v4 + 612);
          (*(void (__stdcall **)(float *, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 28))(
            &v15,
            &v12,
            LODWORD(v22),
            0,
            LODWORD(v9));
        }
      }
    }
  }
}
