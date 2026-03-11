/*
 * func-name: ?RemoveEquip@Booty@GameClient@@QAEXPAVEquip@2@@Z_0
 * func-address: 0x10144b20
 * callers: 0x100025b3
 * callees: none
 */

void __thiscall GameClient::Booty::RemoveEquip(GameClient::Booty *this, struct GameClient::Equip *a2)
{
  char *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebx
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // ecx

  if ( a2 )
  {
    v2 = (char *)this + 148;
    v3 = (_DWORD *)*((_DWORD *)this + 38);
    if ( (unsigned int)v3 > *((_DWORD *)this + 39) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v4 = (_DWORD *)*((_DWORD *)v2 + 2);
      if ( *((_DWORD *)v2 + 1) > (unsigned int)v4 )
        _invalid_parameter_noinfo();
      if ( v3 == v4 )
        break;
      if ( (unsigned int)v3 >= *((_DWORD *)v2 + 2) )
        _invalid_parameter_noinfo();
      if ( v3[1] == *((_DWORD *)a2 + 3) )
      {
        v5 = (_DWORD *)*((_DWORD *)v2 + 2);
        v6 = v3 + 2;
        if ( v3 + 2 != v5 )
        {
          v7 = v3;
          do
          {
            *v7 = *v6;
            v7[1] = v6[1];
            v6 += 2;
            v7 += 2;
          }
          while ( v6 != v5 );
        }
        *((_DWORD *)v2 + 2) -= 8;
        return;
      }
      if ( (unsigned int)v3 >= *((_DWORD *)v2 + 2) )
        _invalid_parameter_noinfo();
      v3 += 2;
    }
  }
}
