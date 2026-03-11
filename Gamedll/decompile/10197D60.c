/*
 * func-name: ?Shoot@Weapon@GameClient@@QAEXHABVVector@@0H@Z_0
 * func-address: 0x10197d60
 * callers: 0x10018ca0
 * callees: 0x100029cd, 0x1000430e, 0x100058a8, 0x10018e71
 */

void __thiscall GameClient::Weapon::Shoot(
        GameClient::Weapon *this,
        int a2,
        const struct Vector *a3,
        const struct Vector *a4,
        int a5)
{
  int *v6; // edi
  double v7; // st7
  double v8; // st7
  int v9; // edi
  int v10; // eax
  int v11; // eax
  float v12; // [esp+4h] [ebp-58h]
  int v13; // [esp+8h] [ebp-54h]
  int v14; // [esp+Ch] [ebp-50h]
  int v15[3]; // [esp+10h] [ebp-4Ch] BYREF
  _BYTE v16[64]; // [esp+1Ch] [ebp-40h] BYREF

  if ( !*(_BYTE *)(*((_DWORD *)this + 2) + 2404) || a2 <= 0 )
  {
    v6 = (int *)*((_DWORD *)this + 37);
    *((_DWORD *)this + 185) = a2;
    *((_DWORD *)this + 68) = a5;
    if ( v6 && (v6[92] & 0x20) == 0 )
    {
      v12 = *(float *)a4 - *(float *)a3;
      v7 = *((float *)a4 + 1);
      *(float *)v15 = v12;
      *(float *)&v13 = v7 - *((float *)a3 + 1);
      v8 = *((float *)a4 + 2);
      v15[1] = v13;
      *(float *)&v14 = v8 - *((float *)a3 + 2);
      v15[2] = v14;
      sub_100029CD();
      v9 = *v6;
      v10 = sub_10018E71(v16, (int)v15);
      (*(void (__thiscall **)(_DWORD, int))(v9 + 40))(*((_DWORD *)this + 37), v10);
      GameClient::Robot::Use(*((GameClient::Robot **)this + 37));
    }
    v11 = *(_DWORD *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2116);
    if ( v11 == 1 )
    {
      *((_DWORD *)this + 226) = 0;
      *((_DWORD *)this + 186) = 1;
      GameClient::Weapon::fire(this, a3, a4);
    }
    else
    {
      if ( v11 == 2 )
        *((_DWORD *)this + 186) = 3;
      else
        (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 156))(this);
      GameClient::Weapon::fire(this, a3, a4);
    }
  }
}
