/*
 * func-name: ?updateCamera@Robot@GameClient@@IAEXXZ_0
 * func-address: 0x10175070
 * callers: 0x1001a3de
 * callees: 0x1000a8f3, 0x10014669, 0x10018aca, 0x102c26d0
 */

void __thiscall GameClient::Robot::updateCamera(GameClient::Robot *this)
{
  int v2; // eax
  double v3; // st7
  double v4; // st7
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  float v8; // [esp+20h] [ebp-90h]
  float v9; // [esp+24h] [ebp-8Ch]
  float v10; // [esp+28h] [ebp-88h]
  float v11; // [esp+2Ch] [ebp-84h]
  _BYTE v12[48]; // [esp+30h] [ebp-80h] BYREF
  int v13; // [esp+60h] [ebp-50h]
  int v14; // [esp+64h] [ebp-4Ch]
  int v15; // [esp+68h] [ebp-48h]
  _BYTE v16[64]; // [esp+70h] [ebp-40h] BYREF

  if ( (*((_DWORD *)this + 92) & 0x20) == 0 )
  {
    v2 = *((_DWORD *)this + 49);
    v8 = 1.0;
    if ( v2 )
    {
      if ( *((_DWORD *)this + 88) == 1 )
        v3 = *(float *)(v2 + 112);
      else
        v3 = *(float *)(v2 + 108);
      v8 = v3;
    }
    v9 = *((float *)this + 6) + 0.0;
    v10 = *((float *)this + 7) + v8;
    v4 = *((float *)this + 8) + 0.0;
    *((float *)this + 144) = v9;
    v5 = *((_DWORD *)this + 50);
    v11 = v4;
    *((float *)this + 145) = v10;
    *((float *)this + 146) = v11;
    if ( v5 )
    {
      if ( GameClient::RobotBody::GetRobotType() == 2 )
      {
        if ( *((_DWORD *)this + 49) )
        {
          sub_10014669(v12);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 43) + 120))(
                 *((_DWORD *)this + 43),
                 *((_DWORD *)this + 49) + 212,
                 v12,
                 0) )
          {
            v6 = v14;
            v7 = v15;
            *((_DWORD *)this + 144) = v13;
            *((_DWORD *)this + 145) = v6;
            *((_DWORD *)this + 146) = v7;
          }
        }
      }
    }
    if ( !*((_BYTE *)this + 664) && !*((_DWORD *)this + 90) )
    {
      sub_10014669(v12);
      sub_102C26D0(*((float *)this + 168), *((float *)this + 169), *((float *)this + 170));
      qmemcpy((char *)this + 588, (const void *)sub_10018ACA(v16, (int)this + 588), 0x40u);
    }
  }
}
