/*
 * func-name: ?SubmitChange@CDropBagUI@@IAEXXZ_0
 * func-address: 0x1026a890
 * callers: 0x10013b47
 * callees: 0x10001dfc, 0x1000a5a1, 0x1000c24d, 0x1001a0f5, 0x102c9d50, 0x102c9ea8
 */

void __thiscall CDropBagUI::SubmitChange(CDropBagUI *this)
{
  int v2; // eax
  unsigned int i; // edi
  int v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebp
  int v7; // ecx
  _DWORD *v8; // ebx
  int v9; // [esp+18h] [ebp-24h] BYREF
  int v10; // [esp+20h] [ebp-1Ch] BYREF
  void *v11; // [esp+24h] [ebp-18h]
  void *Source; // [esp+28h] [ebp-14h]
  int v13; // [esp+2Ch] [ebp-10h]
  int v14; // [esp+38h] [ebp-4h]

  v2 = sub_10001DFC(*((_DWORD *)this + 1015));
  if ( v2
    && _RTDynamicCast(v2, 0, &GameClient::WorldObject `RTTI Type Descriptor', &GameClient::Booty `RTTI Type Descriptor') )
  {
    v11 = 0;
    Source = 0;
    v13 = 0;
    v14 = 0;
    for ( i = 0; ; ++i )
    {
      v4 = *((_DWORD *)this + 976);
      if ( !v4 || i >= (*((_DWORD *)this + 977) - v4) >> 2 )
        break;
      sub_1001A0F5(&v10, *((_DWORD *)this + 976) + 4 * i);
    }
    v5 = Source;
    v6 = 0;
    while ( 1 )
    {
      v7 = *((_DWORD *)this + 984);
      if ( !v7 || v6 >= (*((_DWORD *)this + 985) - v7) >> 2 )
        break;
      v8 = (_DWORD *)(*((_DWORD *)this + 984) + 4 * v6);
      if ( v11 && ((char *)v5 - (_BYTE *)v11) >> 2 < (unsigned int)((v13 - (int)v11) >> 2) )
      {
        *v5++ = *v8;
        ++v6;
        Source = v5;
      }
      else
      {
        if ( v11 > v5 )
          _invalid_parameter_noinfo();
        sub_1000A5A1((int)&v9, (int)&v10, v5, (int)v8);
        v5 = Source;
        ++v6;
      }
    }
    GameClient::Booty::SwapEquip((int)&v10);
    if ( v11 )
      operator delete(v11);
  }
}
