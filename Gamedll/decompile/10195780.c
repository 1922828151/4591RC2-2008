/*
 * func-name: ?updateTimeCount@Weapon@GameClient@@IAEXXZ_0
 * func-address: 0x10195780
 * callers: 0x100099f3
 * callees: 0x1000bf05, 0x100163b0, 0x1001a5d2
 */

void __thiscall GameClient::Weapon::updateTimeCount(GameClient::Weapon *this)
{
  double v2; // st7
  int v3; // ecx
  int v4; // eax
  double v5; // st6
  int v6; // ecx
  double v7; // st7
  double v8; // st5
  float v9; // edx
  float *v10; // ecx
  void (__thiscall *v11)(GameClient::Weapon *); // edx
  float v12; // [esp+4h] [ebp-4h]
  float v13; // [esp+4h] [ebp-4h]

  if ( *((float *)this + 190) > 0.0 )
    *((float *)this + 190) = *((float *)this + 190) - GDeltaTime;
  if ( *((float *)this + 208) > 0.0 )
    *((float *)this + 208) = *((float *)this + 208) - GDeltaTime;
  if ( *((float *)this + 188) > 0.0 )
    *((float *)this + 188) = *((float *)this + 188) - GDeltaTime;
  if ( *((_DWORD *)this + 186) == 2 )
  {
    v2 = *((float *)this + 227);
    v3 = *((_DWORD *)this + 2);
    v4 = 160 * *((_DWORD *)this + 185);
    v5 = *(float *)(v3 + v4 + 2180);
    v6 = v4 + v3;
    if ( v5 > v2 )
    {
      v12 = v2 + GDeltaTime;
      v7 = v12;
      *((float *)this + 227) = v12;
      v13 = (double)*(int *)(v6 + 2192) * GDeltaTime;
      v8 = *((float *)this + 47);
      if ( v8 - (double)*(int *)(v6 + 2128) >= v13 )
      {
        *((float *)this + 47) = v8 - v13;
        *((float *)this + 228) = v13 + *((float *)this + 228);
      }
      else
      {
        v9 = *(float *)this;
        if ( *(float *)(v6 + 2184) <= v7 )
        {
          (*(void (__thiscall **)(GameClient::Weapon *))(LODWORD(v9) + 128))(this);
        }
        else
        {
          (*(void (__thiscall **)(GameClient::Weapon *))(LODWORD(v9) + 156))(this);
          *((float *)this + 227) = 0.0;
          *((float *)this + 47) = *((float *)this + 228) + *((float *)this + 47);
          *((float *)this + 228) = 0.0;
          if ( sub_1000BF05() && (unsigned __int8)sub_100163B0() )
            sub_1001A5D2(0);
        }
      }
      v10 = (float *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2180);
      if ( *v10 < (double)*((float *)this + 227) )
      {
        v11 = *(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 128);
        *((float *)this + 227) = *v10;
        v11(this);
      }
    }
  }
}
