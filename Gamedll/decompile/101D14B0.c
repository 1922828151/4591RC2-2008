/*
 * func-name: ?Update@Aura@GameClient@@UAEXM@Z_0
 * func-address: 0x101d14b0
 * callers: 0x1000c329
 * callees: 0x1000bf05, 0x10010519, 0x10014669, 0x100163b0, 0x1001a5d2
 */

void __thiscall GameClient::Aura::Update(GameClient::Aura *this, float a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  char v6; // bl
  int v7; // eax
  _BYTE v8[48]; // [esp+Ch] [ebp-40h] BYREF
  _BYTE v9[16]; // [esp+3Ch] [ebp-10h] BYREF
  float v10; // [esp+50h] [ebp+4h]

  if ( !*((_DWORD *)this + 5) )
  {
    v3 = *((_DWORD *)this + 2);
    v4 = *(_DWORD *)(v3 + 112);
    if ( v4 == 2 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this + 44))(LODWORD(a2));
    }
    else if ( v4 == 1 )
    {
      v10 = *((float *)this + 7) + a2;
      *((float *)this + 7) = v10;
      if ( *(float *)(v3 + 132) <= (double)v10 )
        *((float *)this + 7) = v10 - *(float *)(v3 + 132);
    }
    if ( sub_1000BF05() )
    {
      if ( *(_BYTE *)(v3 + 256) )
      {
        v5 = *((_DWORD *)this + 8);
        if ( v5 )
        {
          if ( *(_DWORD *)(v5 + 112) == 1 )
          {
            v6 = *(_BYTE *)(v5 + 700);
            if ( v6 == (unsigned __int8)sub_100163B0() )
            {
              v7 = sub_100163B0();
              LOBYTE(v7) = (_BYTE)v7 == 0;
              sub_1001A5D2(v7);
            }
          }
        }
      }
      if ( (unsigned __int8)sub_100163B0() )
      {
        sub_10014669(v8);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 8) + 88))(
               *((_DWORD *)this + 8),
               *((_DWORD *)this + 2) + 228,
               v8,
               0) )
        {
          sub_10010519((int)v8, (int)v9);
        }
        else
        {
          sub_10010519(*((_DWORD *)this + 8) + 36, *((_DWORD *)this + 8) + 24);
        }
      }
    }
  }
}
