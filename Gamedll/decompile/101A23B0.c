/*
 * func-name: ?UpdateCamera@Establishment@GameClient@@UAEXH@Z_0
 * func-address: 0x101a23b0
 * callers: 0x1000ef6b
 * callees: 0x1000ed36, 0x10010839, 0x102c23d0
 */

void __thiscall GameClient::Establishment::UpdateCamera(GameClient::Establishment *this, unsigned int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  GameClient::Seat **v8; // eax
  const void *v9; // esi
  int *v10; // eax
  int v11; // ecx
  int v12; // esi
  _DWORD *v13; // eax
  _BYTE v14[64]; // [esp+8h] [ebp-40h] BYREF

  v3 = *((_DWORD *)this + 57);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 58) - v3) >> 2 )
    {
      if ( (a2 & 0x80000000) == 0 )
      {
        v4 = *((_DWORD *)this + 49);
        if ( v4 )
        {
          if ( a2 < (*((_DWORD *)this + 50) - v4) >> 2 )
          {
            v5 = *((_DWORD *)this + 57);
            if ( !v5 || a2 >= (*((_DWORD *)this + 58) - v5) >> 2 )
              _invalid_parameter_noinfo();
            v6 = *((_DWORD *)this + 57);
            if ( *(_DWORD *)(v6 + 4 * a2) )
            {
              if ( !v6 || a2 >= (*((_DWORD *)this + 58) - v6) >> 2 )
                _invalid_parameter_noinfo();
              v7 = *(_DWORD *)(*((_DWORD *)this + 57) + 4 * a2);
              if ( v7 )
              {
                v8 = (GameClient::Seat **)sub_10010839(a2);
                GameClient::Seat::SetCameraLoc(*v8, (const struct Vector *)(v7 + 212));
                v9 = (const void *)sub_102C23D0(v14);
                qmemcpy((void *)(*(_DWORD *)sub_10010839(a2) + 204), v9, 0x40u);
              }
              v10 = (int *)sub_10010839(a2);
              v11 = *((_DWORD *)this + 57);
              v12 = *v10;
              if ( !v11 || a2 >= (*((_DWORD *)this + 58) - v11) >> 2 )
                _invalid_parameter_noinfo();
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 28))(
                v12,
                *(_DWORD *)(*((_DWORD *)this + 57) + 4 * a2) + 212,
                1);
            }
            else
            {
              v13 = (_DWORD *)sub_10010839(a2);
              (*(void (__thiscall **)(_DWORD, char *, _DWORD))(*(_DWORD *)*v13 + 28))(*v13, (char *)this + 24, 0);
            }
          }
        }
      }
    }
  }
}
