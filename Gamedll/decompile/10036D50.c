/*
 * func-name: sub_10036D50
 * func-address: 0x10036d50
 * callers: 0x100053b7
 * callees: 0x10001573, 0x10001dfc, 0x10006690, 0x1000c9c3, 0x1000e881, 0x10010771, 0x10016a4f, 0x10019f06, 0x102c9ea8
 */

void __thiscall sub_10036D50(float *this, GameClient::Robot *a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // edi
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  GameClient::Weapon *v16; // edi

  if ( this[3] > (double)this[2] )
  {
    this[2] = GDeltaTime + this[2];
    return;
  }
  if ( *(_BYTE *)this == 1 && !*((_DWORD *)this + 4) )
  {
    v3 = dword_103B4EB0;
    v4 = dword_103B4EAC;
    v5 = 10;
    while ( 1 )
    {
      --v5;
      if ( v4 )
        v6 = (v3 - v4) >> 2;
      else
        v6 = 0;
      v7 = rand();
      v4 = dword_103B4EAC;
      v8 = v7 % v6;
      if ( !dword_103B4EAC || (v3 = dword_103B4EB0, v8 >= (dword_103B4EB0 - dword_103B4EAC) >> 2) )
      {
        _invalid_parameter_noinfo();
        v3 = dword_103B4EB0;
        v4 = dword_103B4EAC;
      }
      if ( *(_DWORD *)(v4 + 4 * v8) != *(_DWORD *)(*((_DWORD *)this + 5) + 4) )
        break;
      if ( v5 <= 0 )
        goto LABEL_16;
    }
    this[1] = *(float *)sub_1000E881(v8);
    *((_DWORD *)this + 4) = 1;
  }
LABEL_16:
  v9 = *((_DWORD *)this + 4) == 1;
  this[2] = 0.0;
  if ( v9 )
  {
    v10 = *((_DWORD *)this + 6);
    if ( !*(_DWORD *)(v10 + 8) )
    {
      *(float *)(v10 + 52) = 0.0;
      *(_DWORD *)(v10 + 8) = 1;
      *(_DWORD *)(v10 + 32) = 0;
    }
    if ( *(_DWORD *)(*((_DWORD *)this + 6) + 8) == 4 )
    {
      v11 = sub_10016A4F(*((_DWORD *)this + 1));
      v12 = v11;
      if ( !v11
        || (v13 = sub_10001DFC(*(_DWORD *)(v11 + 292)),
            (v14 = _RTDynamicCast(
                     v13,
                     0,
                     &GameClient::WorldObject `RTTI Type Descriptor',
                     &GameClient::Robot `RTTI Type Descriptor',
                     0)) == 0)
        || *(_DWORD *)(v14 + 360) )
      {
        this[4] = 0.0;
        return;
      }
      if ( !a2 )
        goto LABEL_27;
      v15 = *((_DWORD *)this + 7);
      if ( *((_DWORD *)a2 + 90) )
      {
        *(_DWORD *)(v15 + 4) = 0;
LABEL_27:
        this[4] = 0.0;
        return;
      }
      if ( *(_DWORD *)(v15 + 4) != 16 )
        sub_10019F06(0, this[14]);
      if ( this[13] <= (double)this[12] )
      {
        this[12] = 0.0;
        v16 = (GameClient::Weapon *)*((_DWORD *)a2 + 57);
        if ( v16 || (GameClient::Robot::SetCurEquip(a2, 1, -1), (v16 = (GameClient::Weapon *)*((_DWORD *)a2 + 57)) != 0) )
        {
          sub_1000C9C3(v12);
          GameClient::Weapon::AutoShoot(v16, 0);
        }
        else
        {
          sub_10010771();
        }
      }
      else
      {
        this[12] = this[12] + this[3];
      }
    }
  }
}
